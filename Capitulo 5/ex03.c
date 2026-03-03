#include <stdio.h>

int main(){
    int a,b, cont = 0;
    printf("enter a number --> ");
    scanf("%d", &a);

    for(b = 0; cont < a; b++ ){
        if(b % 2 != 0){
            cont++;
            printf("%d \n", b);
        }
    }
}
