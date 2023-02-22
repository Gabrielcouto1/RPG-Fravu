#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Headers/dados.h"
#include "Headers/gerar_dados_inseridos.h"
#include "Headers/gerar_aleatorio.h"
#include "Headers/funcoes_gerais.h"

char* getGuildasDadosPre(int d20){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");

    switch(d20){
        case 1:
        case 2:
            strcat(out,"Ladroes.\n");
            break;
        case 3:
        case 4:
        case 5:
            strcat(out,"Guerreiros.\n");
            break;
        case 6:
        case 7:
            strcat(out,"Sociedade Arcana.\n");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            strcat(out,"Mercadores.\n");
            break;
        case 12:
        case 13:
            strcat(out,"Burgueses.\n");
            break;
        case 14:
        case 15:
        case 16:
            strcat(out,"Artesoes.\n");
            break;
        case 17:
        case 18:
        case 19:
            strcat(out,"Revolucionarios.\n");
            break;
        case 20:
            strcat(out,"Assassinos.\n");
            break;
    }
    strcat(out,"\0");
    return out;
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

char* getTavernaDadosPre(int d4, int d20){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");

    strcat(out,"\nTamanho: ");
    switch(d4){
        case 1:
            strcat(out,"Minuscula.\t");
            break;
        case 2:
            strcat(out,"Pequena.\t");
            break;
        case 3:
            strcat(out,"Media.\t");
            break;
        case 4:
            strcat(out,"Grande.\t");
            break;
    }

    strcat(out,"\nCaracteristica: ");
    switch(d20){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            strcat(out,"Quieta e discreta.\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            strcat(out,"Barulhenta.\n");
            break;
        case 11:
        case 12:
        case 13:
        case 14:
            strcat(out,"Frequentada por guilda.\n");
            break;
        case 15:
            strcat(out,"Local de encontro secreto.\n");
            break;
        case 16:
            strcat(out,"Bordel.\n");
            break;
        case 17:
        case 18:
            strcat(out,"Local de briga.\n");
            break;
        case 19:
            strcat(out,"Local de trafico.\n");
            break;
        case 20:
            strcat(out,"Clube gastronomico.\n");
            break;
    }
    strcat(out,"\0");
    return out;
}

char* getIgrejaDadosPre(int d4, int d20){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");
    
    strcat(out,"\nTamanho: ");

    switch(d4){
    case 1:
        strcat(out,"Minuscula\n");
        break;
    case 2:
        strcat(out,"Pequena\n");
        break;
    case 3:
        strcat(out,"Media\n");
        break;
    case 4:
        strcat(out,"Grande\n");
        break;
    }
    strcat(out,"Tipo: ");

    switch(d20){
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
            strcat(out,"Templo Neutro ou bom.\n");
            break;
        case 11:
        case 12:
            strcat(out,"Templo de charlatoes.\n");
            break;
        case 13:
        case 14:
            strcat(out,"Santuario abandonado.\n");
            break;
        case 15:
            
        case 16:
        case 17:
            strcat(out,"Biblioteca dedicada a estudos religiosos.\n");
            break;
        case 18:
        case 19:
            strcat(out,"Divindade antiga ou esquecida.\n");
            break;
        case 20:
            strcat(out,"Santuario escondido dedicado a um corruptor ou divindade maligna.\n");
            break;
    }
    strcat(out,"\0");
    return out;
}

char* getLojaDadosPre(int d4, int d6){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");

    strcat(out,"\nTamanho: ");
    switch(d4){
        case 1:
            strcat(out,"Minuscula.\nChance de itens: (incomum 20%)\n");
            break;
        case 2:
            strcat(out,"Pequena.\nChance de itens: (incomum 60%, raro 20%)\n");
            break;
        case 3:
            strcat(out,"Media.\nChance de itens: (incomum 80%, raro 60%, muito raro 20%%)\n");
            break;
        case 4:
            strcat(out,"Grande.\nChance de itens: (raro 80%, muito raro 60%)\n");
            break;
    }
    
    strcat(out,"Tipo de loja: ");
    switch(d6){
        case 1:
            strcat(out,"Pocoes e venenos.\n");
            break;
        case 2:
            strcat(out,"Equipamentos.\n");
            break;
        case 3:
            strcat(out,"Focos arcanos e pergaminhos.\n");
            break;
        case 4:
            strcat(out,"Armas e escudos.\n");
            break;
        case 5:
            strcat(out,"Itens Maravilhosos.\n");
            break;
        case 6:
            strcat(out,"Qualquer outro tipo de item mas muito barato. (Comumente amaldicoado)\n");
            break;
    }
    strcat(out,"\0");
    return out;
}

char* getBibliotecaDadosPre(int tamanho_cidade, int d100){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");

    strcat(out,"Tamanho: ");
    switch(tamanho_cidade){
        case 1:
            strcat(out,"Media.\nModificador: 0\n");
            break;
        case 2:
            if(d100>=1&&d100<=75)
                strcat(out,"Pequena.\nModificador: -5\n");
            else if(d100>75&&d100<=89)
                strcat(out,"Media.\nModificador: 0\n");
            else if(d100>89&&d100<=95)
                strcat(out,"Grande.\nModificador: +2\n");
            else if(d100>95&&d100<=100)
                strcat(out,"Colossal.\nModificador: +5\n");
            break;
        case 3:
            if(d100>=1&&d100<=50)
                strcat(out,"Pequena.\nModificador: -5\n");
            else if(d100>50&&d100<=75)
                strcat(out,"Media.\nModificador: 0\n");
            else if(d100>75&&d100<=90)
                strcat(out,"Grande.\nModificador: +2\n");
            else if(d100>90&&d100<=100)
                strcat(out,"Colossal.\nModificador: +5\n");
            break;
        case 4:
            if(d100>=1&&d100<=25)
                strcat(out,"Pequena.\nModificador: -5\n");
            else if(d100>25&&d100<=20)
                strcat(out,"Media.\nModificador: 0\n");
            else if(d100>20&&d100<=80)
                strcat(out,"Grande.\nModificador: +2\n");
            else if(d100>80&&d100<=100)
                strcat(out,"Colossal.\nModificador: +5\n");
            break;
    }
    strcat(out,"\0");
    return out;
}

void geraCidadeDadosPre(){
    int i, d4_tamanho_cidade, d4_economia, d12_caracteristica;
    int *d20_guildas, *d4_taverna, *d20_taverna, *d4_igreja, *d20_igreja, *d4_loja, *d6_loja, *d100_biblioteca;
    int *qtd_estruturas, qtd_taverna, qtd_igrejas, qtd_lojas, qtd_bibliotecas, qtd_guildas;

    printf("\nInsira o D4 rolado para tamanho da cidade: ");
    scanf("%d", &d4_tamanho_cidade);
    getchar();

    if(d4_tamanho_cidade<=0||d4_tamanho_cidade>4){
        printf("\nErro de dado.\n");
        pause();
        return;
    }

    qtd_estruturas=malloc(5*sizeof(int));
    qtd_estruturas=qtdEstruturas(d4_tamanho_cidade);
    qtd_taverna=qtd_estruturas[0];
    qtd_igrejas=qtd_estruturas[1];
    qtd_bibliotecas=qtd_estruturas[2];
    qtd_lojas=qtd_estruturas[3];
    qtd_guildas=(rollD4())-1;
    d20_guildas=malloc(qtd_guildas*(sizeof(int)));
    d4_taverna=malloc(qtd_taverna*(sizeof(int)));
    d20_taverna=malloc(qtd_taverna*(sizeof(int)));
    d4_igreja=malloc(qtd_igrejas*(sizeof(int)));
    d20_igreja=malloc(qtd_igrejas*(sizeof(int)));
    d4_loja=malloc(qtd_lojas*(sizeof(int)));
    d6_loja=malloc(qtd_lojas*(sizeof(int)));
    d100_biblioteca=malloc(qtd_bibliotecas*(sizeof(int)));

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

    printf("\n\nSerao geradas %d guildas.\n", qtd_guildas);
    for(i=0;i<qtd_guildas;i++){
        printf("\nInsira o D20 da guilda numero %d: ", i+1);
        scanf("%d", &d20_guildas[i]);
        getchar();

        if(d20_guildas[i]<=0||d20_guildas[i]>20){
            printf("\nErro de dado.\n");
            pause();
            return;

        }
        printf("\n");
    }
    printf("\n\nSerao geradas %d tavernas.\n", qtd_taverna);

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

        if(d20_taverna[i]<=0||d20_taverna[i]>20){
            printf("\nErro de dado.\n");
            pause();
            return;
        }
        printf("\n");
    }

    printf("\n\nSerao geradas %d igrejas.\n", qtd_igrejas);
    for(i=0;i<qtd_igrejas;i++){
        printf("\nInsira o D4 rolado para tamanho da igreja numero %d: ", i+1);
        scanf("%d", &d4_igreja[i]);
        getchar();

        if(d4_igreja[i]<=0||d4_igreja[i]>4){
            printf("\nErro de dado.\n");
            pause();
            return;

        }

        printf("\nInsira o D20 rolado para caracteristica da igreja numero %d: ", i+1);
        scanf("%d", &d20_igreja[i]);

        if(d20_igreja[i]<=0||d20_igreja[i]>20){
            printf("\nErro de dado.\n");
            pause();
            return;
        }
        printf("\n");
    }
    
    printf("\n\nSerao geradas %d lojas.\n", qtd_lojas);
    for(i=0;i<qtd_lojas;i++){
        printf("\nInsira o D4 rolado para tamanho da loja numero %d: ", i+1);
        scanf("%d", &d4_loja[i]);
        getchar();

        if(d4_loja[i]<=0||d4_loja[i]>4){
            printf("\nErro de dado.\n");
            pause();
            return;

        }

        printf("\nInsira o D20 rolado para caracteristica da loja numero %d: ", i+1);
        scanf("%d", &d6_loja[i]);

        if(d6_loja[i]<=0||d6_loja[i]>6){
            printf("\nErro de dado.\n");
            pause();
            return;
        }
        printf("\n");
    }

    printf("\n\nSerao geradas %d bibliotecas.\n", qtd_bibliotecas);
    for(i=0;i<qtd_bibliotecas;i++){
        printf("\nInsira o D100 rolado para tamanho da biblioteca numero %d: ", i+1);
        scanf("%d", &d100_biblioteca[i]);
        getchar();

        if(d100_biblioteca[i]<=0||d100_biblioteca[i]>100){
            printf("\nErro de dado.\n");
            pause();
            return;
        }
        printf("\n");
    }

    pause();
    pause();
    pause();
    
    FILE *fp;
    fp=fopen("Cidade_Dados_Pre_Rolados.txt","w+");

    printf("%s",getTamanhoVila(d4_tamanho_cidade, qtd_estruturas));
    fprintf(fp,"%s",getTamanhoVila(d4_tamanho_cidade, qtd_estruturas));

    printf("%s",getFonteEconomia(d4_economia));
    fprintf(fp,"%s",getFonteEconomia(d4_economia));

    printf("%s",getCaracteristicaCidade(d12_caracteristica));
    fprintf(fp,"%s",getCaracteristicaCidade(d12_caracteristica));
    
    for(i=0;i<qtd_guildas;i++){
        printf("\nGuilda de numero %d: Guilda de ", i+1);
        fprintf(fp,"\nGuilda de numero %d: Guilda de ", i+1);

        printf("%s",getGuildasDadosPre(d20_guildas[i]));
        fprintf(fp,"%s",getGuildasDadosPre(d20_guildas[i]));
    }
    printf("---------------------------------------------------------\n");
    fprintf(fp,"---------------------------------------------------------\n");

    for(i=0;i<qtd_taverna;i++){
        printf("\nTaverna de numero %d:", i+1);
        fprintf(fp,"\nTaverna de numero %d:", i+1);

        printf("%s",getTavernaDadosPre(d4_taverna[i], d20_taverna[i]));
        fprintf(fp,"%s",getTavernaDadosPre(d4_taverna[i], d20_taverna[i]));
    }
    printf("---------------------------------------------------------\n");
    fprintf(fp,"---------------------------------------------------------\n");

    for(i=0;i<qtd_igrejas;i++){
        printf("\nIgreja de numero %d:", i+1);
        fprintf(fp,"\nIgreja de numero %d:", i+1);

        printf("%s",getIgrejaDadosPre(d4_igreja[i],d20_igreja[i]));
        fprintf(fp,"%s",getIgrejaDadosPre(d4_igreja[i],d20_igreja[i]));
    }
    printf("---------------------------------------------------------\n");
    fprintf(fp,"---------------------------------------------------------\n");

    for(i=0;i<qtd_lojas;i++){
        printf("\nLoja de numero %d:", i+1);
        fprintf(fp,"\nLoja de numero %d:", i+1);

        printf("%s",getLojaDadosPre(d4_loja[i],d6_loja[i]));
        fprintf(fp,"%s",getLojaDadosPre(d4_loja[i],d6_loja[i]));
    }
    printf("---------------------------------------------------------\n");
    fprintf(fp,"---------------------------------------------------------\n");

    for(i=0;i<qtd_bibliotecas;i++){
        printf("\nBiblioteca de numero %d:", i+1);
        fprintf(fp,"\nBiblioteca de numero %d:", i+1);

        printf("%s",getBibliotecaDadosPre(d4_tamanho_cidade,d100_biblioteca[i]));
        fprintf(fp,"%s",getBibliotecaDadosPre(d4_tamanho_cidade,d100_biblioteca[i]));
    }
    printf("---------------------------------------------------------\n");
    fprintf(fp,"---------------------------------------------------------\n");

    pause();
    fclose(fp);
}