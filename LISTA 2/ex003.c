#include<stdio.h>
#include<stdlib.h>

/*Fazer um programa para calcular o salário líquido de um funcionário com base na seguinte 
fórmula: 
SALARIO LIQUIDO = SALARIO BRUTO - DESCONTO
Devem ser respeitadas as seguintes condições para cálculo do desconto:
- Salário Bruto <=50, desconto de 5%;
- Salário Bruto > 50, desconto de 10%*/

int main()
{
    float SAL;
    printf("Qual o seu salario bruto?\n");
    scanf("%f",&SAL);
    if(SAL<=50)
    {
        SAL = SAL - 0.05*SAL;
    }
    else
    {
        SAL = SAL - SAL*0.1;
    }
    printf("O seu salario liquido e %.2f",SAL);
    system("pause");
    return 0;
}
