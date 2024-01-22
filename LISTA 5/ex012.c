#include <stdio.h>

int main() {
    int numero, original, reverso = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    original = numero; // Armazena o n�mero original para comparar no final
    // Inverte o n�mero
    while (numero > 0) {
        digito = numero % 10; // Obt�m o �ltimo d�gito
        reverso = reverso * 10 + digito; // Adiciona o d�gito ao reverso
        numero /= 10; // Remove o �ltimo d�gito do n�mero original
    }

    // Verifica se o n�mero � um pal�ndromo
    if (original == reverso) {
        printf("ESSE NUMERO E PALINDROMO!!!\n");
    } else {
        printf("ESSE NUMERO NAO E PALINDROMO!!!\n");
    }

    return 0;
}



