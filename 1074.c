#include <stdio.h>

int main(){

    int num, n, i;

    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        
        scanf("%d", &n);

        if (n%2==0 && n > 0){
            printf("EVEN POSITIVE\n");
        }
        if (n%2==0 && n < 0){
            printf("EVEN NEGATIVE\n");
        }
        if (n%2!=0 && n > 0){
            printf("ODD POSITIVE\n");
        }
        if (n%2!=0 && n < 0){
            printf("ODD NEGATIVE\n");
        }
        if (n == 0){
            printf("NULL\n");
        }
    }

    return 0;
}