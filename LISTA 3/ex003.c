#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Perguntar ao usuário se ele deseja calcular a área de um:
a. triângulo
b. circulo
c. cubo
d. cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.*/

void TRIANGULO(float B, float H)
{
    printf("Digite a base e a altura em metros:\n");
    scanf("%f %f",&B,&H);
    printf("Area do triangulo: %.1f\n",(B*H)/2);
}
void CIRCULO(float R)
{
    printf("Digite o raio em metros:\n");
    scanf("%f",&R);
    printf("Area do circulo: %.1f\n",3.14*R*R);
}
void CUBO(float L)
{
    printf("Digite o lado em metros: \n");
    scanf("%f",&L);
    printf("Area do cubo: %.1f\n",L*L*6);
}
void CILINDRO(float R, float H)
{
    printf("Digite o raio e a altura em metros:\n");
    scanf("%f %f",&R,&H);
    printf("Area do cilindro: %.1f\n",3.14*R*R*2+2*3.14*R*H);
}
int main()
{
    int OPCAO;
    float M1, M2, M3;
    printf("Escolha a area a ser calculada:\n[1]TRIANGULO\n[2]CIRCULO\n[3]CUBO\n[4]CILINDRO\nSua escolha = ");
    scanf("%d",&OPCAO);
    switch (OPCAO)
    {
        case 1:
            TRIANGULO(M1,M2);
            break;
        case 2:
            CIRCULO(M1);
            break;
        case 3:
            CUBO(M1);
            break;
        case 4:
            CILINDRO(M1,M2);
            break;
        default:
            printf("OPCAO INVALIDA!!");
    }
    system("pause");
    return 0;
}
