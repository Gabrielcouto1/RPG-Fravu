#ifndef GERAR_ALEATORIO_H
#define GERAR_ALEATORIO_H

#ifdef _WIN32
    #define clean "cls"
    
#elif __linux__
    #define clean "clear"
#endif

*int qtdEstruturas(int tamanho_cidade);
void getTamanhoVila(int qtd_estruturas*);
void getFonteEconomia(int d4);
void getCaracteristicaCidade(int d12);
void getGuildas();
void getTaverna(int qtd, int d4, int d20);
void geraCidadeRandom();
void pause();

#endif