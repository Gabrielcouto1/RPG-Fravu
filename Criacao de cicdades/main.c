#ifdef _WIN32
    #define clean "cls"
    
#elif __linux__
    #define clean "clear"
#endif

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Headers/dados.h"
#include "Headers/criterios.h"

int main(){
    #ifdef _WIN32
        system("color 80");
    #endif

    srand(time(NULL));
    int x, qtd, i;

    printf("\nQuantas cidades deseja gerar?: ");
    scanf("%d",&x);
    if(x<=0)
        return -1;

    getchar();
    for(i=0;i<x;i++){
        system(clean);
        printf("Vila %d\n",i+1);
        printf("---------------------------------------------------------\n");
        qtd=getTamanhoVila();
        getFonteEconomia();
        getCaracteristicaCidade();
        getGuildas();
        getTaverna(qtd);

        printf("\nPressione ENTER para continuar...");
        getchar();
    }

    return 1;
}

