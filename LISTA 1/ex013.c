#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    printf("Digite um numero de 3 digitos:\n");
    scanf("%d",&N);
    printf("O numero digitado ao contrario e %d%d%d\n", N%10,(N%100)/10,N/100);
    system("pause");
    return 0;
}
