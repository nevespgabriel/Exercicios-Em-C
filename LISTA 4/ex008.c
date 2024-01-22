#include<stdio.h>
#include<stdlib.h>

/*Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser 
calculado pela soma dos valores de uma série infinita. Fazer um programa em C que calcule 
este número (e) considerando apenas as 15 (quinze) primeiras parcelas.*/

int main()
{
    float E, GUARDFAT, FAT, DIV;
    E = 2;
    GUARDFAT = 2;
    FAT = 2;
    while (GUARDFAT <=15)
    {
        DIV = GUARDFAT;
        FAT = DIV;
        while (FAT > 0)
        {
            DIV*=FAT;
            FAT--;
        }
        E+=1/DIV;
        GUARDFAT++;
    }
    printf("%f\n",E);
    system("pause");
    return 0;
}
