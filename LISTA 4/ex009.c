#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um programa que calcule e apresente a série de fibonacci. A quantidade de termos a 
serem apresentados devem ser informados pelo usuário. Apresente também a somatória de todos 
os termos exibidos pela série de fibonacci solicitada.
Série de Fibonacci = “1, 1, 2, 3, 5, 8, 13, 21, 34, 55”
*/

int main()
{
    int QUANT, CONT, ANT, DEP, SOMA;
    printf("Quantos termos da sequencia de Fibonacci quer que apareca?\n");
    scanf("%d",&QUANT);
    CONT = 1;
    ANT = 1;
    DEP = 1;
    SOMA = 0;
    while (CONT <= QUANT)
    {
        if(CONT % 2 != 0)
        {
            printf(" %d \n",ANT);
            SOMA = SOMA + ANT;
            ANT = ANT + DEP;
        }
        else
        {
            printf(" %d \n",DEP);
            SOMA += DEP;
            DEP = DEP + ANT;
        }
        CONT++;
    }
    printf("A soma dos valores da sequencia deu %d\n",SOMA);
    system("pause");
    return 0;
}
