#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void ex01(){
    int a, b, x;
    printf("type two integers numbers: ");
    scanf("%d%d", &a, &b);

    x = a > b ? a : b ;
    printf("Greater: %d", x);
}

void ex02(){
    int a, b;
    printf("type two integers numbers: ");
    scanf("%d%d", &a, &b);

    if (a > b){
        printf("%d is the greater.", a);
    }
    else
        if (a==b){
            printf("Equal numbers.");
        }
    else
        printf("%d is the GREATER.", b);
}

void ex03(){
    int a;
    printf("Enter a int number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

void ex04(){
    float wage, amount;
    printf("Enter your wage: ");
    scanf("%f", &wage);

    printf("Enter the loan payment amount: ");
    scanf("%f", &amount);

    if(amount > wage * 20.0/100.0){
        printf("Loan NOT granted");
    }
    else
        printf("Loan GRANTED");



}

void ex05(){
    int num, raiz;
    printf("Enter a number: ");
    scanf("%d", &num);

    raiz = sqrt(num);

    if (num > 0){
        printf("%d\n", num*num);
        printf("%d\n", raiz);
    }
    else
        printf("The number is LESS than ZERO.");
}

void ex06(){
    float h;
    char gender;

    printf("Whats your GENDER? M (Masc.) or F (Fem.) ");
    gender = getchar();

    printf("Enter your height: ");
    scanf("%f", &h);

    switch (gender){
    case 'M': //empilhamento de cases
    case 'm':{
        float man = (72.7 * h) - 58;
        printf("Ideal weight: %.2f\n", man);}
        break;
    case 'F': //empilhamento de cases
    case 'f':{
        float woman = (62.1 * h) - 44.7;
        printf("Ideal weight: %.2f\n", woman);}
        break;
    default: printf("Invalid gender.");
    }
}

void ex07(){
    char state;
    float price, final_p;

    printf("Enter the state for wich the product will be shipped: ");
    scanf("%c", &state); // considere: m - minas gerais, s - sao paulo, r - rio de janeiro, n - mato grosso


    printf("Enter the product price: ");
    scanf("%f", &price);

    /*if (state == 'mg' || state == 'MG'){
        final_p = price + (price * 7/100);
        printf("Final Price: R$ %.2f", final_p);
    }
    else
    if (state == 'SP' || state == 'sp'){
        final_p = price + (price * 12/100);
        printf("Final Price: R$ %.2f", final_p);
    }
    else
    if (state == 'RJ' || state == 'rj'){
        final_p = price + (price * 15/100);
        printf("Final Price: R$ %.2f", final_p);
    }
    else
    if (state == 'MS' || state == 'ms'){
        final_p = price + (price * 8/100);
        printf("Final Price: R$ %.2f", final_p);
    }
    else
        printf("INVALID STATE. Try Again!");*/

    switch (state){
        case 'M':
        case 'm':{
            final_p = price + (price * 7/100);
            printf("Final Price: R$ %.2f", final_p);
        }break;

        case 'S':
        case 's':{
            final_p = price + (price * 12/100);
            printf("Final Price: R$ %.2f", final_p);
        }break;

        case 'R':
        case 'r':{
            final_p = price + (price * 15/100);
            printf("Final Price: R$ %.2f", final_p);
        }break;

        case 'N':
        case 'n':{
            final_p = price + (price * 8/100);
            printf("Final Price: R$ %.2f", final_p);
        }break;

        default: printf("Invalid State !");
    }
}

void ex08(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 5 && age <= 7)
        printf("Your category competition is INFANTIL A");
    else
        if (age >= 8 && age <= 10)
        printf("Your category competition is INFANTIL B");
    else
        if (age >= 11 && age <= 13)
        printf("Your category competition is JUVENIL A");
    else
        if (age >= 14 && age <= 17)
        printf("Your category competition is JUVENIL B");
    else
        if (age >= 18)
        printf("Your category competition is SENIOR");
    else
        printf("You are not old enough to compete.");
}

void ex09(){

    float w, h;
    printf("Enter your WEIGHT (kg): ");
    scanf("%f", &w);
    printf("Enter your HEIGHT (m): ");
    scanf("%f", &h);

    if (h < 1.20){
        if (w <= 60)
            printf("Tier A");
        else
            if (w > 60 && w <= 90)
                printf("Tier D");
        else
            if (w > 90)
                printf("Tier G");
    }
    else
    if (h >= 1.20 && h <= 1.70){
        if (w <= 60)
            printf("Tier B");
        else
            if (w > 60 && w <= 90)
                printf("Tier E");
        else
            if (w > 90)
                printf("Tier H");
    }
    else
    if (h > 1.70){
        if (w <= 60)
            printf("Tier C");
        else
            if (w > 60 && w <= 90)
                printf("Tier F");
        else
            if (w > 90)
                printf("Tier I");
    }
}

void ex10(){

    unsigned int x, y, z, op, wa, harm;

    printf("Enter THREE integers NUMBERS: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Enter a number to choose an operation:\n 1 - Gemotric Mean\n 2 - Weighted average\n 3 - Harmonic Mean\n 4 - Arithmetic mean\n --> ");
    scanf("%d", &op);

    switch (op){
    case 1:{
        printf("Geometric Mean = %d", x*y*z);
        }break;
    case 2:{
        wa = ((x+2)*(y+3)*(z))/6;
        printf("Weighted Average: %d",wa);
        }break;
    case 3:{
        harm = 1/(1/x)+(1/y)+(1/z);
        printf("Harmonic Mean: %d", harm);
    }break;
    case 4:{
        printf("Arithmetic Mean: %d", (x+y+z)/3);
    }break;
    default: printf("ERROR. Try Again!");
    }
}


void ex11(){
    int m;
    printf("Enter the number of the month do you want know: ");
    scanf("%d", &m);

    switch (m){
    case 1:{
        printf("January");}
        break;
    case 2:{
        printf("February");}
        break;
    case 3:{
        printf("March");}
        break;
    case 4:{
        printf("April");}
        break;
    case 5:{
        printf("May");}
        break;
    case 6:{
        printf("June");}
        break;
    case 7:{
        printf("July");}
        break;
    case 8:{
        printf("August");}
        break;
    case 9:{
        printf("September");}
        break;
    case 10:{
        printf("October");}
        break;
    case 11:{
        printf("November");}
        break;
    case 12:{
        printf("December");}
        break;
        }
}

void ex12(){
    int d;
    printf("Enter the week day you wish to know: ");
    scanf("%d", &d);

    switch(d){
        case 1:{
            printf("Sunday");}
            break;
        case 2:{
            printf("Monday");}
            break;
        case 3:{
            printf("Tuesday");}
            break;
        case 4:{
            printf("Wednesday");}
            break;
        case 5:{
            printf("Thursday");}
            break;
        case 6:{
            printf("Friday");}
            break;
        case 7:{
            printf("Saturday");}
            break;
        default: {
            printf("Is NOT a WEEK DAY. Enter numbers from 1 to 7.");}
    }

}

void ex13(){
    int n1, n2;
    char op;

    printf("Enter a Arithmetic Operation:  ");
    op = getchar();
    printf("Enter two integers numbers:  ");
    scanf("%d %d", &n1, &n2);

    switch(op){
        case '+':{
            printf("%d + %d = %d", n1, n2, n1+n2);}
            break;
        case '-':{
            printf("%d - %d = %d", n1, n2, n1-n2);}
            break;
        case '*':{
            printf("%d x %d = %d", n1, n2, n1*n2);}
            break;
        case '/':{
            printf("%d / %d = %d", n1, n2, n1/n2);}
            break;
        default:{
            printf("ERROR");}
    }

}

void ex14(){
    int n;
    printf("Enter a int number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 != 0)
        printf("Divisible only by 3, and not by 5.");
    else
        if (n % 3 != 0 && n % 5 == 0)
            printf("Divisible only by 5, and not by 3.");
    else
         if (n % 3 == 0 && n % 5 == 0)
            printf("Divisible by 5 and by 3.");
    else
        printf("NOT divisible by 5 and by 3.");
}


int main(){
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
    return 0;
}
