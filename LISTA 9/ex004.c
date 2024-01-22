#include<stdio.h>
#include<stdlib.h>

int main()
{
    char DISCIPLINA[10] = "algoritmos";
    DISCIPLINA[10] = '\0';
    printf("Nome da disciplina: %s\n",DISCIPLINA);
    system("pause");
    return 0;
}
