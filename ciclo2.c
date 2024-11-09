#include <stdio.h>

#define NUM_ETAPAS 8

int main() {
    char *etapas[NUM_ETAPAS] = {
        "Pesquisa e Definicao de Conteudo Educativo",
        "Design de Interface (UI/UX)",
        "Desenvolvimento do Prototipo",
        "Desenvolvimento do Backend",
        "Desenvolvimento do Frontend",
        "Testes de Funcionalidade",
        "Testes com Usuarios (Criancas)",
        "Implantacao e Monitoramento"
    };

    int progresso[NUM_ETAPAS] = {0}; // Inicializa o progresso de todas as etapas com 0%
    int etapaCompleta = 0;

    printf("Simulacao do Fluxo de Desenvolvimento do Software PoupaKids\n");
    printf("Insira o progresso de cada etapa (0 a 100%%).\n");

    while (!etapaCompleta) {
        etapaCompleta = 1; // Assume que todas as etapas estao completas ate que se prove o contrario

        for (int i = 0; i < NUM_ETAPAS; i++) {
            if (progresso[i] < 100) {
                etapaCompleta = 0; // Pelo menos uma etapa ainda nao esta completa
                printf("Progresso atual da etapa '%s' (atual: %d%%): ", etapas[i], progresso[i]);
                int input;
                scanf("%d", &input);

                if (input >= 0 && input <= 100) {
                    progresso[i] = input;
                } else {
                    printf("Valor invalido. Insira um valor entre 0 e 100.\n");
                }
            }
        }

        // Exibe o resumo do progresso
        printf("\nResumo do progresso:\n");
        for (int i = 0; i < NUM_ETAPAS; i++) {
            printf("%s: %d%%\n", etapas[i], progresso[i]);
        }
        printf("\n");
    }

    printf("Todas as etapas foram concluidas! O desenvolvimento do software PoupaKids foi finalizado.\n");

    return 0;
}
