#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o 
mesmo pode começar em um dia e terminar em outro, tendo uma duração máxima de 24 horas.*/

int main()
{
    int HI,HF,MI,MF,DH,DM;
    printf("Qual foi o horario de inicio?\n");
    scanf("%d",&HI);
    printf("Qual foi o minuto de inicio?\n");
    scanf("%d",&MI);
    printf("Qual foi o horario de termino?\n");
    scanf("%d",&HF);
    printf("Qual foi o minuto de termino?\n");
    scanf("%d",&MF);
    DM = MF - MI;
    if (HI<24 & HI>-1 & HF<24 & HI>-1 & MI>-1 & MI<60 & MF>-1 & MF<60)
    {
        if (HI > HF)
        {
           DH = 24-HI+HF;
        }
        else
        {
           DH = HF-HI;
        }
        if  (DM<0)
        {
            DM*=-1;
        }
        printf("O jogo durou %d horas e %d minutos\n",DH,DM);
    }
    else
    {
        printf("Valor invalido digitado...\n");
    }
    system("pause");
    return 0;
}
