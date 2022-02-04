#include <stdio.h>
 
int main() {
 
    float num, media, mediacount = 0;;
    int i, count = 0;

    for ( i = 1; i <= 6; i++)
    {
        scanf("%f", &num);

        if (num > 0)
        {
            count += 1;
            mediacount += num;
        }

    }

    media = mediacount / count;

    printf("%d valores positivos\n", count);
    printf("%.1f\n", media);
 
    return 0;
}