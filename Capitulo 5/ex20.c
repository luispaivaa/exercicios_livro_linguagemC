#include <stdio.h>

int main(){
   int n, i, j, ultimoFatorial, fatorialAtual;
   float e;

   do{
    printf("Digite um numero inteiro e positivo --> ");;
    scanf("%d", &n);

    if(n < 1){
        printf("TENTE NOVAMENTE!!!");
        continue;
    }


    for(i = 1, e = 0, ultimoFatorial = 1; i <= n; i++){
        for(j = i; j <= i; j++){
            fatorialAtual = ultimoFatorial * j;
            ultimoFatorial = fatorialAtual;
        }
        e += 1 / (float)fatorialAtual;
    }
   }while(n < 1);

   printf("E = %f", e);

   return 0;
}
