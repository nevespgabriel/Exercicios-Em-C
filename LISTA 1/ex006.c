#include<stdio.h>
#include<stdlib.h>

/*Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit e o mesmo converte 
os valores para Celsius Apresente o resultado (pesquise a fórmula).*/

int main()
{
    float FAHR, CEL;
    printf("Digite quantos graus em Fahrenheits: ");
    scanf("%f",&FAHR);
    CEL = (FAHR-32)/1.8;
    printf("%.1fF correspondem a %.1fC\n",FAHR,CEL);
    system("pause");
    return 0;
}
