#include<stdio.h>
#include<stdlib.h>

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
