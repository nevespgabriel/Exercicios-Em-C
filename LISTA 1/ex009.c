#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia dois números que deverão ser colocados, respectivamente, nas variáveis 
VA e VB. O programa deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo 
destas variáveis.*/

int main()
{
    int VA, VB;
    printf("Digite o valor de VA: \n");
    scanf("%d",&VA);
    printf("Digite o valor de VB:\n");
    scanf("%d",&VB);
    VA = VB + VA;
    VB = VA - VB;
    VA = VA - VB;
    printf("VA = %d\n",VA);
    printf("VB = %d\n", VB);
    system("pause");
    return 0;
}
