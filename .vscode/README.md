# Configurações de Debug para C/C++ (Windows e Linux)

Este diretório contém as configurações do VS Code para desenvolvimento e debug de programas C/C++ em **Windows** (MinGW) e **Linux**.

## 📋 Arquivos de Configuração

### `launch.json`
Configurações de debug com perfis para **Windows** e **Linux**:

**Windows (MinGW):**
- 🪟 Debug C (Windows - MinGW) - Debug normal
- 🪟 Debug C (Windows - MinGW) - Parar na entrada
- 🪟 Executar C (Windows - sem debug)
- 🪟 Debug C++ (Windows - MinGW) - Debug normal
- 🪟 Debug C++ (Windows - MinGW) - Parar na entrada
- 🪟 Executar C++ (Windows - sem debug)

**Linux:**
- 🐧 Debug C++ (Linux) - Compila e debuga o arquivo atual
- 🐧 Debug C++ (Linux) - Sem compilar - Debuga sem compilar (útil se já compilou)
- 🐧 Debug C (Linux) - Debug de código C

### `tasks.json`
Tarefas de compilação para **Windows** e **Linux**:

**Windows (MinGW):**
- Compilar C (Windows - MinGW) - Debug
- Compilar C (Windows - MinGW) - Release
- Compilar C++ (Windows - MinGW) - Debug
- Compilar C++ (Windows - MinGW) - Release

**Linux:**
- C++: Compilar arquivo atual (Linux) - Compila com flags de debug
- C: Compilar arquivo atual (Linux) - Compila código C
- C++: Compilar e executar - Compila e executa imediatamente
- C++: Compilar com flags de competição - Compila com otimizações

### `c_cpp_properties.json`
Configurações do IntelliSense para autocompletar e navegação de código.

### `settings.json`
Configurações gerais do workspace.

## 🚀 Como Usar

### 1. Debug Básico

1. Abra um arquivo `.cpp` ou `.c`
2. Coloque breakpoints clicando na margem esquerda
3. Pressione `F5` ou vá em Run → Start Debugging
4. O VS Code irá compilar e iniciar o debug

### 2. Debug com Entrada de Arquivo

1. Crie um arquivo `input.txt` na mesma pasta do seu código
2. Coloque a entrada de teste no arquivo
3. Selecione a configuração "C++ Debug (Linux) - Com input.txt"
4. Pressione `F5`

### 3. Compilar Manualmente

1. Pressione `Ctrl+Shift+P`
2. Digite "Tasks: Run Task"
3. Selecione a tarefa desejada

Ou use o atalho `Ctrl+Shift+B` para compilar.

## 🔧 Requisitos

### Extensões Necessárias

1. **C/C++** (Microsoft) - Para IntelliSense e debug
2. **C/C++ Extension Pack** (recomendado) - Pacote completo

### Ferramentas do Sistema

**Windows:**
- MinGW-w64 instalado (padrão: `C:\MinGW\bin\`)
- Se estiver em outro local, edite os caminhos em `launch.json` e `tasks.json`

**Linux:**
```bash
# Ubuntu/Debian
sudo apt-get update
sudo apt-get install build-essential gdb

# Fedora
sudo dnf install gcc gcc-c++ gdb

# Arch Linux
sudo pacman -S base-devel gdb
```

## 📝 Flags de Compilação

### Debug
- `-g` - Informações de debug
- `-Wall` - Avisos adicionais
- `-Wextra` - Avisos extras
- `-std=c++17` - Padrão C++17

### Release (competição)
- `-O2` - Otimização nível 2
- `-DLOCAL` - Define macro LOCAL (útil para debug condicional)

## 🐛 Dicas de Debug

### Breakpoints Condicionais
1. Clique com botão direito no breakpoint
2. Edite a condição (ex: `i == 5`)

### Watch Variables
1. Durante o debug, adicione variáveis na aba "Watch"
2. Ou passe o mouse sobre variáveis no código

### Debug Console
Use o console de debug para avaliar expressões:
- Digite variáveis para ver seus valores
- Execute expressões C++

### Logpoints
1. Clique com botão direito na margem
2. Adicione "Logpoint"
3. Digite mensagem (ex: `Valor de i: {i}`)

## 🔍 Comandos Úteis

- `F5` - Iniciar/Continuar debug
- `F9` - Toggle breakpoint
- `F10` - Step over (próxima linha)
- `F11` - Step into (entrar em função)
- `Shift+F11` - Step out (sair de função)
- `Shift+F5` - Parar debug

## ⚠️ Troubleshooting

### "gdb não encontrado"
```bash
which gdb
# Se não encontrar, instale:
sudo apt-get install gdb
```

### "Programa não compila"
- Verifique se tem `g++` instalado: `g++ --version`
- Verifique os erros na aba "Problems"

### "Breakpoints não funcionam"
- Certifique-se de compilar com flag `-g`
- Verifique se está usando a configuração correta

### "Input não funciona"
- Use a configuração "Com input.txt"
- Ou redirecione manualmente: `./programa < input.txt`

## 📚 Recursos Adicionais

- [Documentação do VS Code C++](https://code.visualstudio.com/docs/languages/cpp)
- [GDB Manual](https://www.gnu.org/software/gdb/documentation/)
- [C++ Reference](https://en.cppreference.com/)

