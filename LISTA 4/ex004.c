#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void MEDIA_ARITMETICA(float N1, float N2)
{
    printf("Media aritmetica entre %.1f e %.1f: %.1f\n",N1,N2,(N1+N2)/2);
}
void MEDIA_HARMONICA(float N1, float N2)
{
    printf("Media harmonica entre %.1f e %.1f: %.1f\n",N1,N2,1/(1/N1)+(1/N2));
}
void MEDIA_GEOMETRICA(float N1, float N2)
{
    printf("Media geometrica entre %.1f e %.1f: %.1f\n",N1,N2,pow((N1*N2),1/2));
}

int main()
{
    float N1,N2;
    int OPCAO;
    printf("Digite dois numeros: \n");
    scanf("%f %f",&N1,&N2);
    printf("Escolha uma opcao:\n[1] MEDIA ARITMETICA\n[2]MEDIA HARMONICA\n[3]MEDIA GEOMETRICA\nSua resposta = ");
    scanf("%d",&OPCAO);
    switch(OPCAO)
    {
        case 1:
            MEDIA_ARITMETICA(N1,N2);
            break;
        case 2:
            MEDIA_HARMONICA(N1,N2);
            break;
        case 3:
            MEDIA_GEOMETRICA(N1,N2);
            break;
        default:
            printf("Opcao invalida!!!\n");
    }
    system("pause");
    return 0;
}
