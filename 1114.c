#include <stdio.h>

int main(){

    int i;
    int senha;

    while(senha!=2002){

        scanf("%d", &senha);
        
        if (senha!=2002){
            puts("Senha Invalida\n");
        } else {
            puts("Acesso Permitido");
        }        
    i++;
    }

    return 0;
}