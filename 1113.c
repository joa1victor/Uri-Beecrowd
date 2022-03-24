#include <stdio.h>

int main() {

    int i=1, j;
    int x, y;

    while (x!=y){

        scanf("%d%d", &x, &y);    

        if(x==y){
            break;
        }
        if (x>y){
            puts("Decrescente");
        } else {
            puts("Crescente");
        }

    i++;   
    }

    return 0;
}