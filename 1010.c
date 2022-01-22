#include <stdio.h>

int main() {

int codpc1, numpc1, codpc2, numpc2;
double valorunit1, valorunit2, valorapagar;

        scanf("%d%d%lf%d%d%lf", &codpc1, &numpc1, &valorunit1, &codpc2, &numpc2, &valorunit2);
        valorapagar = (numpc1 * valorunit1)+(numpc2*valorunit2);
        printf("VALOR A PAGAR: R$ %.2lf\n", valorapagar);

     return 0;
}