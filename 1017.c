#include <stdio.h>

int main(){

    int tempo, vm;
    double consumo=12, qntlitros;
    scanf("%d%d", &tempo, &vm);
    qntlitros = (tempo*vm)/consumo;
    printf("%.3lf\n", qntlitros);

 return 0;
}