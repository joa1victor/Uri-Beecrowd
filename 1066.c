#include <stdio.h>
 
int main() {
 
    int num;
    int i, par = 0, impar = 0, pos = 0, neg = 0;


    for ( i = 1; i <= 5; i++){

        scanf("%d", &num);

        if (num > 0){
            pos += 1;
        }
        if (num < 0){
            neg += 1;
        }
        if (num%2==0){
            par += 1;
        }
        if (num%2!=0){
            impar += 1;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}