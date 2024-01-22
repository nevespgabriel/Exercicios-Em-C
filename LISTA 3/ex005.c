#include<stdio.h>
#include<stdlib.h>

int main()
{
    float N1,N2,N3,M;
    int COD;
    printf("Digite seu codigo:\n");
    scanf("%d",&COD);
    printf("Digite sua primeira nota:\n");
    scanf("%f",&N1);
    printf("Digite sua segunda nota:\n");
    scanf("%f",&N2);
    printf("Digite sua terceira nota:\n");
    scanf("%f",&N3);
    if(N1 >= 0 & N1<=10 & N2>=0 & N2<=10 & N3>=0 & N3<=10)
    {
        if(N1>=N2 & N1>=3)
        {
            M = (N1*4+N2*3+N3*3)/7;
        }
        else if(N2>=N1 & N2>=N3)
        {
            M = (N2*4+N1*3+N3*3)/7;
        }
        else
        {
            M = (N3*4+N1*3+N2*3)/7;
        }
        printf("Sua media foi %.1f", M);
    }
    else
    {
        printf("Valor inválido!");
    }
    system("pause");
    return 0;
}
