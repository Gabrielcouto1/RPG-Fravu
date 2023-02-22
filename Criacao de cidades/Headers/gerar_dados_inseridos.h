#ifndef GERAR_DADOS_INSERIDOS_H
#define GERAR_DADOS_INSERIDOS_H

char* getGuildasDadosPre(int d20);
int getQtdTaverna(int d4);
char* getTavernaDadosPre(int d4, int d20);
char* getIgrejaDadosPre(int d4, int d20);
char* getLojaDadosPre(int d4, int d6);
char* getBibliotecaDadosPre(int tamanho_cidade, int d100);
void geraCidadeDadosPre();

#endif