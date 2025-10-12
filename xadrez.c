#include <stdio.h> // Biblioteca padrão de entrada e saída
 
/*int main() { // Função principal do programa
    
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

    // Mover Cavalo em L (2 para baixo, 1 para esquerda)
    // Usando loop while para Cavalo e for para o movimento em L
    printf("=========== Cavalo ===========\n"); // Imprime o título da seção
    int movimento = 1; // Variavel c de Cavalo
    while(movimento > 0) { // Loop para simular o movimento do cavalo
        for (int c = 1; c <= 2; c++) { // Loop para mover 2 casas para baixo
            printf("Mover cavalo para baixo\n"); // Ação de mover o cavalo para baixo
        }
        printf("Mover cavalo para a esquerda\n"); // Ação de mover o cavalo para a esquerda
        movimento--; // Decrementa o movimento
    }
    printf("\n"); // Linha em branco para separar as seções*/
    void movertorre(int casas) { // Função recursiva para mover a torre
        if (casas > 0) { // Condição de parada
            printf("Mover torre para a direita\n"); // Ação de mover a torre
            movertorre(casas - 1); // Chamada recursiva com uma casa a menos
        }
    }

    void moverbispo(int casas) { // Função recursiva para mover o bispo
        if (casas <= 0) { // Condição de parada
            return; // Sai da função se não houver mais casas para mover
            
        }
        for(int vertical = 0; vertical < 1; vertical++) { // Loop para mover na vertical
            printf("Mover bispo para cima\n"); // Ação de mover o bispo para cima
            
            for(int horizontal = 0; horizontal < 1; horizontal++) { // Loop para mover na horizontal
                printf("Mover bispo para a direita\n"); // Ação de mover o bispo para a direita
            }
        moverbispo(casas - 1); // Chamada recursiva com uma casa a menos
        }
    }

    void moverainha(int casas) { // Função recursiva para mover a rainha
        if (casas > 0) { // Condição de parada
            printf("Mover rainha para a esquerda\n"); // Ação de mover a rainha
            moverainha(casas - 1); // Chamada recursiva com uma casa a menos
        }
    }

    void movercavalo() {
        int vertical = 0; // Variável para o movimento vertical
        int horizontal = 0; // Variável para o movimento horizontal 

        for (int c= 0; c < 3; c++) { // Loop para o movimento em L do cavalo
            if (vertical == 1) { 
                break; // Sai do loop se o movimento vertical já foi feito
            } 
            
            if (c < 2) { // Move 2 casas para cima
                printf("Mover cavalo para cima\n"); // Ação de mover o cavalo para cima

                if (c == 1) {
                    vertical = 1; // Marca que o movimento vertical foi feito
                }
                continue; // Continua para a próxima iteração do loop
            }
        }

        int C = 0; // Variável para o movimento horizontal
        int limite_horizontal = 1; // Limite para o movimento horizontal
        while (C < limite_horizontal + 1) { // Loop para mover 1 casa para a direita
            if (horizontal == 1) {
                break; // Sai do loop se o movimento horizontal já foi feito
            }
            
            if (C < limite_horizontal) { // Move 1 casa para a direita
                printf("Mover cavalo para a direita\n"); // Ação de mover o cavalo para a direita
                horizontal = 1; // Marca que o movimento horizontal foi feito
                C++; // Incrementa C para evitar loop infinito

                continue; // Continua para a próxima iteração do loop
            }

            else {
                break; // Sai do loop se o movimento horizontal já foi feito
            }
        }
    }

    int main(){ // Função principal do programa
        printf("**Xadrez - Desafio Mestre**\n\n"); // Imprime o título do desafio
        printf("=========== Torre ===========\n"); // Imprime o título da seção
        movertorre(5); // Chama a função para mover a torre 5 casas
        printf("\n"); // Linha em branco para separar as seções

        printf("=========== Bispo ===========\n"); // Imprime o título da seção
        moverbispo(5); // Chama a função para mover o bispo 5 casas
        printf("\n"); // Linha em branco para separar as seções

        printf("=========== Rainha ===========\n"); // Imprime o título da seção
        moverainha(8); // Chama a função para mover a rainha 8 casas
        printf("\n"); // Linha em branco para separar as seções

        printf("=========== Cavalo ===========\n"); // Imprime o título da seção
        movercavalo(); // Chama a função para mover o cavalo

        return 0; // Indica que o programa terminou com sucesso
    }
    

    
    
//}
