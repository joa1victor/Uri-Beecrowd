#include <stdio.h>
 
int main() {
 
    int i = 1, j;
    int m, n;
    int count=0;

    while (n!=0){
        count-=count;
        scanf("%d %d", &m, &n);
        if ( m <= 0 || n <= 0){
            break;
        }
        if (m > n){
            for(j=n;j<=m;j++){
                count+=j;
                printf("%d ", j);
            }
        } else {
            for(j=m;j<=n;j++){
                count+=j;
                printf("%d ", j);
            }
        }
        printf("Sum=%d\n", count);

    i++;
    }

    return 0;
}