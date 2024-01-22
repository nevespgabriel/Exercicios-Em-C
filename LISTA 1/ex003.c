#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18W de 
potência. Faça um programa que recebe as duas dimensões de um cômodo (em metros), calcule e mostre a 
sua área (em m2) e a potência de iluminação que deverá ser usada.*/

int main()
{
    float COMP, LARG, AREA, POT;
    printf("Digite o comprimento do comodo em m\n");
    scanf("%f",&COMP);
    printf("Digite a largura do comodo em m\n");
    scanf("%f",&LARG);
    AREA = COMP*LARG;
    POT = AREA*18;
    printf("Area do comodo: %.1f metros quadrados\n",AREA);
    printf("Potencia de iluminacao: %.1fW\n",POT);
    system("pause");
    return 0;
}
