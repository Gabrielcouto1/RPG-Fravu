#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Headers/gerar_aleatorio.h"
#include "Headers/dados.h"
#include "Headers/funcoes_gerais.h"

char* getTamanhoVila(int d4, int *qtd_estruturas){
    char *out,*temp;
    out=malloc(255*sizeof(char));
    temp=malloc(255*sizeof(char));
    strcpy(out,"\0");
    strcpy(temp,"\0");
    
    strcat(out,"Tamanho da vila: ");
    switch(d4){
        case 1:
            sprintf(temp,"Abandonada (%d habitantes)\n\n", rand()%11);
            strcat(out,temp);
            strcpy(temp,"\0");
            break;

        case 2:
            sprintf(temp,"Pequena (%d habitantes).\n\n", rand()%(451)+50);
            strcat(out,temp);
            strcpy(temp,"\0");
            break;

        case 3:
            sprintf(temp,"Media (%d Habitantes)\n\n", rand()%4501+500);
            strcat(out,temp);
            strcpy(temp,"\0");
            break;

        case 4:
            sprintf(temp,"Grande (%d Habitantes).\n\n", rand()%6001+4000);
            strcat(out,temp);
            strcpy(temp,"\0");
            break;
    }
    sprintf(temp,"Tavernas: %d\n",qtd_estruturas[0]);
    strcat(out,temp);
    strcpy(temp,"\0");

    sprintf(temp,"Igrejas: %d\n",qtd_estruturas[1]);
    strcat(out,temp);
    strcpy(temp,"\0");

    sprintf(temp,"Bibliotecas: %d\n",qtd_estruturas[2]);
    strcat(out,temp);
    strcpy(temp,"\0");

    sprintf(temp,"Lojas: %d\n",qtd_estruturas[3]);
    strcat(out,temp);
    strcpy(temp,"\0");

    sprintf(temp,"Ferreiros: %d\n",qtd_estruturas[4] );
    strcat(out,temp);
    strcpy(temp,"\0");

    strcat(out,"---------------------------------------------------------\n");

    strcat(out,"\0");
    return out;
}

char* getFonteEconomia(int d4){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");

    strcat(out,"\nFonte de economia: ");
    switch(d4){
        case 1:
            strcat(out,"Fazendas.\n");
            break;
        case 2:
            strcat(out,"Venda de mercadorias.\n");
            break;
        case 3:
            strcat(out,"Viajantes.\n");
            break;
        case 4:
            strcat(out,"Ensino.\n");
            break;  
    }
    strcat(out,"---------------------------------------------------------\n");
    strcat(out,"\0");
    return out;
}

char* getCaracteristicaCidade(int d12){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");
    
    strcat(out,"\nCaracteristicas da cidade: ");

    switch(d12){
        case 1:
            strcat(out,"Templo imponente.\n");
            break;
        case 2:
            strcat(out,"Muitos parques.\n");
            break;
        case 3:
            strcat(out,"Sede de uma familia muito rica.\n");
            break;
        case 4:
            strcat(out,"Cheiro horrivel.\n");
            break;
        case 5:
            strcat(out,"Local de muitas batalhas.\n");
            break;
        case 6:
            strcat(out,"Local onde passa muitos viajantes.\n");
            break;
        case 7:
            strcat(out,"Local de evento tragico.\n");
            break;
        case 8:
            strcat(out,"Reputacao estranha.\n");
            break;
        case 9:
            strcat(out,"Grande biblioteca.\n");
            break;
        case 10:
            strcat(out,"Construida em cima de ruinas.\n");
            break;
        case 11:
            strcat(out,"Local de uma grantde tumba.\n");
            break;
        case 12:
            strcat(out,"Conhecida por eventos magicos.\n");
            break;
    }
    strcat(out,"---------------------------------------------------------\n");
    strcat(out,"\0");
    return out;
}

