# Guia de Debug - C Programming

Este guia explica como usar o debug nos diferentes ambientes disponíveis.

## 🐧 Usando Debug no WSL (Windows Subsystem for Linux)

### Pré-requisitos
Certifique-se de ter instalado no WSL:
```bash
sudo apt update
sudo apt install build-essential gdb
```

### Como usar:
1. Abra qualquer arquivo `.c` no VS Code
2. Pressione `F5` ou vá em **Run > Start Debugging**
3. Selecione uma das opções:
   - **🐧 Debug C (WSL)** - Debug normal
   - **🐧 Debug C (WSL) - Parar na entrada** - Para na primeira linha do `main()`
   - **🐧 Executar C (WSL - sem debug)** - Apenas executa sem debug

### Características:
- ✅ Compilação automática via WSL
- ✅ Usa `gcc` e `gdb` do Linux
- ✅ Gera executável sem extensão `.exe`
- ✅ Console integrado no VS Code

---

## 🪟 Usando Debug no Windows (CMD/PowerShell com MinGW)

### Pré-requisitos
1. Instale o **MinGW-w64**:
   - Baixe de: https://www.mingw-w64.org/downloads/
   - Ou use: `winget install mingw-w64`
2. Adicione ao PATH ou ajuste o caminho no `launch.json` se necessário
3. Verifique a instalação:
   ```cmd
   gcc --version
   gdb --version
   ```

### Como usar:
1. Abra qualquer arquivo `.c` no VS Code
2. Pressione `F5` ou vá em **Run > Start Debugging**
3. Selecione uma das opções:
   - **🪟 Debug C (Windows - MinGW)** - Debug normal
   - **🪟 Debug C (Windows - MinGW) - Parar na entrada** - Para na primeira linha do `main()`
   - **🪟 Executar C (Windows - sem debug)** - Apenas executa sem debug

### Características:
- ✅ Compilação automática via MinGW
- ✅ Usa `gcc.exe` e `gdb.exe` do MinGW
- ✅ Gera executável `.exe`
- ✅ Console integrado no VS Code

### Ajustando o caminho do MinGW
Se o MinGW estiver em outro local, edite o `launch.json` e `tasks.json`:
- Procure por `C:\\MinGW\\bin\\gcc.exe`
- Substitua pelo seu caminho (ex: `C:\\msys64\\mingw64\\bin\\gcc.exe`)

---

## 📝 Funcionalidades do Debug

### Breakpoints
- Clique na margem esquerda do editor para adicionar/remover breakpoints
- O programa pausará na linha marcada durante a execução

### Painel de Debug
Durante o debug, você verá:
- **VARIABLES**: Variáveis locais e globais
- **WATCH**: Expressões personalizadas para monitorar
- **CALL STACK**: Pilha de chamadas de funções
- **BREAKPOINTS**: Lista de todos os breakpoints

### Controles de Debug
- **Continue (F5)**: Continua a execução até o próximo breakpoint
- **Step Over (F10)**: Executa a linha atual e vai para a próxima
- **Step Into (F11)**: Entra dentro de funções
- **Step Out (Shift+F11)**: Sai da função atual
- **Restart (Ctrl+Shift+F5)**: Reinicia o debug
- **Stop (Shift+F5)**: Para o debug

---

## 🔧 Solução de Problemas

### Erro: "gdb not found" (WSL)
```bash
sudo apt install gdb
```

### Erro: "gcc not found" (WSL)
```bash
sudo apt install build-essential
```

### Erro: "Cannot find MinGW" (Windows)
- Verifique se o MinGW está instalado
- Ajuste o caminho no `launch.json` e `tasks.json`
- Adicione o MinGW ao PATH do Windows

### Erro de compilação
- Verifique se há erros de sintaxe no código
- Veja a aba "TERMINAL" para mensagens de erro detalhadas

---

## 💡 Dicas

1. **Use breakpoints** para pausar em pontos específicos do código
2. **Monitore variáveis** no painel VARIABLES durante a execução
3. **Use WATCH** para expressões complexas que você quer acompanhar
4. **Console integrado** mostra a saída do programa em tempo real
5. **Compilação automática** acontece antes de cada debug

