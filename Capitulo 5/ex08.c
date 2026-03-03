#include <stdio.h>

int main (){
    int a, cont = 0;
    float b;

    for(b = 0; cont < 10; cont++){
        printf("Enter a number: ");
        scanf("%d", &a);
        b = a + b;
    }
    printf("Arithmetic Mean = %.2f", b/10);


}
