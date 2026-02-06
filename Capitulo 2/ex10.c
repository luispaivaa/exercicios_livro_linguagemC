#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia, mes, ano;

    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia,mes,ano);

    return 0;

}
