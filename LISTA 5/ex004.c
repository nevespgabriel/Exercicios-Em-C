#include<stdio.h>
#include<stdlib.h>

int main()
{
    int INTER1, INTER2, INTER3, N, OPCAO;
    float MED1, MED2, MED3;
    OPCAO = 1;
    INTER1 = 0;
    INTER2 = 0;
    INTER3 = 0;
    MED1 = 0;
    MED2 = 0;
    MED3 = 0;
    while (OPCAO == 1)
    {
        printf("Digite um valor:\n");
        scanf("%d",&N);
        if (N >= 0 & N <= 24)
        {
            MED1+=N;
            INTER1++;
        }
        else if (N >= 25 & N <= 50)
        {
            MED2+=N;
            INTER2++;
        }
        else
        {
            MED3+=N;
            INTER3++;
        }
        printf("Quer continuar? DIGITE 1 PARA SIM, OUTRO VALOR PARA NAO!\n");
        scanf("%d",&OPCAO);
    }
    MED1 = MED1/INTER1;
    MED2 = MED2/INTER2;
    MED3 = MED3/INTER3;
    printf("Foram digitados %d numeros no intervalo [0-24]\n",INTER1);
    printf ("A media dos valores desse intervalo foi %.1f\n",MED1);
    printf("%d no intervalo [25-50]\n",INTER2);
    printf ("A media dos valores desse intervalo foi %.1f\n",MED2);
    printf("%d em nenhum dos intervalos\n",INTER3);
    printf ("A media dos valores fora dos intervalos foi %.1f\n",MED3);
    system("pause");
    return 0;
}