char* getGuildas(){
    int i;
    int qtd=rollD4()-1;
    char *out,*temp;
    out=malloc(255*sizeof(char));
    temp=malloc(255*sizeof(char));
    strcpy(out,"\0");
    strcpy(temp,"\0");

    if(qtd==0)
        return "\0";
    
    for(i=0;i<qtd;i++){
        sprintf(temp,"\nGuilda numero %d\n",i+1);
        strcat(out,temp);
        strcpy(temp,"\0");

        strcat(out,"Guilda de ");

        switch(rollD20()){
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
    }
    strcat(out,"\0");
    return out;
}

char* getTaverna(int qtd){
    int i;
    char *out,*temp;
    out=malloc(255*sizeof(char));
    temp=malloc(255*sizeof(char));
    strcpy(out,"\0");
    strcpy(temp,"\0");

    for(i=0;i<qtd;i++){
        sprintf(temp,"\nTaverna numero %d\n", i+1);
        strcat(out,temp);
        strcpy(temp,"\0");

        strcat(out,"Nome: ");
        getNomeTaverna();
        strcat(out,"Tamanho: ");
        switch(rollD4()){
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

        switch(rollD20()){
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
    }
    strcat(out,"---------------------------------------------------------\n");
    strcat(out,"\0");
    return out;
}

char* getNomeTaverna(){
    char *out;
    out=malloc(255*sizeof(char));
    strcpy(out,"\0");

    switch(rollD12()){
        case 1:
            strcat(out,"A Enguia ");
            break;
        case 2:
            strcat(out,"O Golfinho ");
            break;
        case 3:
            strcat(out,"O Anao ");
            break;
        case 4:
            strcat(out,"O Ponei ");
            break;
        case 5:
            strcat(out,"O Lobo ");
            break;
        case 6:
            strcat(out,"O Espirito ");
            break;
        case 7:
            strcat(out,"O Cordeiro ");
            break;
        case 8:
            strcat(out,"A Montanha ");
            break;
        case 9:
            strcat(out,"O Satiro ");
            break;
        case 10:
            strcat(out,"A Aranha ");
            break;
        case 11:
            strcat(out,"A Estrela ");
            break;
        case 12:
            strcat(out,"O Jovem ");
            break;
    }

    switch(rollD12()){
        case 1:
            strcat(out,"Prateado(a)\n");
            break;
        case 2:
            strcat(out,"Dourado(a)\n");
            break;
        case 3:
            strcat(out,"Sorridente\n");
            break;
        case 4:
            strcat(out,"Atraente\n");
            break;
        case 5:
            strcat(out,"Solitario(a)\n");
            break;
        case 6:
            strcat(out,"Bebado(a)\n");
            break;
        case 7:
            strcat(out,"Errante\n");
            break;
        case 8:
            strcat(out,"Misterioso(a)\n");
            break;
        case 9:
            strcat(out,"Negro(a)\n");
            break;
        case 10:
            strcat(out,"Reluzente\n");
            break;
        case 11:
            strcat(out,"Cambaleante\n");
            break;
        case 12:
            strcat(out,"Empinado(a)\n");
            break;
    }
    strcat(out,"\0");
    return out;
}

char* getIgreja(int qtd){
    int i;
    char *out,*temp;
    out=malloc(255*sizeof(char));
    temp=malloc(255*sizeof(char));
    strcpy(out,"\0");
    strcpy(temp,"\0");

    for(i=0;i<qtd;i++){
        sprintf(temp,"\nIgreja numero %d: ",i+1);
        strcat(out,temp);
        strcpy(temp,"\0");

        strcat(out,"\nTamanho: ");

        switch(rollD4()){
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
    }
    strcat(out,"---------------------------------------------------------\n");
    strcat(out,"\0");
    return out;
}

char* getLoja(int qtd){
    int i;
    char *out,*temp;
    out=malloc(255*sizeof(char));
    temp=malloc(255*sizeof(char));
    strcpy(out,"\0");
    strcpy(temp,"\0");

    for(i=0;i<qtd;i++){
        sprintf(temp,"\nLoja numero %d: ",i+1);
        strcat(out,temp);
        strcpy(temp,"\0");

        strcat(out,"\nTamanho: ");
        switch(rollD4()){
            case 1:
                strcat(out,"Minuscula.\nChance de itens: (incomum 20%%)\n");
                break;
            case 2:
                strcat(out,"Pequena.\nChance de itens: (incomum 60%%, raro 20%%)\n");
                break;
            case 3:
                strcat(out,"Media.\nChance de itens: (incomum 80%%, raro 60%%, muito raro 20%%)\n");
                break;
            case 4:
                strcat(out,"Grande.\nChance de itens: (raro 80%%, muito raro 60%%)\n");
                break;
        }
        
        strcat(out,"Tipo de loja: ");
        switch(rollD6()){
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
    }
    strcat(out,"\0");
    return out;
}

char* getBiblioteca(int qtd, int tamanho_cidade){
    int i;
    int d100;
    char *out,*temp;
    out=malloc(255*sizeof(char));
    temp=malloc(255*sizeof(char));
    strcpy(out,"\0");
    strcpy(temp,"\0");

    for(i=0;i<qtd;i++){
        d100=rollD100();
        sprintf(temp,"\nBiblioteca de numero %d\n", i+1);
        strcat(out,temp);
        strcpy(temp,"\0");

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
    }
    strcat(out,"\0");
    return out;
}

void geraCidadeRandom(){
    int i, qtd_taverna, qtd_cidades, *qtd_estruturas, d4, qtd_igrejas, qtd_bibliotecas, qtd_lojas;

    printf("\nQuantas cidades deseja gerar?: ");
    scanf("%d",&qtd_cidades);
    getchar();
    if(qtd_cidades<=0){
        printf("Insira valores positivos maiores que 0.\n");
        return;
    }
    int op;
    printf("\n[1]- Imprimir cidades apenas na tela;");
    printf("\n[2]- Imprimir na tela e no arquivo.");
    printf("\nInsira a opcao: ");
    scanf("%d",&op);
    getchar();
    pause();

    for(i=0;i<qtd_cidades;i++){
        d4=rollD4();
    
        qtd_estruturas=qtdEstruturas(d4);
        qtd_taverna=qtd_estruturas[0];
        qtd_igrejas=qtd_estruturas[1];
        qtd_bibliotecas=qtd_estruturas[2];
        qtd_lojas=qtd_estruturas[3];

        printRandom(i,op,getTamanhoVila(d4, qtd_estruturas),getFonteEconomia(rollD4()),
        getCaracteristicaCidade(rollD12()),getGuildas(rollD20()),getTaverna(qtd_taverna),
        getIgreja(qtd_igrejas),getLoja(qtd_lojas),getBiblioteca(qtd_bibliotecas, d4));

        pause();
    }  
}

void printRandom(int cont, int op, char* tam_vila, char* economia, char* caracteristica, char* guilda,
char* taverna, char* igreja,char* loja, char* biblioteca){
    char nome[255];
    sprintf(nome,"Cidade_Aleatoria%d.txt\0",cont+1);

    if(op==2){
        FILE *fp;
        fp=fopen(nome,"w+");
        if(fp==NULL)
            return;
            
        printf("Nome do arquivo: %s\n",nome);
        fprintf(fp,"---------------------------------------------------------\n");
        fprintf(fp,"Vila %d\n", cont+1);
        fprintf(fp,"---------------------------------------------------------\n");
        fprintf(fp,"%s",tam_vila);
        fprintf(fp,"%s",economia);
        fprintf(fp,"%s",caracteristica);
        fprintf(fp,"%s",guilda);
        fprintf(fp,"---------------------------------------------------------\n");
        fprintf(fp,"%s",taverna);
        fprintf(fp,"%s",igreja);
        fprintf(fp,"%s",loja);
        fprintf(fp,"---------------------------------------------------------\n");
        fprintf(fp,"%s",biblioteca);
        fclose(fp);
    }

    printf("Vila %d\n", cont+1);
    printf("---------------------------------------------------------\n");
    printf("%s",tam_vila);
    printf("%s",economia);
    printf("%s",caracteristica);
    printf("%s",guilda);
    printf("---------------------------------------------------------\n");
    printf("%s",taverna);
    printf("%s",igreja);
    printf("%s",loja);
    printf("---------------------------------------------------------\n");
    printf("%s",biblioteca);
}