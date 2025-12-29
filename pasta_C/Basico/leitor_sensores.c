#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int quantidade_sensores, i;
    float *temperaturas;

    printf("Quantos sensores serão instalados na estufa?");
    scanf("%d", &quantidade_sensores);

    temperaturas = (float*) malloc( quantidade_sensores * sizeof(float) );
    
    for(i = 0; i < quantidade_sensores; i++){
        


}