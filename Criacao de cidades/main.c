#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Headers/dados.h"
#include "Headers/gerar_aleatorio.h"
#include "Headers/gerar_dados_inseridos.h"
#include "Headers/funcoes_gerais.h"

int main(){
    srand(time(NULL));
    int  op;
    system("mkdir CidadesAleatorias");
    system("cls");
    while(1){
        printf("\n----------------- Menu----------------- \n");
        printf("[1]Gerar cidades aleatoriamente;\n");
        printf("[2]Gerar uma cidade inserindo o numero dos dados rolados;\n");
        printf("[3]Sair.\n");
        printf("Insira a opcao: ");
        scanf("%d",&op);
        if(op==3){
            pause();
            return 1;
        }
        pause();

        switch(op){
            case 1:
                geraCidadeRandom();
                break;

            case 2:
                geraCidadeDadosPre();
                break;

            default:
                printf("\nInsira opcoes validas.\n");
                break;
        }
        if(op==1||op==2)
            system("move *.txt CidadesAleatorias");
        system("cls");
    }
    return 1;
}