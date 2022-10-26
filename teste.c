#include <stdio.h>

int main (){

    int i, j, k;

    i=1;
    j=7;
    k=1;
    while(i<9){
 printf("I=%d J=%d\n", i, j);
        while(k<=3){
           
            k++;
            j--;
        }
    i+=2;    
    j+=5;    

    }
    

    return 0;
}