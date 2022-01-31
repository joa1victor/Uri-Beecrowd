#include <stdio.h>

int main () {

    int l, c;

//Entrada da Linha.
    scanf("%d", &l);
//Entrada da Coluna.    
    scanf("%d", &c);
//Se a L e C for PAR então será Branca = 1. Se não, será IMPAR, logo, será Preta = 0.
    if ((l + c) % 2 == 0 || (c + l) % 2 == 0){
        puts("1");
    } else {
        puts("0");
    }

    return 0;
}