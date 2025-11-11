// xadrex.c

#include <stdio.h>

int main() {
    // Movimento da Torre (utilizando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (utilizando while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha (utilizando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo (utilizando for)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Cima, Cima, Direita\n");
        printf("Cima, Direita, Direita\n");
        printf("Baixo, Baixo, Direita\n");
        printf("Baixo, Direita, Direita\n");
        printf("Cima, Cima, Esquerda\n");
        printf("Cima, Esquerda, Esquerda\n");
        printf("Baixo, Baixo, Esquerda\n");
        printf("Baixo, Esquerda, Esquerda\n");
    }

    return 0;
}
