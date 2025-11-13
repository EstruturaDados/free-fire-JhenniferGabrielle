#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITENS 10

// Estrutura que representa um item do inventário
typedef struct {
    char nome[30];
    char tipo[20];
    int quantidade;
} Item;

Item mochila[MAX_ITENS];
int total = 0;

// Função para inserir um novo item na mochila
void inserirItem() {
    if (total >= MAX_ITENS) {
        printf("\n⚠️ Mochila cheia! Não é possível adicionar mais itens.\n");
        return;
    }

    Item novo;

    printf("\n--- Cadastro de Novo Item ---\n");
    printf("Nome do item: ");
    scanf(" %[^\n]", novo.nome); // lê string com espaços

    printf("Tipo do item (arma, munição, cura...): ");
    scanf(" %[^\n]", novo.tipo);

    printf("Quantidade: ");
    scanf("%d", &novo.quantidade);

    mochila[total] = novo;
    total++;

    printf("\n✅ Item cadastrado com sucesso!\n");
}

// Função para remover um item pelo nome
void removerItem() {
    if (total == 0) {
        printf("\n⚠️ A mochila está vazia!\n");
        return;
    }

    char nomeBusca[30];
    printf("\nNome do item que deseja remover: ");
    scanf(" %[^\n]", nomeBusca);

    int encontrado = 0;
    for (int i = 0; i < total; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            for (int j = i; j < total - 1; j++) {
                mochila[j] = mochila[j + 1];
            }
            total--;
            encontrado = 1;
            printf("\n🗑️ Item removido com sucesso!\n");
            break;
        }
    }

    if (!encontrado)
        printf("\n❌ Item não encontrado!\n");
}

// Função para listar todos os itens da mochila
void listarItens() {
    if (total == 0) {
        printf("\n📦 Mochila vazia!\n");
        return;
    }

    printf("\n--- Itens da Mochila ---\n");
    for (int i = 0; i < total; i++) {
        printf("%d. Nome: %s | Tipo: %s | Quantidade: %d\n",
               i + 1, mochila[i].nome, mochila[i].tipo, mochila[i].quantidade);
    }
}

// Função para buscar um item pelo nome
void buscarItem() {
    if (total == 0) {
        printf("\n⚠️ A mochila está vazia!\n");
        return;
    }

    char nomeBusca[30];
    printf("\nDigite o nome do item que deseja buscar: ");
    scanf(" %[^\n]", nomeBusca);

    int encontrado = 0;
    for (int i = 0; i < total; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            printf("\n🔍 Item encontrado!\n");
            printf("Nome: %s | Tipo: %s | Quantidade: %d\n",
                   mochila[i].nome, mochila[i].tipo, mochila[i].quantidade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
        printf("\n❌ Item não encontrado na mochila!\n");
}

// Função principal com menu interativo
int main() {
    int opcao;

    do {
        printf("\n========= SISTEMA DE INVENTÁRIO =========\n");
        printf("1. Cadastrar item\n");
        printf("2. Remover item\n");
        printf("3. Listar itens\n");
        printf("4. Buscar item\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirItem();
                break;
            case 2:
                removerItem();
                break;
            case 3:
                listarItens();
                break;
            case 4:
                buscarItem();
                break;
            case 0:
                printf("\n👋 Encerrando o sistema...\n");
                break;
            default:
                printf("\n⚠️ Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}

