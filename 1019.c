#include <stdio.h>

int main(){

    int n, conversorHoras, conversorMin, conversorSeg;

    scanf("%d", &n);

    conversorHoras = n/3600;

    conversorMin = n/60%60;


    conversorSeg = n%60;

    printf("%d:%d:%d\n", conversorHoras, conversorMin, conversorSeg);


return 0;
}