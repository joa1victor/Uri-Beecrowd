#include <stdio.h>
 
int main() {
 
   int inicio, fim, t;
   scanf("%d%d", &inicio, &fim);

   t = fim - inicio;

   if (t <= 0)
       t += 24;

    printf("O JOGO DUROU %d HORA(S)\n", t); 
    

    return 0;
}