// ====== PROJETO WAR ESTRUTURADO ======

// Inclusão de bibliotecas necessárias
#include <stdio.h>
#include <string.h>

// Constantes globais
#define MAX_TERRITORIOS 5

// Definição da struct Território para cadastro dos territórios
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

// Função para limpar o buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função Principal (main) ---
int main() {
    // Criando o vetor para armazenar os dados dos territórios
    struct Territorio mapa[MAX_TERRITORIOS];

    printf("     BEM VINDO AO JOGO WAR!\n");
    printf("=================================\n\n");
    printf("Vamos começar cadastrando os 5 territórios iniciais do nosso mundo.\n\n");

    // Laço de repetição para o cadastro dos territórios
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("--- Cadastro do Território %d ---\n", i + 1);
        
        printf("Nome do Território: ");
        fgets(mapa[i].nome, 30, stdin);
        
        printf("Cor do Exército (ex.: Azul, Verde): ");
        fgets(mapa[i].cor, 10, stdin);
        
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = 0;
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = 0;

        printf("Número de Tropas: ");
        scanf("%d", &mapa[i].tropas);
        limparBufferEntrada();

        printf("\n");
    }

    printf("Cadastro inicial concluído com sucesso!\n\n");

    printf("====================================\n");
    printf("   MAPA DO MUNDO - ESTADO ATUAL\n");
    printf("====================================\n\n");

    // Laço de repetição para exibir os dados dos territórios cadastrados
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("TERRITÓRIO %d\n", i + 1);
        printf("   - Nome: %s\n", mapa[i].nome);
        printf("   - Dominado por: Exército %s\n", mapa[i].cor);
        printf("   - Tropas: %d\n\n", mapa[i].tropas);
    };
    
}
