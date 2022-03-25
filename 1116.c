#include <stdio.h>
 
int main() {
 
    int i, n, x, y;
    float div;

    scanf("%d", &n);

    for(i=0;i<n;i++){

        scanf("%d %d", &x, &y);

        if (y==0){
            printf("divisao impossivel\n");
        } else {
                div = (float)x/y;
            printf("%.1f\n", div);
        }
    }
 
    return 0;
}