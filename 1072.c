#include <stdio.h>
 
int main() {
 
    int num, i, casosDeTeste, counti = 0, counto = 0;

    scanf("%d", &casosDeTeste);

    for ( i = 1; i <= casosDeTeste; i++)
    {
        scanf ("%d", &num);

        if (num >= 10 && num <= 20){
            counti += 1;
            
        }
        if (num < 10 || num > 20){
            counto += 1;
            
        }
    }

    printf ("%d in\n", counti);
    printf("%d out\n", counto);

    return 0;
}