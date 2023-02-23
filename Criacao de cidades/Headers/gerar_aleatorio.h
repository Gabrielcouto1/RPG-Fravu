#ifndef GERAR_ALEATORIO_H
#define GERAR_ALEATORIO_H

char* getTamanhoVila(int d4, int *qtd_estruturas);
char* getFonteEconomia(int d4);
char* getCaracteristicaCidade(int d12);
char* getGuildas();
char* getTaverna(int qtd);
char* getNomeTaverna();
char* getIgreja(int qtd);
char* getLoja(int qtd);
char* getBiblioteca(int qtd, int tamanho_cidade);
void geraCidadeRandom();
void printRandom(int cont,int op, char* tam_vila, char* economia, char* caracteristica, char* guilda, 
char* taverna, char* igreja,char* loja, char* biblioteca);

#endif