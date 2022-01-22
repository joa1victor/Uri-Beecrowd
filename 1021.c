#include <stdio.h>

int main(){

double n, moeda;
int nota;
int n100, n50, n20, n10, n5, n2;
int c1, c50, c25, c10, c05, c01;

scanf("%lf", &n);
nota = n;
printf("NOTAS:\n");
n100 = nota/100.00;
printf("%d nota(s) de R$ 100.00\n", n100);
n50 = nota%100/50;
printf("%d nota(s) de R$ 50.00\n", n50);
n20 = nota%100%50/20;
printf("%d nota(s) de R$ 20.00\n", n20);
n10 = nota%100%50%20/10;
printf("%d nota(s) de R$ 10.00\n", n10);
n5 = nota%100%50%20%10/5;
printf("%d nota(s) de R$ 5.00\n", n5);
n2 = nota%100%50%20%10%5/2;
printf("%d nota(s) de R$ 2.00\n", n2);
printf("MOEDAS:\n");
c1 = nota%100%50%20%10%5%2/1;
printf("%d moeda(s) de R$ 1.00\n", c1);
moeda = n*100;
c50 = (int)moeda%100/50;
printf("%d moeda(s) de R$ 0.50\n", c50);
c25 = (int)moeda%100%50/25;
printf("%d moeda(s) de R$ 0.25\n", c25);
c10 = (int)moeda%100%50%25/10;
printf("%d moeda(s) de R$ 0.10\n", c10);
c05 = (int)moeda%100%50%25%10/5;
printf("%d moeda(s) de R$ 0.05\n", c05);
c01 = (int)moeda%100%50%25%10%5/1;
printf("%d moeda(s) de R$ 0.01\n", c01);


return 0;

}