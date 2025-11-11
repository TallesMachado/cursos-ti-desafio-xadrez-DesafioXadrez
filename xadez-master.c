#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas) {
    // Verifica se ainda há casas para mover
    if (casas > 0) {
        printf("Direita\n"); // Imprime a direção do movimento
        movimentoTorre(casas - 1); // Chamada recursiva para mover a próxima casa
    }
}

// Função recursiva para o movimento do Bispo
void movimentoBispo(int casas, int direcao) {
    // Verifica se ainda há casas para mover
    if (casas > 0) {
        if (direcao == 1) {
            printf("Cima, Direita\n"); // Imprime a direção do movimento
        } else if (direcao == 2) {
            printf("Cima, Esquerda\n"); // Imprime a direção do movimento
        } else if (direcao == 3) {
            printf("Baixo, Direita\n"); // Imprime a direção do movimento
        } else if (direcao == 4) {
            printf("Baixo, Esquerda\n"); // Imprime a direção do movimento
        }
        movimentoBispo(casas - 1, direcao); // Chamada recursiva para mover a próxima casa
    }
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas) {
    // Verifica se ainda há casas para mover
    if (casas > 0) {
        printf("Esquerda\n"); // Imprime a direção do movimento
        movimentoRainha(casas - 1); // Chamada recursiva para mover a próxima casa
    }
}

// Função para o movimento do Cavalo
void movimentoCavalo() {
    int i, j;
    // Loop aninhado para simular o movimento do Cavalo em "L"
    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            if ((i + 2 <= 8 && j + 1 <= 8)) {
                printf("Cima, Cima, Direita\n"); // Imprime a direção do movimento
            } else if ((i + 1 <= 8 && j + 2 <= 8)) {
                printf("Cima, Direita, Direita\n"); // Imprime a direção do movimento
            } else if ((i - 2 >= 1 && j - 1 >= 1)) {
                printf("Baixo, Baixo, Esquerda\n"); // Imprime a direção do movimento
            } else if ((i - 1 >= 1 && j - 2 >= 1)) {
                printf("Baixo, Esquerda, Esquerda\n"); // Imprime a direção do movimento
            } else if ((i + 2 <= 8 && j - 1 >= 1)) {
                printf("Cima, Cima, Esquerda\n"); // Imprime a direção do movimento
            } else if ((i + 1 <= 8 && j - 2 >= 1)) {
                printf("Cima, Esquerda, Esquerda\n"); // Imprime a direção do movimento
            } else if ((i - 2 >= 1 && j + 1 <= 8)) {
                printf("Baixo, Baixo, Direita\n"); // Imprime a direção do movimento
            } else if ((i - 1 >= 1 && j + 2 <= 8)) {
                printf("Baixo, Direita, Direita\n"); // Imprime a direção do movimento
            }
        }
    }
}

// Função para o movimento do Bispo com loops aninhados
void movimentoBispoLoops() {
    int i, j;
    // Loop aninhado para simular o movimento do Bispo
    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            if (i + j <= 8) {
                printf("Cima, Direita\n"); // Imprime a direção do movimento
            } else if (i - j >= 1) {
                printf("Baixo, Esquerda\n"); // Imprime a direção do movimento
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    movimentoTorre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    movimentoBispo(5, 1);
    printf("\n");

    printf("Movimento da Rainha:\n");
    movimentoRainha(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    movimentoCavalo();
    printf("\n");

    printf("Movimento do Bispo com loops aninhados:\n");
    movimentoBispoLoops();
    printf("\n");

    return 0;
}
