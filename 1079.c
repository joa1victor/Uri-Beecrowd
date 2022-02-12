#include <stdio.h>
 
int main() {
 
    int casosDeTeste;
    int i;
    float n1, n2, n3, mp;

    scanf("%d", &casosDeTeste);

    for (i=1; i<=casosDeTeste; i++){

        scanf("%f %f %f", &n1, &n2, &n3);
    
        mp = (n1*2+n2*3+n3*5)/10;

        printf("%.1f\n", mp);

    }

    return 0;
}