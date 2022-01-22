#include <stdio.h>

int main(){

int n, b, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

scanf("%d", &n);

b = n%100;
nota100 = n/100;
nota50 = b/50;
nota20 = (b=b%50)/20;
nota10 = (b=b%20)/10;
nota5 = (b=b%10)/5;
nota2 = (b=b%5)/2;
nota1 = (b=b%2)/1;

printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, nota100, nota50, nota20, nota10, nota5, nota2, nota1);


return 0;
}