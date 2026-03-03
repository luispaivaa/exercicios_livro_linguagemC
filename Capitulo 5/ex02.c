#include <stdio.h>

int main(){
    int a,b;
    printf("enter a number --> ");
    scanf("%d", &a);

    for(b = 0; a >= b; a--){
        printf("%d \n", a);
    }

}
