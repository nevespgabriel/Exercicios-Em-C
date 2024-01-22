#include<stdio.h>
#include<stdlib.h>

/*Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida de sua altura dividida 
por dois. Escreva um programa que solicite os valores da base e da altura e forneça a área do triângulo.*/

int main()
{
    float BASE, ALT, AREA;
    printf("Digite a base do triangulo\n");
    scanf("%f", &BASE);
    printf("Digite a altura do triangulo\t");
    scanf("%f", &ALT);
    AREA = (BASE*ALT)/2;
    printf("Area: %.1f", AREA);
}
