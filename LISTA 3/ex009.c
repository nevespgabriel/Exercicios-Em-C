#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float N1,N2,N3,MA;
    int ME;
    printf("Qual foi sua primeira nota?\n");
    scanf("%f",&N1);
    printf("Qual foi sua segunda nota?\n");
    scanf("%f",&N2);
    printf("Qual foi sua terceira nota?\n");
    scanf("%f",&N3);
    printf("Qual foi sua media de exercicios?\n");
    scanf("%d",&ME);
    MA = (N1+N2*2+N3*3+ME)/7;
    if (N1>10 || N1<0 || N2>10 || N2<0 || N3>10 || N3<0 || ME>10 || ME<0)
    {
        printf("Valor invalido\n");
    }
    else if (MA >= 9)
    {
        printf("Conceito A\nMedia = %.2f\nAluno aprovado!\n",MA);
    }
    else if (MA >= 7.5)
    {
        printf("Conceito B\nMedia = %.2f\nAluno aprovado!\n",MA);
    }
    else if (MA >= 6)
    {
        printf("Conceito C\nMedia = %.2f\nAluno aprovado!\n",MA);
    }
    else if (MA >= 4)
    {
        printf("Conceito D\nMedia = %.2f\nAluno reprovado!\n",MA);
    }
    else
    {
        printf("Conceito E\nMedia = %.2f\nAluno reprovado!\n",MA);
    }
    system("pause");
    return 0;
}
