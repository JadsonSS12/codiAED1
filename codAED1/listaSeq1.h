#ifndef    LISTASEQ1_H
#define LISTASEQ1_H

#define MAX 5

typedef struct listaSeq{
    int l[MAX];
    int particao;

}ListaSeq;


int inserir_inicio(ListaSeq *lista  , int num);

int inserir_fim(ListaSeq *lista, int num);

int inserir_posicao(ListaSeq *lista, int valor, int pos);

int inserir_ordem(ListaSeq *lista, int valor);

void exibir(ListaSeq *lista);

int procurar(ListaSeq *lista, int num);

int tamanho(ListaSeq *lista);

void somatorio(ListaSeq *lista);

int remover_inicio(ListaSeq *lista);

int remover_fim(ListaSeq *lista);

int remover_posicao(ListaSeq *lista, int pos);

int remover_valor(ListaSeq *lista, int val);

void quadrado(ListaSeq *lista);

void primo(ListaSeq *lista);

#endif // LISTASEQ1_H
