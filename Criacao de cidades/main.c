#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Headers/dados.h"
#include "Headers/gerar_aleatorio.h"
#include "Headers/gerar_dados_inseridos.h"

int main(){
    srand(time(NULL));
    int  qtd_cidades, op;

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
        getchar();

        switch(op){
            case 1:
                printf("\nQuantas cidades deseja gerar?: ");
                scanf("%d",&qtd_cidades);
                if(qtd_cidades<=0){
                    printf("Insira valores positivos maiores que 0.\n");
                    break;
                }
                getchar();
                pause();
                geraCidadeRandom(qtd_cidades);
                break;

            case 2:
                geraCidadeDadosPre();
                break;

            default:
                printf("\nInsira opcoes validas de 1 a 3.\n");
                break;
        }
    }
    return 1;
}