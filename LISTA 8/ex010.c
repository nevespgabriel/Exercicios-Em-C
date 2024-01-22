#include<stdio.h>
#include<stdlib.h>

void NOTA_INVALIDA(float NOTA[15])
{
    int INVALIDAS, C;
    INVALIDAS = 0;
    for (C=0;C<15;C++)
    {
        if ((NOTA[C]<0)||(NOTA[C]>10))
        {
            INVALIDAS++;
        }
    }
    printf("%d notas digitadas sao valores invalidos!\n",INVALIDAS);
}

void MEDIA_VALIDAS(float NOTA[15])
{
    int VALIDAS, C;
    float MED;
    MED = 0;
    VALIDAS = 0;
    for (C=0;C<15;C++)
    {
        if ((NOTA[C]>0)&&(NOTA[C]<10))
        {
            VALIDAS++;
            MED = MED + NOTA[C];
        }
    }
    MED = (float)MED/(float)VALIDAS;
    printf("%.1f eh a media das notas validas!\n",MED);
}

void ACIMA_MEDIA(float NOTA[15])
{
    int PASSOU, C;
    PASSOU = 0;
    for (C=0;C<15;C++)
    {
        if ((NOTA[C]>=7)&&(NOTA[C]<=10))
        {
            PASSOU++;
        }
    }
    printf("O numero de alunos que ficaram acima da media foi %d\n",PASSOU);
}

int main()
{
    int C;
    float NOTAS[15];
    for (C=0;C<15;C++)
    {
        printf("Digite a nota do aluno %d:\n",C);
        scanf("%f",&NOTAS[C]);
    }
    NOTA_INVALIDA(NOTAS);
    MEDIA_VALIDAS(NOTAS);
    ACIMA_MEDIA(NOTAS);
    system("pause");
    return 0;
}
