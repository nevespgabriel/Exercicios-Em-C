#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Fazer um programa que calcule o volume de uma esfera em função do raio R. O raio deverá 
variar de 0 a 20 cm de 0.5 em 0.5cm.*/

int main()
{
    float R, V;
    R = 0;
    do
    {
        V = (4/3)*3.14*pow(R,3);
        printf("O volume da esfera com raio de %.1fcm vale %.1fcm cubicos\n",R,V);
        R+=0.5;
    }
    while(R<=20);
    system("pause");
    return 0;
}
