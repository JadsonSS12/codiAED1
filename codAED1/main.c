#include <stdio.h>
#include <stdlib.h>
#include "listaSeq1.h"

int main()
{ struct ListaSeq *vol;
    int c = 1;
    int opcao, val, ps;

    while(c){

        printf("-------------MENU-----------\n");
    printf(" 1 inserir_inicio\n 2 no fim\n 3 na posicao\n 4 na ordem\n 5 procurar\n 6 remover inicio\n");
    printf(" 7 no fim\n 8 posicao\n 9 valor\n 10 exibir\n 11 tamanho\n 12 somatorio\n 13 quadrado\n 14 primo\n 0 exit\n");

    scanf("%d", &opcao);

    switch(opcao){

        case 1:

            scanf("%d", &val);
        inserir_inicio(&vol, val);
            break;

        case 2:
            scanf("%d", &val);
            inserir_fim(&vol, val);
             break;

        case 3:

            scanf("%d", &val);
            scanf("%d", &ps);
            inserir_posicao(&vol,val, ps);
             break;

        case 4:

            scanf("%d", &val);
            inserir_ordem(&vol, val);
             break;

        case 5:

            scanf("%d", &val);
            procurar(&vol, val);
             break;

        case 6:
            remover_inicio(&vol);
             break;

        case 7:
            remover_fim(&vol);
             break;

        case 8:

            scanf("%d", &ps);
            remover_posicao(&vol, ps);
             break;

        case 9:

            scanf("%d", &val);
            remover_valor(&vol, val);
             break;

        case 10:
            exibir(&vol);
             break;

        case 11:
            tamanho(&vol);
             break;

        case 12:
            somatorio(&vol);
             break;

        case 13:
            quadrado(&vol);
             break;

        case 14:
            primo(&vol);
             break;

        case 0:
            break;


    }

    }


    return 0;
}
