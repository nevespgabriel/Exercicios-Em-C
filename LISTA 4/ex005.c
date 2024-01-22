#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que realize o cálculo do fatorial de um número inteiro e positivo informado 
pelo usuário.*/

int main()
{
    double N, FAT;
    FAT = 1;
    printf("Digite o numero que quer ver o fatorial:\n");
    scanf("%lf",&N);
    while (N > 0)
    {
        FAT*=N;
        N--;
    }
    printf("O fatorial do numero deu %.0lf\n",FAT);
    system("pause");
    return 0;
}
