#include <stdio.h>
#include <string.h>

int main() {
    char requisito[10];  // Variavel para armazenar o codigo do requisito

    // Solicitando o codigo do requisito
    printf("Insira o codigo do requisito (ex: RF001, RNF001): ");
    scanf("%s", requisito);

    // Verificando a prioridade do requisito
    if (strcmp(requisito, "RF001") == 0 || strcmp(requisito, "RF003") == 0 ||
        strcmp(requisito, "RF005") == 0 || strcmp(requisito, "RF008") == 0) {
        printf("O requisito %s e de ALTA prioridade.\n", requisito);
    } else if (strcmp(requisito, "RF002") == 0 || strcmp(requisito, "RF004") == 0 ||
               strcmp(requisito, "RF006") == 0 || strcmp(requisito, "RF007") == 0 ||
               strcmp(requisito, "RNF001") == 0 || strcmp(requisito, "RNF002") == 0 ||
               strcmp(requisito, "RNF003") == 0 || strcmp(requisito, "RNF004") == 0 ||
               strcmp(requisito, "RNF005") == 0 || strcmp(requisito, "RNF006") == 0 ||
               strcmp(requisito, "RNF007") == 0 || strcmp(requisito, "RNF009") == 0 ||
               strcmp(requisito, "RNF010") == 0) {
        printf("O requisito %s e de MEDIA prioridade.\n", requisito);
    } else if (strcmp(requisito, "RF009") == 0 || strcmp(requisito, "RF010") == 0 ||
               strcmp(requisito, "RNF008") == 0) {
        printf("O requisito %s e de BAIXA prioridade.\n", requisito);
    } else {
        printf("Requisito %s nao encontrado na lista.\n", requisito);
    }

    return 0;
}
