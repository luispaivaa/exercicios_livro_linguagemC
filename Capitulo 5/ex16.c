#include <stdio.h>

int main(){
    int n, i;
    float hn = 0;

    printf("Enter a number --> ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        hn += 1.0/i; //hn = hn + (1/i)
    }

    printf("H%d = %.2f",n, hn);
}
