#include<stdio.h>
#include<stdlib.h>

int main()
{
    int VET1[5], VET2[5], C;
    for (C=0;C<5;C++)
    {
        printf("Digite o %d valor do vetor 1: ", C);
        scanf("%d",&VET1[C]);
    }
    for (C=0;C<5;C++)
    {
        printf("Digite o %d valor do vetor 2: ", C);
        scanf("%d",&VET2[C]);
    }
    printf("SOMA:\n");
    for (C=0;C<5;C++)
    {
        printf("%d + %d = %d\n", VET1[C], VET2[C], VET1[C]+VET2[C]);
    }
    printf("SUBTRACAO:\n");
    for (C=0;C<5;C++)
    {
        printf("%d - %d = %d\n", VET1[C], VET2[C], VET1[C]-VET2[C]);
    }
    printf("MULTIPLICACAO:\n");
    for (C=0;C<5;C++)
    {
        printf("%d * %d = %d\n", VET1[C], VET2[C], VET1[C]*VET2[C]);
    }
    printf("DIVISAO:\n");
    for (C=0;C<5;C++)
    {
        printf("%d / %d = %d\n", VET1[C], VET2[C], VET1[C]/VET2[C]);
    }
    system("pause");
    return 0;
}
