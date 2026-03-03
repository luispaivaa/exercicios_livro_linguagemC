#include <stdio.h>

int main (){
    int a, cont = 0;
    float sum;

    for(sum = 0; cont < 10;){
        printf("Enter the %do number: ", cont+1);
        scanf("%d", &a);
        if(a > 0){
            cont++;
            sum = a + sum;
        } else{
            printf("Number invalid! Only POSITIVE numbers. \n");
            }
    }
    printf("Arithmetic Mean = %.2f", sum/10);


}
