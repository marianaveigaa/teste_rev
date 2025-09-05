#include <stdio.h>
#include <stdlib.h>

/*
Este programa pede um nome e um numero ao usuario,
e depois calcula a soma de todos os numeros ate o numero digitado.
*/
int main() {
    char nome[10];
    int numero;
    int soma = 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero = 0) {
        printf("Voce digitou zero!\n");
    }

    // Loop para calcular a soma
    for (int i = 1; i < numero; i++) {
        soma = i;
    }

    printf("Ola %s, a soma dos numeros ate %d e: %d\n", nome, numero, soma)

    return 0;
}
