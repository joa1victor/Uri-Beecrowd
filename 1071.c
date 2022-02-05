#include <stdio.h>
 
int main() {
 
    int x, y, dx, dy;
    int i, count = 0;

    scanf("%d", &x);
    scanf("%d", &y);
    

    if (x > y){
        dx = x - 1;
        dy = y + 1;
         for (i = dy; i <= dx; i++){
            if (i%2!=0)
            count += i;
         }
   
    } else if (x < y){
        dx = x + 1;
        dy = y - 1;
         for (i = dx; i <= dy; i++){
            if (i%2!=0)
            count += i;
         }
   
    }

    printf("%d\n", count);

    return 0;
}