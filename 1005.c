#include <stdio.h>
 
int main() {
 
    double a, b, pesoA=3.5, pesoB=7.5, media;
    
    scanf("%lf%lf", &a, &b);

    media = ((a*pesoA)+(b*pesoB))/(pesoA+pesoB);
 
    printf("MEDIA = %.5lf\n", media);

    return 0;
}