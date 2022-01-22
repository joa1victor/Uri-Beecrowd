#include <stdio.h>

int main (){

    int numfunc, numhoras, numero;
    float valorhoras, salario;

        scanf("%i%i%f", &numfunc, &numhoras, &valorhoras);

            numero = numfunc;
            salario = numhoras * valorhoras;

        printf("NUMBER = %i\nSALARY = U$ %.2f\n", numero, salario);


    return 0;
}