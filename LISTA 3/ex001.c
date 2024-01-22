#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float N1,N2,N3;
    printf("Digite o primeiro numero:\n");
    scanf("%f",&N1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&N2);
    printf("Digite o terceiro numero:\n");
    scanf("%f",&N3);
    if (N1>=0)
    {
        printf("Raiz quadrada de %.1f e %.1f\n",N1,pow(N1,1/2));
    }
    else
    {
        printf("O quadrado de %.1f e %.1f\n",N1,pow(N1,2));
    }
    if (N2>10 & N2<100)
    {
        printf("Numero esta entre 10 e 100 - intervalo permitido\n");
    }
    if (N3<N2)
    {
        printf("A diferença entre %.1f e %.1f e %.1f\n",N2,N3,N2-N3);
    }
    else
    {
        printf("%.1f adicionado de 1 e %.1f\n",N3,N3+1);
    }
    system("pause");
    return 0;
}
