#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex01(){
    /*
    Faça um programa que leia um número inteiro
     e retorne seu antecessor e seu sucessor
    */
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Antecessor: %d\n", --x);
    printf("Sucessor: %d\n", x+2);
}

void ex02(){
    /*
    Faça um programa que leia um número real e imprima a quinta parte desse nú-
mero.*/
    float num;
    printf("Digite um numero REAL: ");
    scanf("%f", &num);

    printf("A quinta parte de %.2f eh:  %.2f", num, num/5);
}

void ex03(){
    /*Faça um programa que leia três valores inteiros e mostre sua soma.*/
    int num1,num2,num3, soma;
    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o valor segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o valor do terceiro numero: ");
    scanf("%d", &num3);

    soma = num1+num2+num3;

    printf("A soma dos tres numeros eh igual a: %d\n", soma);


}

void ex04(){
    /* Leia quatro valores do tipo float.
    Calcule e exiba a média aritmética desses valores.
    */

    float n1, n2, n3, n4, media;
    printf("Informe o valor do primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o valor segundo numero: ");
    scanf("%f", &n2);
    printf("Informe o valor do terceiro numero: ");
    scanf("%f", &n3);
    printf("Informe o valor do quarto numero: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("A media aritmetica dos valores eh: %.2f", media);

}

void ex05(){

   int ano_atual = 2026, idade, ano_nasc;

   printf("Inorme sua idade: ");
   scanf("%d",&idade);

   ano_nasc = ano_atual - idade;

   printf("Voce nasceu no ano de %d\n", ano_nasc);

}


void ex06(){
/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s*/

    float k, m;
    printf("Informe a velocidade em Km/h: ");
    scanf("%f", &k);

    m = k/36;
    printf("A velocidade de %.2f Km/h equivale a %.2f m/s", k, m);

}

void ex07(){
    /*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.*/

    float real, dolar, conversao;
    printf("Informe o valor em real (R$): ");
    scanf("%f", &real);
    printf("Informe a cotação atual do dolar: ");
    scanf("%f", &dolar);

    conversao = real/dolar;

    printf("R$ %.2f equivale a US$ %.2f", real, conversao);


}

void ex08(){

    float celsius, fahr;
    printf("Informe a temperatura em graus Celisus - C: ");
    scanf("%f",&celsius);

    fahr = celsius * (9.0/5.0) + 32.0;

    printf("%.2f graus Celisus = %.2f graus Fahrenheit.", celsius, fahr);

}

void ex09(){

    float g, rad, pi = 3.141592;
    printf("Informe o valor do angulo em GRAUS: ");
    scanf("%f", &g);

    rad = g * (pi/180);

    printf("%.2f Graus = %.2f Radianos.", g, rad);


}

void ex10(){

    float valor = 780000.00, pri, seg, ter;

    pri = valor * (46.00/100.00);
    seg = valor * (32.00/100.00);
    ter = valor * (22.00/100.00);

    printf("O primeiro ganhador recebe: R$ %.2f\n", pri);
    printf("O segundo ganhador recebe: R$ %.2f\n", seg);
    printf("O terceiro ganhador recebe: R$ %.2f\n", ter);



}

void ex11(){

    float radius, pi = 3.141592, area;

    printf("Specify the radius of the circle, please: ");
    scanf("%f", &radius);

    area = pi * (pow(radius, 2)); // pow(base, expoente) ou (radius*radius)

    printf("The area of the circle is: %.2f.", area);


}

void ex12(){

    float radius, height, vol, pi = 3.141592;

    printf("Specify the cylinder height: ");
    scanf("%f", &height);
    printf("Now, specify the cylinder radius: ");
    scanf("%f", &radius);

    vol = pi * pow(radius, 2) * height;

    printf("Cylinder Volume: %.2f", vol);


}

void ex13(){

    float cathetus1, cathetus2, hyp;

    printf("Enter the first Cathetus value: ");
    scanf("%f", &cathetus1);

    printf("Enter the second Cathetus value: ");
    scanf("%f", &cathetus2);

    hyp = sqrt((cathetus1*cathetus1) + (cathetus2*cathetus2));

    printf("Hypotenuse = %.2f .", hyp);

}

void ex14(){

char c;
int b;

printf("Upper: ");
scanf("%c", &c);

b = c; //take the ASCII code of the enter letter
b = c + 32; // respective lowercase

printf("Lower: %c", b);

}

void ex15(){

    int numLido, numGerado, aux;
    printf("Enter a number: ");
    scanf("%d", &numLido);
    /* basicamente, um algoritmo simples eh ir pegando o resto
    das divisoes e tambem ir dividindo o numero lido por 10 */
    numGerado = numLido % 10;
    aux = numLido / 10;
    numGerado = numGerado * 10 + aux % 10;
    aux = aux / 10;
    numGerado = numGerado * 10 + aux % 10;
    printf("Typed Number: %d\n", numLido);
    printf("Numero gerado: %d", numGerado);

}

void ex16(){
    /*
    Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits)*/
    int num;
    printf("Enter a int number: ");
    scanf("%d", &num);

    printf("%d x 2 = %d\n", num, num<<1);
    printf("%d / 2 = %d\n", num, num>>1);


}

void ex17(){

    unsigned char x, y;
    printf("Enter X value: ");
    scanf("%d", &x);
    y = ~x; // gera o complemento bit a bit de X.
    printf("X = %d  \n~X = %d ", x, y);

}

void ex18(){

    /*Elabore um programa que leia dois números
    inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.*/

    int x, y, esq, dir;
    printf("Enter a first number: ");
    scanf("%d", &x);
    printf("Enter a second number: ");
    scanf("%d", &y);

    esq = x << y;
    dir = x >> y;

    printf("%d << %d = %d\n", x, y, esq);
    printf("%d >> %d = %d", x, y, dir);
}

void ex19(){
    int n1, n2;
    printf("Enter a first number: ");
    scanf("%d", &n1);
    printf("Enter a second number: ");
    scanf("%d", &n2);

    printf("\n");

    printf("%d ^ %d = %d\n", n1, n2, n1^n2);
    printf("%d | %d = %d\n", n1, n2, n1|n2);
    printf("%d & %d = %d\n", n1, n2, n1&n2);

}

int main()
{
    //ex01();
    //ex02();
    //ex03();
    //ex04();
    //ex05();
    //ex06();
    //ex07();
    //ex08();
    //ex09();
    //ex10();
    //ex11();
    //ex12();
    //ex13();
    //ex14();
    //ex15();
    //ex16();
    //ex17();
    //ex18();
    //ex19();


    return 0;
}
