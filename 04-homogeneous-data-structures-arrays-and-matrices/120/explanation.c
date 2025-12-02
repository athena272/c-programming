/*
 * EXPLICAÇÃO: Por que podemos omitir o primeiro par de colchetes, mas não o segundo?
 * 
 * Em C, arrays multidimensionais são armazenados em memória de forma LINEAR (row-major order).
 * 
 * Para uma matriz int mat[3][3], a memória é organizada assim:
 * 
 *     [0][0] [0][1] [0][2] [1][0] [1][1] [1][2] [2][0] [2][1] [2][2]
 * 
 * Quando você acessa mat[i][j], o compilador precisa calcular:
 *     endereço = endereço_base + (i * tamanho_da_linha + j) * sizeof(int)
 * 
 * Onde: tamanho_da_linha = número de colunas (segunda dimensão)
 * 
 * Por isso:
 * 
 * 1. O PRIMEIRO par de colchetes pode ser omitido:
 *    - int matrix[][3]  ✓ CORRETO
 *    - O compilador não precisa saber quantas linhas existem para calcular offsets
 *    - Ele só precisa saber o tamanho de cada linha (3 elementos)
 * 
 * 2. O SEGUNDO par de colchetes NÃO pode ser omitido:
 *    - int matrix[][]   ✗ ERRO!
 *    - O compilador PRECISA saber quantas colunas existem em cada linha
 *    - Sem essa informação, ele não consegue calcular onde está mat[i][j] na memória
 * 
 * Exemplo de cálculo:
 *     Para acessar mat[1][2] em uma matriz int mat[3][3]:
 *     offset = (1 * 3 + 2) * sizeof(int) = 5 * 4 = 20 bytes do início
 * 
 *     Se não soubéssemos que há 3 colunas, não conseguiríamos calcular esse offset!
 */

#include <stdio.h>

// ✓ CORRETO: primeiro par omitido, segundo especificado
void func1(int matrix[][3])
{
    printf("Acessando matrix[1][2]: %d\n", matrix[1][2]);
}

// ✓ CORRETO: ambos especificados (mais explícito)
void func2(int matrix[3][3])
{
    printf("Acessando matrix[1][2]: %d\n", matrix[1][2]);
}

// ✗ ERRO: ambos omitidos - compilador não sabe calcular offsets
// void func3(int matrix[][])
// {
//     printf("Isso não compila!\n");
// }

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    func1(mat);  // Funciona!
    func2(mat);  // Funciona!
    
    return 0;
}
