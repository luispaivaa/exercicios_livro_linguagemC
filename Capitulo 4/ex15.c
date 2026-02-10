#include <stdio.h>
#include <math.h>


int main(){
    float a, b, c, x1, x2, d;
    printf("Eq. do Segundo Grau: ax^2 + bx + c = 0\n");
    printf("Informe o valor dos coeficientes: a, b, c --> ");
    scanf("%f%f%f", &a, &b, &c);

    if (a==0){
        printf("Nao eh equacao do segundo grau. A = 0");
        return 0;
    }

    d = (b * b) - 4 * a * c;

    if(d<0){
        printf("Nao existe raiz! Delta < 0");
        return 0;
    }

    else if(d==0){
        x1 = -b/(2*a);
        printf("Raiz unica. Delta = 0\n x = %f", x1);
        return 0;
        }

    else {x1 = (-b + sqrt(d)) / (2 * a);
          x2 = (-b - sqrt(d)) / (2 * a);
         printf("Raiz 1 = %f\n", x1);
         printf("Raiz 2 = %f", x2);
         return 0;}
}
