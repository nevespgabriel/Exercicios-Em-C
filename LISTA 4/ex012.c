#include <stdio.h>

/*Fazer um programa em C que seja capaz de ler um número inteiro positivo do teclado e de 
verificar se a sua sequência dígitos é exatamente a mesma, tanto se for analisado da esquerda para 
a direita quanto da direita para a esquerda. Caso seja, imprimir “ESSE NUMERO E 
PALINDROMO!!!”. Caso não seja, imprimir “ESSE NUMERO NAO E PALINDROMO!!!” 
OBSERVACÃO: utilize divisões e/ou multiplicações sucessivas por 10.*/

int main() 
{
    int numero, original, reverso = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    original = numero;
    while (numero > 0) 
    {
        digito = numero % 10; 
        reverso = reverso * 10 + digito;
        numero /= 10; 
    }
    if (original == reverso) 
    {
        printf("ESSE NUMERO E PALINDROMO!!!\n");
    } 
    else 
    {
        printf("ESSE NUMERO NAO E PALINDROMO!!!\n");
    }

    return 0;
}



