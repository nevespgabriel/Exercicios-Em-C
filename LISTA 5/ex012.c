#include <stdio.h>

int main() {
    int numero, original, reverso = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    original = numero; // Armazena o número original para comparar no final
    // Inverte o número
    while (numero > 0) {
        digito = numero % 10; // Obtém o último dígito
        reverso = reverso * 10 + digito; // Adiciona o dígito ao reverso
        numero /= 10; // Remove o último dígito do número original
    }

    // Verifica se o número é um palíndromo
    if (original == reverso) {
        printf("ESSE NUMERO E PALINDROMO!!!\n");
    } else {
        printf("ESSE NUMERO NAO E PALINDROMO!!!\n");
    }

    return 0;
}



