#include<stdio.h>
#include<stdlib.h>

int main()
{
    int INTER1, INTER2, INTER3, N, OPCAO;
    OPCAO = 1;
    INTER1 = 0;
    INTER2 = 0;
    INTER3 = 0;
    while (OPCAO == 1)
    {
        printf("Digite um valor:\n");
        scanf("%d",&N);
        if (N >= 0 & N <= 24)
        {
            INTER1++;
        }
        else if (N >= 25 & N <= 50)
        {
            INTER2++;
        }
        else
        {
            INTER3++;
        }
        printf("Quer continuar? DIGITE 1 PARA SIM, OUTRO VALOR PARA NAO!\n");
        scanf("%d",&OPCAO);
    }
    printf("Foram digitados %d numeros no intervalo [0-24]\n",INTER1);
    printf("%d no intervalo [25-50]\n",INTER2);
    printf("%d em nenhum dos intervalos\n",INTER3);
    system("pause");
    return 0;
}
