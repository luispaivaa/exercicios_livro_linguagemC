#include <stdio.h>

int main(){
    int b, cont = 0;

    for(b = 1; cont < 5; b++){
            if(b % 3 == 0){
                cont++;
                printf("%d \n",b);
            }
    }
}
