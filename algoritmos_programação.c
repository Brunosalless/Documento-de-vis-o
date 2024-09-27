#include <stdio.h>
#include <string.h>

// Função para classificar a prioridade de acordo com o impacto no usuário e a viabilidade técnica
const char* classificar_prioridade(const char* impacto_usuario, const char* viabilidade_tecnica) {
    if (strcmp(impacto_usuario, "alto") == 0 && strcmp(viabilidade_tecnica, "alta") == 0) {
        return "Alta";
    } else if (strcmp(impacto_usuario, "medio") == 0 || strcmp(viabilidade_tecnica, "media") == 0) {
        return "Media";
    } else {
        return "Baixa";
    }
}

int main() {
    // Estrutura para definir os requisitos do projeto
    struct Requisito {
        char nome[50];
        char impacto_usuario[10];
        char viabilidade_tecnica[10];
    };

    // Exemplo de requisitos com impacto no usuário e viabilidade técnica
    struct Requisito requisitos[] = {
        {"Registro de Usuario", "alto", "alta"},
        {"Autenticacao", "alto", "media"},
        {"Educacao Financeira", "medio", "baixa"}
    };

    int tamanho = sizeof(requisitos) / sizeof(requisitos[0]);

    // Classificar a prioridade de cada requisito
    for (int i = 0; i < tamanho; i++) {
        const char* prioridade = classificar_prioridade(requisitos[i].impacto_usuario, requisitos[i].viabilidade_tecnica);
        printf("Requisito: %s, Prioridade: %s\n", requisitos[i].nome, prioridade);
    }

    return 0;
}
