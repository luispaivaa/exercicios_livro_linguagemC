#include <stdio.h>

int main (){
    int num, max, min, cont;

    printf("Enter the 1o number: ");
    scanf("%d", &num);
    max = num;
    min = num;

    for(cont = 1; cont < 10; cont ++){
        printf("Enter the %do number: ", cont+1);
        scanf("%d", &num);

        if (num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }
    }

    printf("Min = %d \n", min);
    printf("Max = %d", max);


    return 0;
}
