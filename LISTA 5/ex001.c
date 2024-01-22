#include<stdio.h>
#include<stdlib.h>

/*Escrever um programa que lê 5 conjuntos de 2 valores, o primeiro representando o número de um 
aluno e o segundo representando a sua altura em centímetros. Encontrar o aluno mais alto e o 
mais baixo e escrever seus números, suas alturas e uma mensagem dizendo se é o mais alto ou o 
mais baixo.*/

int main()
{
    int CONT, N, MAIOR_N, MENOR_N;
    float ALT, MAIOR_ALT, MENOR_ALT;
    CONT = 1;
    do
    {
        printf("Digite seu numero:\n");
        scanf("%d",&N);
        printf("Digite sua altura em cm:\n ");
        scanf("%f",&ALT);
        if (CONT == 1)
        {
            MAIOR_ALT = ALT;
            MENOR_ALT = ALT;
            MAIOR_N = N;
            MENOR_N = N;
        }
        else if (ALT > MAIOR_ALT)
        {
            MAIOR_ALT = ALT;
            MAIOR_N = N;
        }
        else if (ALT < MENOR_ALT)
        {
            MENOR_ALT = ALT;
            MENOR_N = N;
        }
        CONT++;
    }
    while (CONT<=5);
    printf("O aluno de numero %d teve a maior altura: %.1f\n",MAIOR_N,MAIOR_ALT);
    printf("O aluno de numero %d teve a menor altura: %.1f\n",MENOR_N,MENOR_ALT);
    system("pause");
    return 0;
}
