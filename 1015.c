#include <stdio.h>
#include <math.h>

int main(){

            double x1, y1, x2, y2, xs, ys, distancia;
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

        xs=x2-x1;
        ys=y2-y1;

        distancia=sqrt(pow(xs,2)+pow(ys,2));

        printf("%.4lf\n", distancia);

 return 0;
}