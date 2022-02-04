#include <stdio.h>
 
int main() {
 
    int cdia, fdia, comeco, fim;
    int choras, cminutos, csegundos;
    int fhoras, fminutos, fsegundos;
    int duracao, dh, dm, ds, dd;
    char formato[50], day[50];

    scanf("%s %d\n", day, &cdia);

    scanf("%d %s %d %s %d", &choras, formato, &cminutos, formato, &csegundos); /*printf("%d : %d : %d\n", choras, cminutos, csegundos);*/

    scanf("%s %d\n", day, &fdia);

    scanf("%d %s %d %s %d", &fhoras, formato, &fminutos, formato, &fsegundos); /*printf("%d : %d : %d\n", fhoras, fminutos, fsegundos);*/

    comeco = choras * 3600 + cminutos * 60 + csegundos; //29543
    fim = fhoras * 3600 + fminutos * 60 + fsegundos; //22403
    dd = fdia - cdia;

    duracao = fim - comeco; //-7140
    
    if (duracao <= 0) 
        duracao += (24 * 3600); //86400-7140=79260 
        dd--;
    if (dd<=0)
        dd++;    

    dh = (duracao/3600);
    dm = (duracao%3600)/60;
    ds = (duracao%3600)%60;      
    
    
    

printf("%d dia(s)\n", dd);
printf("%d hora(s)\n", dh);
printf("%d minuto(s)\n", dm);
printf("%d segundo(s)\n", ds);

    return 0;
}