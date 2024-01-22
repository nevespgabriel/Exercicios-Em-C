#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Fazer um programa que:
a) leia o valor de X de uma unidade de entrada;
b)calcule e escreva o valor do seguinte somatório:

X**25 / 1 - X**24 / 2 + X**23 / 3 - X**22 / 4 + ... + X / 25
*/

int main()
{
    int X, DEN, POT;
    float S=0;
    printf("Digite o valor: \n");
    scanf("%d",&X);
    DEN = 1;
    POT = 25;
    do
    {
        if (DEN%2==0)
        {
            S-= pow(X,POT)/DEN;
        }
        else
        {
            S+= pow(X,POT)/DEN;
        }
        POT--;
        DEN++;
    }
    while (DEN<=25);
    printf("Com X valendo %d, a soma deu %.2f\n",X,S);
    system("pause");
    return 0;
}
