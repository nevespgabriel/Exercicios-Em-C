#include<stdio.h>
#include<stdlib.h>

/*Desenvolva uma aplicação que receba a idade de um indivíduo em dias e mostre-a expressa em anos, 
meses e dias.*/

int main()
{
    int DIA;
    printf("Quantos dias de idade voce tem?\n");
    scanf("%d",&DIA);
    printf("Voce tem %d anos, %d meses e %d dias de idade\n",DIA/365,(DIA%365)/30,(DIA%365)%30);
    system("pause");
    return 0;
}
