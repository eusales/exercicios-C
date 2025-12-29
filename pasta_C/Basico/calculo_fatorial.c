#include <stdio.h>

int main() {
    int n;
    double fatorial = 1.0; // Importante inicializar com 1, pois é multiplicação

    // 1. Entrada de dados
    printf("Escreva um numero inteiro positivo n: ");
    scanf("%d", &n);

    // 2. Validação: Fatorial não existe para números negativos
    if (n < 0) {
        printf("Erro: O numero deve ser positivo.\n");
    } else {
        // 3. Cálculo do Fatorial
        // O loop vai de 1 até n multiplicando o acumulador
        for (int i = 1; i <= n; i++) {
            fatorial *= i; 
            /* Dica de estudo:
               fatorial *= i; é o mesmo que:
               fatorial = fatorial * i;
            */
        }

        // 4. Saída de dados
        printf("O fatorial de %d eh: %g\n", n, fatorial);
    }

    return 0;
}