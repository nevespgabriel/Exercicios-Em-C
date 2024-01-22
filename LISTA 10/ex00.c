#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char C[10];
    int CONT;
    for(CONT=0;CONT<10;CONT++)
    {
        C[CONT] = getchar();
    }
    putchar(C);
    system("pause");
    return 0;
}
