#!/bin/bash
# Script para compilar arquivos C no WSL
# Converte caminhos do Windows para WSL e compila

FILE_WIN="$1"
DIR_WIN="$2"
FLAGS="$3"

# Converter caminhos do Windows para WSL
if [ -n "$FILE_WIN" ] && [ -n "$DIR_WIN" ]; then
    # Remover aspas se existirem
    FILE_WIN=$(echo "$FILE_WIN" | sed "s/^'//; s/'$//")
    DIR_WIN=$(echo "$DIR_WIN" | sed "s/^'//; s/'$//")
    
    # Tentar converter usando wslpath
    FILE_WSL=$(wslpath -u "$FILE_WIN" 2>/dev/null)
    DIR_WSL=$(wslpath -u "$DIR_WIN" 2>/dev/null)
    
    # Se wslpath falhou, fazer conversão manual
    if [ -z "$FILE_WSL" ] || [ "$FILE_WSL" = "$FILE_WIN" ]; then
        FILE_WSL=$(echo "$FILE_WIN" | sed 's|\\|/|g' | sed 's|^C:|/mnt/c|i' | sed 's|^c:|/mnt/c|i')
    fi
    if [ -z "$DIR_WSL" ] || [ "$DIR_WSL" = "$DIR_WIN" ]; then
        DIR_WSL=$(echo "$DIR_WIN" | sed 's|\\|/|g' | sed 's|^C:|/mnt/c|i' | sed 's|^c:|/mnt/c|i')
    fi
    
    # Extrair nome do arquivo sem extensão
    OUTPUT_NAME=$(basename "$FILE_WSL" .c)
    
    # Compilar
    gcc $FLAGS "$FILE_WSL" -o "$DIR_WSL/$OUTPUT_NAME" -Wall -Wextra
else
    echo "Erro: Parâmetros insuficientes"
    echo "FILE_WIN: [$FILE_WIN]"
    echo "DIR_WIN: [$DIR_WIN]"
    exit 1
fi

