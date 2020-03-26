#include <stdio.h>
#include <stdlib.h>

typedef struct noh_t{
    int item;
    struct noh_t *Prox;
}noh;

typedef struct {
    noh *inicio;
    noh *fim;
}lista;

void CriaLista (lista *L){
    noh *aux = malloc(sizeof(noh));
    L->inicio = aux;
    L->fim = aux;
    L->inicio->Prox = NULL;
}

int Vazia (lista *L){
    return (L->inicio == L->fim);
}

void Inserir (lista *L, int X){
    noh *aux = malloc(sizeof(noh));
    L->fim->Prox = aux;
    aux->item = X;
    aux->Prox = NULL;
    L->fim = aux;
}

void remover (lista *L, noh *p, int *X){
    noh *aux, *q;
    if (Vazia(L)) || (p->Prox == NULL) || (p == NULL){
        printf("Elemento nao existe");
        return ;
    }
    aux = p->Prox;
    q = aux->Prox
    p->Prox = q;

    if (q == NULL)
        L->fim = p;
    /*if (2!=NULL)
        q->ant=p;
     */
    aux->Prox = NULL;
    //aux->=NULL
    *X = aux->item;
    free(aux);
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
