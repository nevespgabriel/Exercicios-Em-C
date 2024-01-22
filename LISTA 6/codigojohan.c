#include<stdio.h>
#include<stdlib.h>

int main ()
{
int far = 50;
float c;
do {
c = (5.0/9.0)*(far-32);
printf ("O valor em celsius de %d farenheit e %.2f graus celsius \n", far, c);
far++;
}while (far <=150);
system("pause");
return 0;
}
