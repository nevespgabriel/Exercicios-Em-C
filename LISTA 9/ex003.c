#include<stdio.h>
#include<stdlib.h>

int main()
{
    char STR[21];
    int C, VOGAIS;
    do
    {
        VOGAIS = 0;
        C = 0;
        printf("Digite uma frase com ate 20 caracteres:\n");
        gets(STR);
        do
        {
            switch(toupper(STR[C]))
            {
                case 'A':
                    VOGAIS++;
                    break;
                case 'E':
                    VOGAIS++;
                    break;
                case 'I':
                    VOGAIS++;
                    break;
                case 'O':
                    VOGAIS++;
                    break;
                case 'U':
                    VOGAIS++;
                    break;

            }
            C++;
            if ((C>=20)&&(STR[C]!='\0'))
            {
                printf("NUMERO ALTO DE CARACTERES, TENTE NOVAMENTE!!\n");
                C=21;
                break;
            }

        }while(STR[C]!='\0');
    }while(C>=21);
    printf("O numero de vogais contidas na frase digitada eh %d\n",VOGAIS);
    system("pause");
    return 0;
}
