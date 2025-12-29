#include <stdio.h>

int main(){

    int n, i = 0, a = 0, b = 1, prox = a + b;
    
    printf("Forneca um numero: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");
    
    for(i = 1; i <= n; i++){
        printf("%d ", a);
        a = b;
        b = prox;
        prox = a + b;
    
    }
    return 0;
}