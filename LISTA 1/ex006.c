#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
