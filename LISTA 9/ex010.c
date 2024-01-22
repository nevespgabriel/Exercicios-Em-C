#include<stdio.h>
#include<stdlib.h>

int main()
{
    char PAL1[10], PAL2[10];
    int C1[10], C2[10], C, I2, VERIF=0;
    printf("Digite a primeira palavra:\n");
    gets(PAL1);
    printf("Digite a segunda palavra:\n");
    gets(PAL2);
    for(C=0;C<10;C++)
    {
        C1[C] = 0;
        C2[C] = 0;
    }
    C=0;
    if (strlen(PAL1)==strlen(PAL2))
    {
        do
        {
            for(I2=0;I2<strlen(PAL2);I2++)
            {
                if ((C1[C]==0)&&(toupper(PAL1[C])==toupper(PAL2[I2])))
                {
                    C1[C] = 1;
                    C2[I2] = 1;
                }
            }
            C++;
        }while(C<strlen(PAL1));
        for(C=0;C<strlen(PAL1);C++)
        {
            if(C1[C] == 1)
            {
                VERIF++;
            }
        }
        if (VERIF == strlen(PAL1))
        {
            printf("As palavras sao anagramas!\n");
        }
        else
        {
            printf("As palavras nao sao anagramas!\n");
        }
    }
    else
    {
        printf("Nao sao anagramas, pois nao possuem o mesmo tamanho!\n");
    }
    system("pause");
    return 0;
}
