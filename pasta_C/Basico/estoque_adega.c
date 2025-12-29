#include <stdio.h>

int main (){
    
    char entrada;
    int total = 0;
    int cont_T = 0, cont_B = 0, cont_R = 0;
    int parametro = 1;

    while (parametro){
    printf("Qual o tipo do vinho (T, B ou R), ou F para parar:\n");
    scanf(" %c", &entrada);

    printf("\n");
    printf("\n");


    switch (entrada){
        case 'T':
            cont_T += 1;
            printf("Status: Adicionado vinho Tinto\n");
            break;
        
        case 'B':
            cont_B += 1;
            printf("Status: Adicionado vinho Branco\n");
            break;
        
        case 'R':
            cont_R += 1;
            printf("Status: Adicionado vinho Rose\n");
            break;
        
        case 'F':
            parametro = 0;
            break;
        
        default:
            printf("Status: Opção invalida, Escolha uma opção valida\n");
    }

    // --- CÁLCULOS E RELATÓRIO FINAL ---
    total = cont_T + cont_B + cont_R;

    printf("\n\n");
    printf("==========================================\n");
    printf("          RELATORIO FINAL DE ESTOQUE      \n");
    printf("==========================================\n");

    if (total > 0) {
        
        printf("TINTOS : %d garrafas (%d%%)\n", cont_T, (cont_T * 100) / total);
        printf("BRANCOS: %d garrafas (%d%%)\n", cont_B, (cont_B * 100) / total);
        printf("ROSES  : %d garrafas (%d%%)\n", cont_R, (cont_R * 100) / total);
        printf("------------------------------------------\n");
        printf("TOTAL  : %d garrafas\n", total);
    } else {
        printf("Nenhum vinho foi registrado.\n");
    }

    return 0;
}

}