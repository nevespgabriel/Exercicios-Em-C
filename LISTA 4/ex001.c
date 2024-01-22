#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char ESTADO;
    printf("Digite a primeira letra do seu estado civil:\n");
    scanf("%c",&ESTADO);
    switch(ESTADO)
    {
        case 'S':
        case 's':
            printf("Voce esta solteiro!\n");
            break;
        case 'D':
        case 'd':
            printf("Voce esta divorciado\n");
            break;
        case 'C':
        case 'c':
            printf("Voce esta casado!\n");
            break;
        case 'V':
        case 'v':
            printf("Voce se encontra viuvo.\n");
            break;
        case 'E':
        case 'e':
            printf("Voce esta desquitado.\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    system("pause");
    return 0;
}
