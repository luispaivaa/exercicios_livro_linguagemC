#include <stdio.h>

int main() {
    int i, n, num, maior, contMaior = 0;

    printf("Quantos numeros deseja ler? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        // No primeiro número lido (i == 0), ele é automaticamente o maior
        if (i == 0) {
            maior = num;
            contMaior = 1;
        } else {
            if (num > maior) {
                maior = num;     // Encontrou um novo maior
                contMaior = 1;   // Reinicia a contagem
            } else if (num == maior) {
                contMaior++;     // Encontrou o mesmo maior de novo
            }
        }
    }

    if (n > 0) {
        printf("\nMaior = %d\n", maior);
        printf("Apareceu %d vezes.\n", contMaior);
    } else {
        printf("Nenhum numero foi lido.\n");
    }

    return 0;
}
