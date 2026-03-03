#include <stdio.h>

int main(){
    int d1, d2;
    float s, soma = 0;

    for(d1 = 1, d2 = 1; d2 <= 55; d1+=2, d2++){
        s = (float)d1/d2; //numerador aumenta de 2 em 2
        soma = s + soma;
    }

    printf("S = %.2f", soma);

    return 0;


}
