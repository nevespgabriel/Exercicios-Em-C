#include<stdio.h>
#include<stdlib.h>

int main()
{
    float NOTA[5], MAIOR, MED;
    int C, POS_MAIOR;
    for(C=0; C<5; C++)
    {
        do
        {
            printf("Digite a nota do aluno %d\n",C);
            scanf("%f",&NOTA[C]);
        }
        while((NOTA[C]<0)||(NOTA[C]>10));
        if (C==0)
        {
            MAIOR = NOTA[C];
            POS_MAIOR = C;
        }
        else if (NOTA[C]>MAIOR)
        {
            MAIOR = NOTA[C];
            POS_MAIOR = C;
        }
        MED+=NOTA[C];
    }
    printf("NOTAS:\n");
    for (C=0;C<5;C++)
    {
        printf("%.1f\n",NOTA[C]);
    }
    MED = (float)MED/C;
    printf("A media de todos os alunos foi %.1f\n",MED);
    printf("A maior nota digitada foi %.1f, do aluno %d\n",MAIOR,POS_MAIOR);
    system("pause");
    return 0;
}
