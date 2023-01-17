#include <stdio.h>
#include <stdlib.h>
#include "Headers/funcoes_gerais.h"
#include "Headers/dados.h"

int* qtdEstruturas(int tamanho_cidade){
    int* qtd_estruturas;
    qtd_estruturas=malloc(5*sizeof(int));
    //qtd_estruturas[0]=taverna
    //qtd_estruturas[1]=igreja
    //qtd_estruturas[2]=biblioteca
    //qtd_estruturas[3]=lojas
    //qtd_estruturas[4]=ferreiro

    switch(tamanho_cidade){
        case 1:
            qtd_estruturas[0]=rand()%2;
            qtd_estruturas[1]=0;
            qtd_estruturas[2]=rand()%2;
            qtd_estruturas[3]=rand()%2;
            qtd_estruturas[4]=rand()%2;
            break;

        case 2:
            qtd_estruturas[0]=1;
            qtd_estruturas[1]=1;
            qtd_estruturas[2]=(rand()%2)+1;
            qtd_estruturas[3]=rand()%2;
            qtd_estruturas[4]=1;
            break;

        case 3:
            qtd_estruturas[0]=rollD3();
            qtd_estruturas[1]=rollD3();
            qtd_estruturas[2]=rollD3();
            qtd_estruturas[3]=rollD3();
            qtd_estruturas[4]=rollD3();
            break;
        
        case 4: 
            qtd_estruturas[0]=rand()%3+2;
            qtd_estruturas[1]=rand()%4+2;
            qtd_estruturas[2]=rand()%3+2;
            qtd_estruturas[3]=rand()%2+2;
            qtd_estruturas[4]=3;
            break;
    }

    return qtd_estruturas;
}

void pause(){
    printf("\nPressione ENTER para continuar...");
    getchar();
    system(clean);
}