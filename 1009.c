#include <stdio.h>

int main (){

char Vendedor[50];
double salariofixo, vendasfeitas, comissao = 0.15, total;
    scanf("%s", &Vendedor);
    scanf("%lf%lf", &salariofixo, &vendasfeitas);
    total = salariofixo+(vendasfeitas*comissao);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}