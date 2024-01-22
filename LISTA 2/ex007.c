#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*A empresa Xing Ling SA decidiu conceder um aumento de salários a seus funcionários de acordo 
com a tabela abaixo:
 Salário Atual     Índice De Aumento
0,00    – 1000,00         15%
1000,01 – 1500,00         12%
1500,01 – 1800,00         10%
1800,01 - 2000,00         7%
2000,01 – 2500,00         4%
acima de 2500,00  Sem aumento
Escrever um algoritmo que lê, para cada funcionário, o seu número e o seu salário atual e escreve o 
número do funcionário, seu salário atual, o percentual de seu aumento e o valor do salário corrigido.*/

int main()
{
    float SAL;
    printf("Digite o seu salario atual:\n");
    scanf("%f",&SAL);
    if (SAL<=0 || SAL>=500000)
    {
        printf("Valor invalido!");
    }
    else if (SAL<=1000)
    {
        SAL = SAL + (0.15*SAL);
        printf("Seu novo salario sera de %.2f reais",SAL);
    }
    else if (SAL<=1500)
    {
        SAL = SAL + (0.12*SAL);
        printf("Seu novo salario sera de %.2f reais",SAL);
    }
    else if (SAL<=1800)
    {
        SAL = SAL + (0.1*SAL);
        printf("Seu novo salario sera de %.2f reais",SAL);
    }
    else if (SAL<=2000)
    {
        SAL = SAL + (0.07*SAL);
        printf("Seu novo salario sera de %.2f reais",SAL);
    }
    else if (SAL<=2500)
    {
        SAL = SAL + (0.04*SAL);
        printf("Seu novo salario sera de %.2f reais",SAL);
    }
    else
    {
        printf("Seu salario continuara sendo %.2f reais", SAL);
    }
    system("pause");
    return 0;
}
