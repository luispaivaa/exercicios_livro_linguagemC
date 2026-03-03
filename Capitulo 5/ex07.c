#include <stdio.h>

int main (){
    int a,b,cont = 0;


    for(b = 0; cont < 10; cont++){
        printf("Enter a number: ");
        scanf("%d", &a);
        b = a + b;
    }
    printf("Sum = %d", b);


}
