#include <stdio.h>
 
int main() {
 
    int num, x, y;
    int count = 0;
    int i, k;

    scanf("%d", &num);

    for(i=0;i<num;i++){
        scanf("%d%d", &x, &y);
        count = 0;
       
        if(x>y){
            for(k=x-1;k>y;k--){
                if(k%2!=0){
                    count+=k;
                }
            }
            printf("%d\n", count);
        } else {
            for(k=x+1;k<y;k++){
                if(k%2!=0){
                    count+=k;
                }
            }
            printf("%d\n", count);
        }

    }

    return 0;
}