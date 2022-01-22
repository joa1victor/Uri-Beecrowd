#include <stdio.h>

int main() {

  int codigo, quantidade;
  float total;


  scanf("%d %d", &codigo, &quantidade);

  if (codigo==1){
    total = 4*quantidade;
  }
  if (codigo==2){
    total = 4.5*quantidade;
  }
  if (codigo==3){
    total = 5*quantidade;
  }
  if (codigo==4){
    total = 2*quantidade;
  }
  if (codigo==5){
    total = 1.5*quantidade;
  }



  printf("Total: R$ %.2f\n", total);

    return 0;
}