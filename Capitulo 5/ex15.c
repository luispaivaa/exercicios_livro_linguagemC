#include <stdio.h>

int main(){
     int n, maior, menor;

    printf("Digite um numero --> ");
    scanf("%d", &n);

    maior = n;
    menor = n;

    while(n >= 0){
        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }

        printf("Digite um numero --> ");
        scanf("%d", &n);
    }

    if (n < 0){
        printf("Maior = %d\n", maior);
        printf("Menor = %d", menor);
    }

    return 0;
}
