#include <stdio.h>
 
int main() {
 
    int i, posicao, num, maior;

    for (i=1; i<=100; i++){

        scanf("%d", &num);

            if (maior<num){
                maior = num;
                posicao = i;
            }
        
    } 

    printf("%d\n%d\n", maior, posicao);
    
 
    return 0;
}