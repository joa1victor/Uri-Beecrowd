#include <stdio.h>
#include <string.h>
 
int main() {
 
    int casosDeTeste, i, n;
    char tipo [50];
    int coelhos = 0, ratos = 0, sapos = 0;
    float cobaias = 0;
    float perC, perR, perS;


    scanf("%d", &casosDeTeste);

    for(i=1; i<=casosDeTeste; i++){

        scanf("%d %s", &n, tipo);

        cobaias += n;

        if (strcmp(tipo, "C")==0){
            coelhos += n;
        }
        if (strcmp(tipo, "R")==0){
            ratos += n;
        }
        if (strcmp(tipo, "S")==0){
            sapos += n;
        }
    }

    perC = (coelhos * 100) / cobaias;

    perR = (ratos * 100) / cobaias;

    perS = (sapos * 100) / cobaias;

    printf("Total: %.0f cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", perC);
    printf("Percentual de ratos: %.2f %%\n", perR);
    printf("Percentual de sapos: %.2f %%\n", perS);
    

    return 0;
}