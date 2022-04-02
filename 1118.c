#include <stdio.h>
 
int main() { 
 
    int i=0, count=0, calculo, calculodnv;
    float nota, count2=0, media, notanova = 0;

    while(calculo!=2){

        for(i;count<2;i++){
        
            scanf("%f", &nota);

                if(nota>-0.1 && nota<10.1){
                    count++;
                    notanova += nota;
                    media = notanova/2;
                    } else {
                    printf("nota invalida\n");
                    }
                if(count==2){
                    printf("media = %.2f\n", media); 
                }
        }  

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &calculo);

    if(calculo!=2){
        if(count!=2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &calculo);

        }   
    }
        if(calculo==1){

            int i=0, count=0;
            float nota, media, notanova = 0;

            for(i;count<2;i++){
        
                scanf("%f", &nota);

                if(nota>-0.1 && nota<10.1){
                    count++;
                    notanova += nota;
                    media = notanova/2;
                    } else {
                    printf("nota invalida\n");
                }
                if(count==2){
                    printf("media = %.2f\n", media); 
                }
            }
        }
    

    }

    return 0;
}