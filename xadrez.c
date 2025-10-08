#include <stdio.h> // Biblioteca padrão de entrada e saída
 
int main() { // Função principal do programa
    
    printf("**Xadrez - Desafio Novato**\n"); // Imprime o título do desafio
    printf("\n");
    // Mover torre 5 casas para a direita
    // Usando loop for para Torre
    printf("=========== Torre ===========\n"); // Imprime o título da seção
    for (int t = 0; t < 5; t++) { // Variavel t de Torre com valor inicial 0, enquanto t for menor que 5 ele continua o loop e incrementa t em 1
        printf("Mover torre para a direita\n"); // Ação de mover a torre
    }
    printf("\n"); // Linha em branco para separar as seções

    // Mover bispo 3 casas na diagonal
    // Usando loop while para Bispo
    printf("=========== Bispo ===========\n"); // Imprime o título da seção
    int b = 0; // Variavel b de Bispo com valor inicial 0
    while (b < 5) { // Enquanto b for menor que 5 ele continua o loop
        printf("Mover bispo para cima e direita\n"); // Ação de mover o bispo
        b++; // Incrementa b em 1
    }
    printf("\n"); // Linha em branco para separar as seções

    // Mover rainha 8 casas para a esquerda
    // Usando loop do-while para Rainha
    printf("=========== Rainha ===========\n"); // Imprime o título da seção
    int r = 0; // Variavel r de Rainha com valor inicial 0
    do { // Executa o bloco pelo menos uma vez e depois verifica a condição
        printf("Mover rainha para a esquerda\n"); // Ação de mover a rainha
        r++; // Incrementa r em 1
    } while (r < 8); // Enquanto r for menor que 8 ele continua o loop
    printf("\n"); // Linha em branco para separar as seções

    return 0; // Indica que o programa terminou com sucesso
    
}
