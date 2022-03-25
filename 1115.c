#include <stdio.h>
 
int main() {
 
    int i;
    int x, y;

    while (x!=0 || y!=0){
        
        scanf("%d %d", &x, &y);

        if (x==0 || y==0){
            break;
        }
        if (x>0 && y>0){
            puts("primeiro");
        }
        if (x<0 && y>0){
            puts("segundo");
        }
        if (x<0 && y<0){
            puts("terceiro");
        }
        if (x>0 && y<0){
            puts("quarto");
        }

    i++;
    }
    


return 0;
}