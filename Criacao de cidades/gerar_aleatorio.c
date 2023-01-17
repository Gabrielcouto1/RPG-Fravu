#include <stdio.h>
#include <stdlib.h>
#include "Headers/gerar_aleatorio.h"
#include "Headers/dados.h"
#include "Headers/funcoes_gerais.h"

void getTamanhoVila(int d4, int *qtd_estruturas){
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
    printf("Bibliotecas: %d\n",qtd_estruturas[2]);
    printf("Lojas: %d\n",qtd_estruturas[3]);
    printf("Ferreiros: %d\n",qtd_estruturas[4] );
    printf("---------------------------------------------------------\n");
}

void getFonteEconomia(int d4){
    printf("\nFonte de economia: ");
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
    printf("\nCaracteristicas da cidade: ");

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
        printf("\nGuilda numero %d\n",i+1);
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
}

void getTaverna(int qtd){
    int i;
    for(i=0;i<qtd;i++){
        printf("\nTaverna numero %d\n", i+1);
        printf("Nome: ");
        getNomeTaverna();
        printf("Tamanho: ");
        switch(rollD4()){
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

        switch(rollD20()){
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

void getNomeTaverna(){
    switch(rollD12()){
        case 1:
            printf("A Enguia ");
            break;
        case 2:
            printf("O Golfinho ");
            break;
        case 3:
            printf("O Anao ");
            break;
        case 4:
            printf("O Ponei ");
            break;
        case 5:
            printf("O Lobo ");
            break;
        case 6:
            printf("O Espirito ");
            break;
        case 7:
            printf("O Cordeiro ");
            break;
        case 8:
            printf("A Montanha ");
            break;
        case 9:
            printf("O Satiro ");
            break;
        case 10:
            printf("A Aranha ");
            break;
        case 11:
            printf("A Estrela ");
            break;
        case 12:
            printf("O Jovem ");
            break;
    }

    switch(rollD12()){
        case 1:
            printf("Prateado(a)\n");
            break;
        case 2:
            printf("Dourado(a)\n");
            break;
        case 3:
            printf("Sorridente\n");
            break;
        case 4:
            printf("Atraente\n");
            break;
        case 5:
            printf("Solitario(a)\n");
            break;
        case 6:
            printf("Bebado(a)\n");
            break;
        case 7:
            printf("Errante\n");
            break;
        case 8:
            printf("Misterioso(a)\n");
            break;
        case 9:
            printf("Negro(a)\n");
            break;
        case 10:
            printf("Reluzente\n");
            break;
        case 11:
            printf("Cambaleante\n");
            break;
        case 12:
            printf("Empinado(a)\n");
            break;
    }
}

void getIgreja(int qtd){
    int i;

    for(i=0;i<qtd;i++){
        printf("\nIgreja numero %d: ",i+1);
        printf("\nTamanho: ");

        switch(rollD4()){
        case 1:
            printf("Minuscula\n");
            break;
        case 2:
            printf("Pequena\n");
            break;
        case 3:
            printf("Media\n");
            break;
        case 4:
            printf("Grande\n");
            break;
        }

        printf("Tipo: ");
        switch(rollD20()){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                printf("Templo Neutro ou bom.\n");
                break;
            case 11:
            case 12:
                printf("Templo de charlatoes.\n");
                break;
            case 13:
            case 14:
                printf("Santuario abandonado.\n");
                break;
            case 15:
                
            case 16:
            case 17:
                printf("Biblioteca dedicada a estudos religiosos.\n");
                break;
            case 18:
            case 19:
                printf("Divindade antiga ou esquecida.\n");
                break;
            case 20:
                printf("Santuario escondido dedicado a um corruptor ou divindade maligna.\n");
                break;
        }
    }
    printf("---------------------------------------------------------\n");
}

void getLoja(int qtd){
    int i;

    for(i=0;i<qtd;i++){
        printf("\nLoja numero %d: ",i+1);
        printf("\nTamanho: ");
        switch(rollD4()){
            case 1:
                printf("Minuscula.\nChance de itens: (incomum 20%%)\n");
                break;
            case 2:
                printf("Pequena.\nChance de itens: (incomum 60%%, raro 20%%)\n");
                break;
            case 3:
                printf("Media.\nChance de itens: (incomum 80%%, raro 60%%, muito raro 20%%)\n");
                break;
            case 4:
                printf("Grande.\nChance de itens: (raro 80%%, muito raro 60%%)\n");
                break;
        }
        
        printf("Tipo de loja: ");
        switch(rollD6()){
            case 1:
                printf("Pocoes e venenos.\n");
                break;
            case 2:
                printf("Equipamentos.\n");
                break;
            case 3:
                printf("Focos arcanos e pergaminhos.\n");
                break;
            case 4:
                printf("Armas e escudos.\n");
                break;
            case 5:
                printf("Itens Maravilhosos.\n");
                break;
            case 6:
                printf("Qualquer outro tipo de item mas muito barato. (Comumente amaldicoado)\n");
                break;
        }
    }
}

void getBiblioteca(int qtd, int tamanho_cidade){
    int i;
    int d100;
    for(i=0;i<qtd;i++){
        d100=rollD100();
        printf("\nBiblioteca de numero %d\n", i+1);
        printf("Tamanho: ");
        switch(tamanho_cidade){
            case 1:
                printf("Media.\nModificador: 0\n");
                break;
            case 2:
                if(d100>=1&&d100<=75)
                    printf("Pequena.\nModificador: -5\n");
                else if(d100>75&&d100<=89)
                    printf("Media.\nModificador: 0\n");
                else if(d100>89&&d100<=95)
                    printf("Grande.\nModificador: +2\n");
                else if(d100>95&&d100<=100)
                    printf("Colossal.\nModificador: +5\n");
                break;

            case 3:
                if(d100>=1&&d100<=50)
                    printf("Pequena.\nModificador: -5\n");
                else if(d100>50&&d100<=75)
                    printf("Media.\nModificador: 0\n");
                else if(d100>75&&d100<=90)
                    printf("Grande.\nModificador: +2\n");
                else if(d100>90&&d100<=100)
                    printf("Colossal.\nModificador: +5\n");
                break;

            case 4:
                if(d100>=1&&d100<=25)
                    printf("Pequena.\nModificador: -5\n");
                else if(d100>25&&d100<=20)
                    printf("Media.\nModificador: 0\n");
                else if(d100>20&&d100<=80)
                    printf("Grande.\nModificador: +2\n");
                else if(d100>80&&d100<=100)
                    printf("Colossal.\nModificador: +5\n");
                break;
        }
    }
}

void geraCidadeRandom(){
    int i, qtd_taverna, qtd_cidades, *qtd_estruturas, d4, qtd_igrejas, qtd_bibliotecas, qtd_lojas;

    printf("\nQuantas cidades deseja gerar?: ");
    scanf("%d",&qtd_cidades);
    if(qtd_cidades<=0){
        printf("Insira valores positivos maiores que 0.\n");
        return;
    }
    pause();
    
    for(i=0;i<qtd_cidades;i++){
        printf("Vila %d\n",i+1);
        printf("---------------------------------------------------------\n");
        d4=rollD4();

        qtd_estruturas=qtdEstruturas(d4);
        qtd_taverna=qtd_estruturas[0];
        qtd_igrejas=qtd_estruturas[1];
        qtd_bibliotecas=qtd_estruturas[2];
        qtd_lojas=qtd_estruturas[3];

        getTamanhoVila(d4, qtd_estruturas);
        getFonteEconomia(rollD4());
        getCaracteristicaCidade(rollD12());
        getGuildas(rollD20());
        printf("---------------------------------------------------------\n");
        getTaverna(qtd_taverna);
        getIgreja(qtd_igrejas);
        getLoja(qtd_lojas);
        printf("---------------------------------------------------------\n");
        getBiblioteca(qtd_bibliotecas, d4);
        pause();
    }  
}