#include <stdio.h>
 
int main() {
 
    int h_inicial, m_inicial, h_final, m_final, duracao, comeco, fim, horas, minutos;

    scanf("%d%d%d%d", &h_inicial, &m_inicial, &h_final, &m_final);

    comeco = h_inicial * 60 + m_inicial;
    fim = h_final * 60 + m_final;
    duracao = fim - comeco;

    if (duracao <=0)
        duracao += 24 * 60;
    
    horas = duracao/60;
    minutos = duracao%60;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);    
 
    return 0;
}