#include <stdio.h>

int main(){
    int num = 1000, div = 1, x = 1, sum3 = 0, sum5 = 0;

    while(div < num){
        if(x % 3 == 0){
            sum3 = x + sum3;
        }
        else if(x % 5 == 0){
            sum5 = x + sum5;
        }
        x++;
        div++;
    }

    printf("Multiples of 3 --> %d\n", sum3);
    printf("Multiples of 5 --> %d\n", sum5);
}
