#include <stdio.h>
 
int main() {
 
    int inicial, final, duracao;
    scanf("%d%d", &inicial, &final);

    duracao = final - inicial;

    if (duracao <= 0)
        duracao += 24;

    printf("O JOGO DUROU %d HORA(S)\n", duracao);    
 
    return 0;
} 