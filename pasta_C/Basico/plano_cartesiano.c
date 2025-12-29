#include <stdio.h>

int main() {
    int X, Y;

    // 1. Entrada de dados
    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    // 2. Lógica de Verificação
    // Primeiro verificamos se está nos eixos, pois é uma condição "especial"
    if (X == 0 || Y == 0) {
        printf("eixos\n"); // Está sobre o eixo X ou Y (ou na origem)
    } 
    else if (X > 0 && Y > 0) {
        printf("Q1\n");  // X positivo e Y positivo
    } 
    else if (X < 0 && Y > 0) {
        printf("Q2\n");  // X negativo e Y positivo
    } 
    else if (X < 0 && Y < 0) {
        printf("Q3\n");  // X negativo e Y negativo
    } 
    else if (X > 0 && Y < 0) {
        printf("Q4\n");  // X positivo e Y negativo
    }

    return 0;
}