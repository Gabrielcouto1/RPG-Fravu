#include <stdio.h>
#include <stdlib.h>
#include "Headers/gerar_aleatorio.h"
#include "Headers/dados.h"

*int qtdEstruturas(int tamanho_cidade){
    int qtd_estruturas[5];
    //qtd_estruturas[0]=taverna
    //qtd_estruturas[1]=igreja
    //qtd_estruturas[2]=biblioteca
    //qtd_estruturas[3]=loja magica
    //qtd_estruturas[4]=ferreiro

    switch(tamanho_cidade){
        case 1:
            qtd_estruturas[0]=rand()%2;
            qtd_estruturas[1]=0;
            qtd_estruturas[2]=rand()%2;
            qtd_estruturas[3]=0;
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

void getTamanhoVila(){
    int qtd_estruturas[5], d4=rollD4();
    qtd_estruturas=qtdEstruturas(d4);

    printf("Tamanho da vila: ");
    switch(d4){
        case 1:
            printf("Abandonada (%d habitantes)\n\n", rand()%11);
            break;

        case 2:
            printf("Pequena (%d habitantes).\n\n", rand()%(451)+50);
            break;

        case 3:
            printf("Media (%d Habitantes)\n\n", rand()%4501+500);
            break;

        case 4:
            printf("Grande (%d Habitantes).\n\n", rand()%6001+4000);
            break;
    }
    printf("Tavernas: %d\n",qtd_estruturas[0]);
    printf("Igrejas: %d\n",qtd_estruturas[1]);
    printf("Bibliotecas: %d",qtd_estruturas[2]);
    printf("Itens magicos: %d\n",qtd_estruturas[3]);
    printf("Ferreiros: %d\n",qtd_estruturas[4] );
    printf("---------------------------------------------------------\n");
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
