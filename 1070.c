#include <stdio.h>

int main() {

    int num, i, count, cond;

    scanf("%d", &num);

    count = num + 12;

    if (num%2==1){
        count = num + 11;
    }

    for (i = num; i <= count; i++){

        if (i%2!=0){
            printf("%d\n", i);  
        }
    }

    return 0;
}