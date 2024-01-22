#include<stdio.h>
#include<stdlib.h>

int main()
{
    int F;
    float C;
    F = 50;
    do
    {
        C = 5.0*(F-32)/9.0;
        printf("%.1f C = %d F\n",C,F);
        F++;
    }
    while (F<=150);
    system("pause");
    return 0;
}



