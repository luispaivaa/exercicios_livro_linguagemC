#include <stdio.h>

int main(){
    int  a,b,cont = 0;

    for(b = 0; cont <= 50; b++){
            if(b % 2 == 0){
                cont++;
                a = b + a;
                printf("%d \n", b);
         }
    }
    printf("Sum = %d", a);
}
