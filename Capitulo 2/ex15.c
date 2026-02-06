#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int b;
    float c;

    scanf("%c", &a);
    scanf("%d", &b);
    scanf("%f", &c);

    printf("%c  %d  %f\n%c\t%d\t%f\n%c\n%d\n%f\n", a,b,c,a,b,c,a,b,c);
}
