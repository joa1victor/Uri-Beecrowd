#include <stdio.h>
 
int main() { 
 
    int i,  count = 0;
    float nota, media, count2 = 0;

    while(1){

        scanf("%f", &nota);

        if(nota<0 || nota>10){
            printf("nota invalida\n");
            nota = 0;
        }
        if(nota>0 && nota <10.1){
            count++;
            count2+=nota;
        }
        if(count==2){
            media = count2/2;
            printf("media = %.2f\n", media);
            break;
        }
        

        i++;
    } 
 
    return 0;
}