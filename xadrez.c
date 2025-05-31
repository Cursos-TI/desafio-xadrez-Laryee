#include <stdio.h>

int main() {
    // Variáveis que definem quantas casas cada peça irá se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i;  // Variável auxiliar para os loops

  
    // A Torre se move em linha reta - simularemos 5 casas para a Direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    
    // Movimento do Bispo - WHILE
    // O Bispo se move na diagonal - simularemos 5 casas para Cima e Direita
    printf("\nMovimento do Bispo:\n");
    i = 1;  // Reinicia a variável de controle
    while (i <= movimentoBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    
    // Movimento da Rainha - DO-WHILE
   
    // A Rainha se move em todas as direções - simularemos 8 casas para a Esquerda
    printf("\nMovimento da Rainha:\n");
    i = 1;  // Reinicia a variável de controle
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentoRainha);

    return 0;
}
