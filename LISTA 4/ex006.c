#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int OPCAO;
    printf("Digite 1 para mamiferos e 2 para aves:\n");
    scanf("%d",&OPCAO);
    switch (OPCAO)
    {
        case 1:
            printf("Digite 1 para quadrupede e 2 para bipede:\n");
            scanf("%d",&OPCAO);
            switch(OPCAO)
            {
                case 1:
                    printf("Digite 1 para carnivoro e 2 para herbivoro:\n");
                    scanf("%d",&OPCAO);
                    switch(OPCAO)
                    {
                        case 1:
                            printf("O animal e um leao!\n");
                            break;
                        case 2:
                            printf("O animal e um cavalo!\n");
                            break;
                        default:
                            printf("OPCAO INVALIDA!!\n");
                    }
                    break;
                case 2:
                    printf("Digite 1 para onivoro e 2 para frutifero:\n");
                    scanf("%d",&OPCAO);
                    switch(OPCAO)
                    {
                        case 1:
                            printf("O animal e o homem!\n");
                            break;
                        case 2:
                            printf("O animal e um macaco!\n");
                            break;
                        default:
                            printf("OPCAO INVALIDA!!\n");
                    }
                    break;
                default:
                    printf("OPCAO INVALIDA!!\n");
            }
            break;
        case 2:
            printf("Digite 1 para nao-voadoras e 2 para nadadoras:\n");
            scanf("%d",&OPCAO);
            switch(OPCAO)
            {
                case 1:
                    printf("Digite 1 para tropical e 2 para polar:\n");
                    scanf("%d",&OPCAO);
                    switch(OPCAO)
                    {
                        case 1:
                            printf("O animal e um avestruz!!\n");
                            break;
                        case 2:
                            printf("O animal e um pinguim!!\n");
                            break;
                        default:
                            printf("OPCAO INVALIDA");
                    }
                    break;
                case 2:
                    printf("O animal e um pato!\n");
                    break;
                default:
                    printf("OPCAO INVALIDA!!\n");
            }
            break;
        default:
            printf("OPCAO INVALIDA!!\n");

    }
    system("pause");
    return 0;
}
