#include <stdio.h>

int main (){

    int i, j;

    j = 60;
    i = 1;

    for(j==0){
        i+=3;
        j-=5;

        printf("%d j=%d", i, j);
    }


    return 0;
}