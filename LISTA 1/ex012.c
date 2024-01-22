#include<stdio.h>
#include<stdlib.h>

int main()
{
    int VA, VB;
    printf("Digite o valor de VA: \n");
    scanf("%d",&VA);
    printf("Digite o valor de VB:\n");
    scanf("%d",&VB);
    VA = VB + VA;
    VB = VA - VB;
    VA = VA - VB;
    printf("VA = %d\n",VA);
    printf("VB = %d\n", VB);
    system("pause");
    return 0;
}
