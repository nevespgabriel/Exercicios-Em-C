#include<stdio.h>
#include<stdlib.h>

/*Dado um número inteiro não nulo de três dígitos, imprimir este número ao contrário, isto e, se a entrada 
for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e um). Usar operações sobre inteiros, por 
exemplo, divisões sucessivas por 10*/

int main()
{
    int N;
    printf("Digite um numero de 3 digitos:\n");
    scanf("%d",&N);
    printf("O numero digitado ao contrario e %d%d%d\n", N%10,(N%100)/10,N/100);
    system("pause");
    return 0;
}
