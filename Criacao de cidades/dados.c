#include <stdlib.h>
#include <time.h>

#include "Headers/dados.h"

int rollD3(){
    int r=rand()%3;

    return r+1;
}

int rollD4(){
    int r=rand()%4;

    return r+1;
}

int rollD6(){
    int r=rand()%6;

    return r+1;
}

int rollD8(){
    int r=rand()%8;

    return r+1;
}

int rollD10(){
    int r=rand()%10;

    return r+1;
}

int rollD12(){
    int r=rand()%12;

    return r+1;
}

int rollD20(){
    int r=rand()%20;

    return r+1;
}

int rollD100(){
    int r=rand()%100;

    return r+1;
}