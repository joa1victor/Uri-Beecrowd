#include <stdio.h>

int main() {

    int distance;

    scanf("%d", &distance);

    if (distance <= 800)
        puts("1");
    else if (distance <= 1400)
            puts("2");
    else if (distance <= 2000)
            puts("3");        


    return 0;
}