#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
