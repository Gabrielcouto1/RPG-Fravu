#include <stdio.h>
#include <stdlib.h>
#include "Headers/gerar_aleatorio.h"
#include "Headers/dados.h"

int getTamanhoVila(int d4){
    printf("Tamanho da vila: ");
    int qtd;
    switch(d4){
        case 1:
            printf("Abandonada (%d habitantes)\n\n", rand()%11);
            printf("Tavernas: 0\n");
            printf("Igrejas: 0\n");
            printf("Itens magicos: 0\n");
            printf("Ferreiros: 0\n");
            qtd=0;
            break;

        case 2:
            printf("Pequena (%d habitantes).\n\n", rand()%(451)+50);
            printf("Tavernas: 1\n");
            printf("Igrejas: 1\n");

            int r=rand()%2;
            if(r==1)
                printf("Itens magicos: 1\n");
            else
                printf("Itens magicos: 0\n");
            
            printf("Ferreiros: 1.\n");
            qtd=1;

            break;

        case 3:
            printf("Media (%d Habitantes)\n\n", rand()%4501+500);
            qtd=rollD3();
            printf("Tavernas: %d\n",qtd);
            printf("Igrejas: %d\n",rollD3());
            printf("Itens magicos: %d\n",rollD3());
            printf("Ferreiros: 1\n");

            break;

        case 4:
            printf("Grande (+4000 Habitantes).\n\n");
            qtd=rand()%3+2;
            printf("Tavernas: %d\n",qtd);
            printf("Igrejas: %d\n",rand()%4+2);
            printf("Itens magicos: %d\n",rand()%2+2);
            printf("Ferreiros: 3\n");

            break;
    }
    printf("---------------------------------------------------------\n");

    return qtd;
}

void getFonteEconomia(int d4){
    printf("\n\nFonte de economia: ");
    switch(d4){
        case 1:
            printf("Fazendas.\n");
            break;
        case 2:
            printf("Venda de mercadorias.\n");
            break;
        case 3:
            printf("Viajantes.\n");
            break;
        case 4:
            printf("Ensino.\n");
            break;  
    }
    printf("---------------------------------------------------------\n");
}

void getCaracteristicaCidade(int d12){
    printf("\n\nCaracteristicas da cidade: \n");

    switch(d12){
        case 1:
            printf("Templo imponente.\n");
            break;
        case 2:
            printf("Muitos parques.\n");
            break;
        case 3:
            printf("Sede de uma familia muito rica.\n");
            break;
        case 4:
            printf("Cheiro horrivel.\n");
            break;
        case 5:
            printf("Local de muitas batalhas.\n");
            break;
        case 6:
            printf("Local onde passa muitos viajantes.\n");
            break;
        case 7:
            printf("Local de evento tragico.\n");
            break;
        case 8:
            printf("Reputacao estranha.\n");
            break;
        case 9:
            printf("Grande biblioteca.\n");
            break;
        case 10:
            printf("Construida em cima de ruinas.\n");
            break;
        case 11:
            printf("Local de uma grantde tumba.\n");
            break;
        case 12:
            printf("Conhecida por eventos magicos.\n");
            break;
    }
    printf("---------------------------------------------------------\n");
}

void getGuildas(){
    int i;
    int qtd=rollD4()-1;

    if(qtd==0)
        return;
    
    for(i=0;i<qtd;i++){
        printf("\n\nGuilda numero %d\n",i+1);
        printf("Guilda de ");

        switch(rollD20()){
            case 1:
            case 2:
                printf("Ladroes.\n");
                break;
            case 3:
            case 4:
            case 5:
                printf("Guerreiros.\n");
                break;
            case 6:
            case 7:
                printf("Sociedade Arcana.\n");
                break;
            case 8:
            case 9:
            case 10:
            case 11:
                printf("Mercadores.\n");
                break;
            case 12:
            case 13:
                printf("Burgueses.\n");
                break;
            case 14:
            case 15:
            case 16:
                printf("Artesoes.\n");
                break;
            case 17:
            case 18:
            case 19:
                printf("Revolucionarios.\n");
                break;
            case 20:
                printf("Assassinos.\n");
                break;
        }
    }
    printf("---------------------------------------------------------\n");
}

void getTaverna(int qtd, int d4, int d20){
    int i;
    for(i=0;i<qtd;i++){
        printf("\n\nTaverna numero %d\n", i+1);
        printf("Tamanho: ");
        switch(d4){
            case 1:
                printf("Minuscula.\t");
                break;
            case 2:
                printf("Pequena.\t");
                break;
            case 3:
                printf("Media.\t");
                break;
            case 4:
                printf("Grande.\t");
                break;
        }
        printf("\nCaracteristica: ");

        switch(d20){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Quieta e discreta.\n");
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                printf("Barulhenta.\n");
                break;
            case 11:
            case 12:
            case 13:
            case 14:
                printf("Frequentada por guilda.\n");
                break;
            case 15:
                printf("Local de encontro secreto.\n");
                break;
            case 16:
                printf("Bordel.\n");
                break;
            case 17:
            case 18:
                printf("Local de briga.\n");
                break;
            case 19:
                printf("Local de trafico.\n");
                break;
            case 20:
                printf("Clube gastronomico.\n");
                break;
        }
    }
    printf("---------------------------------------------------------\n");
}

void geraCidadeRandom(){
    int i, qtd_taverna, qtd_cidades;

    printf("\nQuantas cidades deseja gerar?: ");
    scanf("%d",&qtd_cidades);
    if(qtd_cidades<=0){
        printf("Insira valores positivos maiores que 0.\n");
        return;
    }
    end();
    
    for(i=0;i<qtd_cidades;i++){
        printf("Vila %d\n",i+1);
        printf("---------------------------------------------------------\n");
        qtd_taverna=getTamanhoVila(rollD4());
        getFonteEconomia(rollD4());
        getCaracteristicaCidade(rollD12());
        getGuildas(rollD20());
        getTaverna(qtd_taverna, rollD4(), rollD20());
        
        pause();
    }  
}

void pause(){
    printf("\nPressione ENTER para continuar...");
    getchar();
    system(clean);
}

/*
*int qtdEstruturas(int tamanho){
    int vet[5];
    vet[0]=2;
    vet[1]=3;

    return vet;
}
*/