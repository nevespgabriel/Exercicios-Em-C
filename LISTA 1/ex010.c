#include<stdio.h>
#include<stdlib.h>

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
