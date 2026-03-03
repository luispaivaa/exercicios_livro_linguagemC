#include <stdio.h>

int main(){
    int n, i, j;

    printf("enter a number --> ");
    scanf("%d", &n);

    for(i = 1, j = 0; i <= n; i++){
        if(n % i == 0){
            j++;
        }
    }

    if(j == 2){
        printf("EH PRIMO.");
    }else
        printf("NAO PRIMO.");


    return 0;

}
