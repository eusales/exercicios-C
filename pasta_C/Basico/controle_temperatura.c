#include <stdio.h>

int main() {
    // Variável para armazenar a leitura do sensor
    int temperatura;

    printf("=== SISTEMA DE MONITORAMENTO DE TANQUE ===\n");
    printf("Digite a temperatura (ou um valor negativo para sair)\n");

    // Loop infinito para monitoramento constante (Simula um sensor ligado 24h)
    while (1) {
        
        printf("\n>> Leitura atual do sensor: ");
        scanf("%d", &temperatura);

        // CONDICAO DE SAIDA: Se digitar negativo, para o programa (Manutenção)
        if (temperatura < 0) {
            printf("[SISTEMA] Encerrando para manutencao...\n");
            break; // O comando 'break' quebra o loop while
        }

        // LOGICA DE CONTROLE
        // Se estiver muito frio (abaixo de 15), liga o aquecedor
        if (temperatura < 15) {
            printf("[ACAO] Temperatura BAIXA. Ativando AQUECEDOR.\n");
        }
        // Se estiver muito quente (acima de 25), liga o resfriador
        else if (temperatura > 25) {
            printf("[ACAO] Temperatura ALTA. Ativando RESFRIADOR.\n");
        }
        // Se estiver entre 15 e 25, não faz nada (Zona Morta / Ideal)
        else {
            printf("[STATUS] Temperatura ESTAVEL. Sistema em espera.\n");
        }
    }

    return 0;
}