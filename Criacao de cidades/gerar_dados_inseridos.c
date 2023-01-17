#include <stdio.h>
#include <stdlib.h>
#include "Headers/dados.h"
#include "Headers/gerar_dados_inseridos.h"
#include "Headers/gerar_aleatorio.h"

void getGuildasDadosPre(int d20){
    switch(d20){
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

int getQtdTaverna(int d4){
    int qtd;

    switch(d4){
        case 1:
            qtd=0;
            break;

        case 2:
            qtd=1;
            break;

        case 3:
            qtd=rollD3();
            break;

        case 4:
            qtd=rand()%3+2;
            break;
    }

    return qtd;
}

void getTavernaDadosPre(int d4, int d20){
    printf("\nTamanho: ");
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

void geraCidadeDadosPre(){
    int i, qtd_taverna, d4_tamanho_cidade, d4_economia, d12_caracteristica, *d20_guildas, *d4_taverna, *d20_taverna;

    printf("\nInsira o D4 rolado para tamanho da cidade: ");
    scanf("%d", &d4_tamanho_cidade);
    getchar();

    if(d4_tamanho_cidade<=0||d4_tamanho_cidade>4){
        printf("\nErro de dado.\n");
        pause();
        return;
    }

    printf("\nInsira o D4 rolado para Fonte de economia: ");
    scanf("%d", &d4_economia);
    getchar();

    if(d4_economia<=0||d4_economia>4){
        printf("\nErro de dado.\n");
        pause();
        return;
    }

    printf("\nInsira o D12 rolado para Caracteristica da cidade: ");
    scanf("%d", &d12_caracteristica);
    getchar();

    if(d12_caracteristica<=0||d12_caracteristica>12){
        printf("\nErro de dado.\n");
        pause();
        return;
    }

    int qtd_guildas=(rollD4())-1;
    printf("\nSerao geradas %d guildas.\n", qtd_guildas);

    d20_guildas=malloc(qtd_guildas*(sizeof(int)));
    
    for(i=0;i<qtd_guildas;i++){
        printf("\nInsira o D20 da guilda numero %d: ", i+1);
        scanf("%d", &d20_guildas[i]);
        getchar();

        if(d20_guildas[i]<=0||d20_guildas[i]>20){
            printf("\nErro de dado.\n");
            pause();
            return;

        }
    }
    printf("---------------------------------------------------------\n");

    qtd_taverna=getQtdTaverna(d4_tamanho_cidade);
    printf("\nSerao geradas %d tavernas.\n", qtd_taverna);

    d4_taverna=malloc(qtd_taverna*(sizeof(int)));
    d4_taverna=malloc(qtd_taverna*(sizeof(int)));

    for(i=0;i<qtd_taverna;i++){
        printf("\nInsira o D4 rolado para tamanho da taverna numero %d: ", i+1);
        scanf("%d", &d4_taverna[i]);
        getchar();

        if(d4_taverna[i]<=0||d4_taverna[i]>4){
            printf("\nErro de dado.\n");
            pause();
            return;

        }

        printf("\nInsira o D20 rolado para caracteristica da taverna %d: ", i+1);
        scanf("%d", &d20_taverna[i]);
        getchar();

        if(d20_taverna[i]<=0||d20_taverna[i]>20){
            printf("\nErro de dado.\n");
            pause();
            return;

        }
    }
    pause();

    getTamanhoVila(d4_tamanho_cidade);
    getFonteEconomia(d4_economia);
    getCaracteristicaCidade(d12_caracteristica);
    
    for(i=0;i<qtd_guildas;i++){
        printf("\nGuilda de numero %d: Guilda de ", i+1);
        getGuildasDadosPre(d20_guildas[i]);
    }

    for(i=0;i<qtd_taverna;i++){
        printf("\nTaverna de numero %d:", i+1);
        getTavernaDadosPre(d4_taverna[i], d20_taverna[i]);
    }

    pause();
}
