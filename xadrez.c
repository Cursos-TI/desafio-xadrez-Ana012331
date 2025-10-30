#include <stdio.h> 

int main() {
    // ===========================
    // Declaração de variáveis
    // ===========================
    int i;                 // contador para o laço for
    int casasTorre = 5;    // número de casas que a torre vai se mover
    int casasBispo = 5;    // número de casas que o bispo vai se mover
    int casasRainha = 8;   // número de casas que a rainha vai se mover
    int contador = 0;      // contador para o while e do...while

    // ===========================
    // Movimento da TORRE (for)
    // ===========================
    printf("=== Movimento da TORRE ===\n");
    printf("A torre move-se 5 casas para a DIREITA:\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===========================
    // Movimento do BISPO (while)
    // ===========================
    printf("\n=== Movimento do BISPO ===\n");
    printf("O bispo move-se 5 casas na DIAGONAL para CIMA e à DIREITA:\n");

    contador = 1;
    while (contador <= casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }

    // ===========================
    // Movimento da RAINHA (do...while)
    // ===========================
    printf("\n=== Movimento da RAINHA ===\n");
    printf("A rainha move-se 8 casas para a ESQUERDA:\n");

    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasRainha);

    // ===========================
    // Fim do programa
    // ===========================
    printf("\nSimulação concluída!\n");

    return 0;
}
