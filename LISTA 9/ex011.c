#include<stdio.h>
#include<stdlib.h>

int main()
{
    char PALINDROMO[12];
    int MAI, MEN, TF=0;
    printf("Digite uma palavra para verificar palindromo:\n");
    gets(PALINDROMO);
    MAI = strlen(PALINDROMO)-1;
    for(MEN=0;MEN<strlen(PALINDROMO);MEN++)
    {
        if (toupper(PALINDROMO[MEN])==toupper(PALINDROMO[MAI]))
        {
            TF++;
        }
        MAI--;
    }
    if(TF==strlen(PALINDROMO))
    {
        printf("A palavra eh um palindromo!\n");
    }
    else
    {
        printf("A palavra nao eh um palindromo!\n");
    }
    system("pause");
    return 0;
}
