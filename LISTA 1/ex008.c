#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X, Y, POT;
    printf("Digite o primeiro valor: \n");
    scanf("%d",&X);
    printf("Digite o segundo valor: \n");
    scanf("%d",&Y);
    POT = pow(X,Y);
    printf("Valor de %d elevado a %da potencia: %d", X,Y,POT);
    system("pause");
    return 0
}
