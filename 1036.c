#include <stdio.h>
#include <math.h>

int main(){

double a, b, c, delta, bhaskaraPositivo, bhaskaraNegativo;

scanf("%lf %lf %lf", &a, &b, &c);

delta = (b*b) - 4*(a*c);

bhaskaraPositivo = (-b + sqrt(delta))/(2*a);
bhaskaraNegativo = (-b - sqrt(delta))/(2*a);

if (delta<0 || a == 0){

    printf("Impossivel calcular\n");
}
else {
    printf("R1 = %.5lf\n", bhaskaraPositivo);
    printf("R2 = %.5lf\n", bhaskaraNegativo);
}



return 0;
}