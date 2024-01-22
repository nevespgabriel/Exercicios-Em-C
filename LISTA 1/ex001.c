#include<stdio.h>
#include<stdlib.h>
/*Faça um programa que leia dois números reais e em seguida mostre: a soma, o produto, a divisão e a
subtração entre eles*/
int main()
{
    float NUM1, NUM2, SOMA, PROD, DIV, SUB;
    printf("Digite um numero\n");
    scanf("%f",&NUM1);
    printf("Digite outro numero\n");
    scanf("%f",&NUM2);
    SOMA = NUM1 + NUM2;
    PROD = NUM1 * NUM2;
    DIV = NUM1 / NUM2;
    SUB = NUM1 - NUM2;
    printf("A soma foi %.1f \nA subtracao foi %.1f\n",SOMA,SUB);
    printf("O produto foi %.1f\nAdivisao foi %.1f", PROD, DIV);
}
