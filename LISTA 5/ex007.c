#include<stdio.h>
#include<stdlib.h>

int main()
{
    float H, CONT, N;
    printf("Ate qual numero quer somar dividindo 1 por?\n");
    scanf("%f",&N);
    CONT = 1;
    H = 0;
    while (CONT <= N)
    {
        H = H + 1/CONT;
        CONT++;
    }
    printf("O valor da soma das divisoes ate %.1f deu %.1f\n",N,H);
    system("pause");
    return 0;
}
