#include <stdio.h>

int main() {

  double n1, n2, n3, n4, media, notaExame, mediaFinal;

  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n", media);

    if (media>=7.0){
    printf("Aluno aprovado.\n");
    }
  else if (media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
    scanf("%lf", &notaExame);
    printf("Nota do exame: %.1lf\n", notaExame);
          mediaFinal = (notaExame+media)/2;
  if (mediaFinal>=5.0){
    printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", mediaFinal);

  }
    else{
    printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", mediaFinal);
  }
  }
  else {
    printf("Aluno reprovado.\n");
  }


    return 0;
}