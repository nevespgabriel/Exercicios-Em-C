#include<stdio.h>
#include<stdlib.h>

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
