#include <stdio.h>

int main(){

  int fatorial = 5;
  int num = 1;

  while(fatorial>=1){
    num*=fatorial;
    fatorial--;
    
  }
  printf("%d\n", num);

  return 0;
}