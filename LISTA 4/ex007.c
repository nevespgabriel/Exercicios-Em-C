#include<stdio.h>
#include<stdlib.h>

/*Sendo H = 1 + 1/2 + 1/3 + 1/4 +...+ 1/N, prepare um algoritmo para gerar o número H. O número 
N é fornecido pelo usuário.*/

int main()
{
    float H, CONT, N;
    printf("Ate qual numero quer somar dividindo 1 por?\n");
    scanf("%f",&N);
    CONT = 1;
    H = 0;
    while (CONT <= N)
    {
        H = H + 1/CONT;
        CONT++;
    }
    printf("O valor da soma das divisoes ate %.1f deu %.1f\n",N,H);
    system("pause");
    return 0;
}
