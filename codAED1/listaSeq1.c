#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct listaSeq{
    int l[MAX];
    int particao;

}ListaSeq;

int inserir_inicio(ListaSeq *lista  , int num){
    if(lista->particao < MAX){
        for (int i = MAX; i > 0; i--){
            lista->l[i] = lista->l[i - 1];
        }
        lista->l[0] = num;
        lista->particao++;

    }else

            return 1;
};

int inserir_fim(ListaSeq *lista, int num){
    if (lista->particao < MAX){
    lista->l[lista->particao] = num;

    lista->particao++;
    } else
        return -1;
}

int inserir_posicao(ListaSeq *lista, int valor, int pos){

    if (lista->particao < MAX){
        if (pos > lista->particao){
            printf("posicao invalida");
                return 1;
            } else{
                if (pos == lista->particao){
                    inserir_fim(lista, valor);
                    return 0;

        }
                if (pos == 0){
                    inserir_inicio(lista, valor);
                    return 0;

        }
                if (pos > 0 && pos < lista->particao){
                    for (int i = lista->particao; i >= pos; i--){
                        lista->l[i] = lista->l[i - 1];
                }
                lista->l[pos] = valor;
                lista->particao++;
                return 0;

                }
            }
    }

}

int inserir_ordem(ListaSeq *lista, int valor){
    if (lista->particao < MAX){
            int j = 0;
            int index;
        while(lista->particao){
            if (valor < lista->l[j]){
                index = j;
                break;
            }
            if (valor == lista->l[j]){
                break;
            }
            if (valor > lista->l[j]){
                j++;
                if (j == lista->particao){
                    index = j;
                    break;
                }
                if (j > lista->particao){

                    break;
            }
        }

    }
        inserir_posicao(lista, valor, index);


    }
}

void exibir(ListaSeq *lista){
    for (int i = 0; i < lista->particao; i++){

    printf("[%d]", lista->l[i]);
    }
}

int procurar(ListaSeq *lista, int num){
    for (int x = 0; x < lista->particao; x++){
        if (num == lista->l[x]){
            printf("%d\n", num);

        }
        if (num != lista->l[x] && num == lista->particao){
            return -1;
        }
    }

}

int tamanho(ListaSeq *lista){
    printf("\n%d\n", lista->particao);


}

void somatorio(ListaSeq *lista){
 int soma = 0;

 for (int x = 0; x < lista->particao; x++){
    soma += lista->l[x];
 }
 printf("%d", soma);
}

int remover_inicio(ListaSeq *lista){
    if (lista->particao != 0){
        for(int x = 0; x < lista->particao; x++){
            lista->l[x] = lista->l[x+1];
        }

        lista->particao--;
    }else
        return -1;
}

int remover_fim(ListaSeq *lista){
    if (lista->particao != 0){
        lista->particao--;
    }else
        return -1;
}

int remover_posicao(ListaSeq *lista, int pos){
    if (lista->particao != 0 && pos < lista->particao){
        for(int j = pos; j <= lista->particao; j++){
            lista->l[j] = lista->l[j + 1];
        }
        lista->particao--;
    }else
        return -1;
}


int remover_valor(ListaSeq *lista, int val){
    if (lista->particao != 0){
            int j = 0;
           for (int j = 0; j < lista->particao; j++){
                lista->l[j];
                if(lista->l[j] == val){
                    for(int x = j; x < lista->particao; x++){
                        lista->l[x] = lista->l[x+1];
                    }
                }
           }

            lista->particao--;
        }else
            return -1;
}

void quadrado(ListaSeq *lista){
    if(lista->particao != 0){
        for(int x = 0; x < lista->particao; x++){
            lista->l[x] = lista->l[x] * lista->l[x];
        }
        exibir(lista);
    }
}

//como nao ha como definir se um numero eh primo apos 40, decidi que primos nao
//sao divisiveis por 2 e 3.

void primo(ListaSeq *lista){
    int qtt = 0;
    if (lista->particao != 0){
        for(int j = 0; j < lista->particao; j ++){
            if (lista->l[j] == 3){
                qtt+=1;
            }
            if (lista->l[j]%2 != 0 && lista->l[j]%3 != 0){
                qtt+= 1;
            }
        }
    }
    printf("%d", qtt);
}
