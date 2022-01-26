#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, troca;
    scanf("%lf%lf%lf", &a, &b, &c);

    if(b>a && b>c){
        troca=b;
        b=a;
        a=troca;
    }else if(c>a && c>b){
        troca=c;
        c=a;
        a=troca;
    }
    //
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(a,2)==pow(b,2)+pow(c,2)){
        printf("TRIANGULO RETANGULO\n");    
        }
        if(pow(a,2)>pow(b,2)+pow(c,2)){
        printf("TRIANGULO OBTUSANGULO\n");    
        }
        if(pow(a,2)<pow(b,2)+pow(c,2)){
        printf("TRIANGULO ACUTANGULO\n");    
        }
        if(a==b && a==c){
        printf("TRIANGULO EQUILATERO\n");    
        }
        if((a==b && a!=c) || (a==c && a!=b) || (c==b && a!=c)){
        printf("TRIANGULO ISOSCELES\n");    
        }
    }
 
    return 0;
}