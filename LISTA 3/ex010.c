#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float X,Y,Z;
    printf("Digite o primeiro lado do triangulo:\n");
    scanf("%f",&X);
    printf("Digite o segundo lado do triangulo:\n");
    scanf("%f",&Y);
    printf("Digite o terceiro lado do triangulo:\n");
    scanf("%f",&Z);
    if (X<Y+Z & Y<X+Z & Z<X+Y)
    {
        if (X==Y & Y==Z)
        {
            printf("O triangulo e equilatero\n");
        }
        else if (X!=Y & Y!=Z)
        {
            printf("O triangulo e escaleno\n");
        }
        else
        {
            printf("O triangulo e isosceles\n");
        }
    }
    else
    {
        printf("Os valores digitados nao sao capazes de formar um triangulo\n");
    }
    system("pause");
    return 0
}
