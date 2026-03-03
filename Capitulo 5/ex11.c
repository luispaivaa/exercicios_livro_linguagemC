#include <stdio.h>

int main(){
    int num, div = 1;
    printf("enter a number: ");
    scanf("%d", &num);

    while(div <= num){
        if(num % div == 0){
            printf("%d\n", div);
        }
        div++;
    }

}
