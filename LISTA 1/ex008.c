#include<stdio.h>
#include<stdlib.h>

/*Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada obtida por um aluno 
para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos 
pesos das notas (pesquise a fórmula da média ponderada).*/

int main()
{
    float N1, N2, M;
    int P1, P2;
    printf("Digite o valor da primeira nota:\n");
    scanf("%f",&N1);
    printf("Digite o valor da segunda nota:\n");
    scanf("%f",&N2);
    printf("Digite o peso da primeira nota:\n");
    scanf("%d",&P1);
    printf("Digite o peso da segunda nota:\n");
    scanf("%d",&P2);
    M = (N1*P1+N2*P2)/(P1+P2);
    printf("A media foi %.1f.\n", M);
    system("pause");
    return 0;
}
