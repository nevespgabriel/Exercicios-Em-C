#include<stdio.h>
#include<stdlib.h>
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
