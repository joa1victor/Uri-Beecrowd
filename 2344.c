#include <stdio.h>
 
int main() {
 
    
    int nota;

    scanf("%d", &nota);

    if (nota == 0)
        puts("E");
    if (nota >=1 && nota <= 35)
        puts("D");    
    if (nota >=36 && nota <= 60)
        puts("C");
    if (nota >=61 && nota <= 85)
        puts("B");
    if (nota >=86 && nota <= 100)
        puts("A");

    return 0;
}