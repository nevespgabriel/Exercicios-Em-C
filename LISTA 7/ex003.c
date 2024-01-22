#include<stdio.h>
#include<stdlib.h>

int main()
{
    int C, NH, SEX;
    float MAI, MEN, MEDHF, H;
    MEDHF = NH = 0;
    for (C = 0; C<5; C++)
    {
        printf("Digite a sua altura: ");
        scanf("%f",&H);
        do
        {
            printf("\nDigite o seu sexo\n[1] MASCULINO\n[2] FEMININO \n");
            scanf("%d",&SEX);
        }
        while((SEX!= 1)&&(SEX!=2));
        if (C == 0)
        {
            MAI = MEN = H;
        }
        else if (H > MAI)
        {
            MAI = H;
        }
        else if (H < MEN)
        {
            MEN = H;
        }
        if (SEX == 2)
        {
            MEDHF+=H;
        }
        else
        {
            NH++;
        }
    }
    MEDHF/=(C-NH);
    printf("A maior altura digitada foi: %.2f\n",MAI);
    printf("A menor altura digitada foi: %.2f\n",MEN);
    printf("A media de altura das mulheres foi %.2f\n", MEDHF);
    printf("O numero de homens foi %d\n",NH);
    system("pause");
    return 0;
}\
