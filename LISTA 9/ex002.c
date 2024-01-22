#include<stdio.h>
#include<stdlib.h>

int main()
{
    char FRASE[40];
    int C=0, I;
    do
    {
        C = 0;
        printf("Escreva uma frase de ate 40 letras:\n");
        gets(FRASE);
        while(FRASE[C]!='\0')
        {
            C++;
            if (C>=39)
            {
                printf("ENTRADA INVALIDA!! TENTE NOVAMENTE\n");
                C = 41;
                break;
            }
        }
        if (C<40)
        {
            for(I=0;I<=C;I++)
            {
                printf("%c\n",FRASE[I]);
            }
        }
    }while(C>39);
    system("pause");
    return 0;
}
