#include <stdio.h>

int main(){
    int n, i, fib1, fib2, proxTermo;

    printf("Escreva um numero (n >= 0) : ");
    scanf("%d", &n);

    fib1 = 0;
    fib2 = 1;

    if(n == 0){
        printf("Termo escolhido --> %d", fib1);
        return 0;
    } else if(n == 1){
        printf("Termo escolhido --> %d", fib2);
        return 0;
    }

    for(i = 2; i <= n; i++){
        proxTermo = fib1 + fib2;
        fib1 = fib2;
        fib2 = proxTermo;
    }
    printf("Termo escolhido --> %d", proxTermo);

}
