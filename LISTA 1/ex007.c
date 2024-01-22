#include<stdio.h>
#include<stdlib.h>

/*Faça um programa para ler um valor (que represente o lado de um quadrado) calcular e mostrar a 
respectiva área do quadrado.*/

int main()
{
    float L, AREA;
    printf("Digite o valor do lado, em metros, de um quadrado:\n");
    scanf("%f",&L);
    AREA = L*L;
    printf("A area do quadrado vale %.1f metros quadrados.\n", AREA);
    system("pause");
    return 0;
}
