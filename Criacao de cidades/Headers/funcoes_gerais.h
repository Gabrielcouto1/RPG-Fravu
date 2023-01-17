#ifndef FUNCOES_GERAIS_H
#define FUNCOES_GERAIS_H

#ifdef _WIN32
    #define clean "cls"
    
#elif __linux__
    #define clean "clear"
#endif

int* qtdEstruturas(int tamanho_cidade);
void pause();

#endif