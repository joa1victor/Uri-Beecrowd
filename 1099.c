#include <stdio.h>
 
int main() {
 
    int num, x, y;
    int difx, dify;
    int count = 0, count2 = 0;
    int i, k;

    scanf("%d", &num);

    for(i=0;i<num;i++){
        scanf("%d%d", &x, &y);
        count = 0;
        if(x>y){
            dify = y + 1;

            for(k=dify;k<x;k++){
                if(k%2!=0){
                    count+=k;
                }
            }
            printf("%d\n", count);
        } else {
            difx = x + 1;

            for(k=difx;k<y;k++){
                if(k%2!=0){
                    count2+=k;
                }
            }
            printf("%d\n", count2);
        }

    }

    return 0;
}