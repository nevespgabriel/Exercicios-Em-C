#include<stdio.h>
#include<stdlib.h>

int main()
{
    int SERIE, OPCAO, LIVRO, REDA, TERC, MAIOR;
    float ANTREDA, TOTAL;
    TERC = 0;
    ANTREDA = 0;
    TOTAL = 0;
    OPCAO = 1;
    MAIOR = 0;
    while (OPCAO == 1)
    {
        printf("Em qual serie esta?\n");
        scanf("%d",&SERIE);
        printf("Quantos livros le por mes?\n");
        scanf("%d",&LIVRO);
        printf("Gosta de fazer redacao? Digite 1 para sim e outro numero para nao\n");
        scanf("%d",&REDA);
        if (SERIE == 3)
        {
            TERC++;
            if (REDA !=1 )
            {
                ANTREDA++;
            }
        }
        else if (SERIE == 4 && LIVRO > MAIOR)
        {
            MAIOR = LIVRO;
        }
        printf("Deseja continuar? Digite 1 para sim e outro numero para nao:\n");
        scanf("%d",&OPCAO);
        TOTAL++;
    }
    printf("%d alunos estao na terceira serie\n",TERC);
    printf("A maior quantidade de livros lidos por mes por um aluno da quarta serie eh %d\n",MAIOR);
    printf("%.1f por cento dos alunos estao na terceira serie e nao gostam de redacao\n", (ANTREDA/TOTAL)*100);
    system("pause");
    return 0;
}
