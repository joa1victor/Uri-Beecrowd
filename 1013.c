#include <stdio.h>

int main(){

    int a, b, c, maiorab, omaior;

    scanf("%d%d%d", &a, &b, &c);

    maiorab = (a+b+abs(a-b))/2;
    omaior = (c+maiorab+abs(c-maiorab))/2;
        printf("%d eh o maior\n", omaior);

 return 0;

}