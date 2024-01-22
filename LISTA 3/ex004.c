#include<stdio.h>
#include<stdlib.h>

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
