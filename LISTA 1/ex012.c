#include<stdio.h>
#include<stdlib.h>

/*Dado um numero inteiro que representa uma quantidade de segundos, determinar o seu valor equivalente 
em horas, minutos e segundos. Se a quantidade de segundos for insuficiente para dar um valor em horas, o 
valor em horas deve ser 0 (zero). A mesma observação vale em relação aos minutos e segundos. 
Por exemplo: 3.600 segundos = 1 hora, 0 minutos, 0 segundos.
3.500 segundos = 0 horas, 58 minutos e 20 segundos.*/

int main()
{
    int SEG;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d",&SEG);
    printf("Isso corresponde a %d horas, %d minutos e %d segundos.\n",SEG/3600,(SEG%3600)%60,SEG%60);
    system("pause");
    return 0;
}
