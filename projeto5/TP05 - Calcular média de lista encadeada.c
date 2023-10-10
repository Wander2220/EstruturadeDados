#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int chave;
    struct Item *proximo;
} Item;

typedef struct Lista {
    Item *cabeca;
    int tamanho;
} Lista;

float calcularMedia(Lista *lista) {
    if (lista == NULL || lista->tamanho == 0) {
        printf("A lista está vazia ou é inválida.\n");
        return 0.0;
    }

    Item *atual = lista->cabeca;
    int soma = 0;

    while (atual != NULL) {
        soma += atual->chave;
        atual = atual->proximo;
    }

    return (float)soma / lista->tamanho;
}
int main() {
    Lista *X = criarListaVazia();

    Item *I1 = (Item *) malloc(sizeof(Item));
    I1->chave = 10;
    Item *I2 = (Item *) malloc(sizeof(Item));
    I2->chave = 20;
    Item *I3 = (Item *) malloc(sizeof(Item));
    I3->chave = 30;    
    Item *I4 = (Item *) malloc(sizeof(Item));
    I4->chave = 40;

    inserirNaPosicao(X, 0, I1);
    inserirNaPosicao(X, 0, I2);
    inserirNaPosicao(X, 0, I3);
    inserirNaPosicao(X, 0, I4);

    printf("Tamanho: %d\n", X->tamanho);
    exibirLista(X);
    removerDaPosicao(X, 0);
    printf("Tamanho: %d\n", X->tamanho);
    exibirLista(X);

    float media = calcularMedia(X);
    printf("Média dos valores na lista: %.2f\n", media);

    return 0;
}
