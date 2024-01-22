#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa. Para isso o 
usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. Apresente o 
valor convertido.*/

void RTOD(float R, float D, float COT)
{
    D = R*COT;
    printf("Voce possui %.2f dolares\n", D);
}
void DTOR(float D, float R, float COT)
{
    R = D/COT;
    printf("Voce possui %.2f reais\n",R);
}
int main()
{
    int OPCAO;
    float V1,V2,COT;
    printf("Escolha a conversao:\n[1]Real para dolar\n[2]Dolar para real\nSua escolha = ");
    scanf("%d",&OPCAO);
    printf("Digite quanto de dinheiro voce tem:\n");
    scanf("%f",&V1);
    printf("Um real esta valendo quantos dolares?\n");
    scanf("%f",&COT);
    switch(OPCAO)
    {
        case 1:
            RTOD(V1,V2,COT);
            break;
        case 2:
            DTOR(V1,V2,COT);
            break;
        default:
            printf("Valor invalido digitado!!\n");
    }
    system("pause");
    return 0;
}
