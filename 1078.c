#include <stdio.h>
 
int main() {
 
    int num, i, tabu;

    scanf("%d", &num);

    for (i=1; i<=10; i++){

        tabu = i*num;

        printf("%d x %d = %d\n", i, num, tabu);

    }
    
    return 0;
}