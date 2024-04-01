/*
**    Função: Números Felizes
**    Autor: Anderson Luiz Gomes Soares
**    Data: 30/03/2024
**    Observações:
*/

#include <stdio.h>
#include <stdbool.h>

int proximo_numero(int n) {
    int soma = 0;
    while (n != 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}

bool eh_numero_feliz(int n) {
    bool visitados[1000] = {false}; 
    while (n != 1 && !visitados[n]) {
        visitados[n] = true;
        n = proximo_numero(n);
    }
    return n == 1; 
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo para verificar se ele é um número feliz: ");
    scanf("%d", &numero);
    if (eh_numero_feliz(numero)) {
        printf("%d é um número feliz.\n", numero);
    } else {
        printf("%d não é um número feliz.\n", numero);
    }
    return 0;
}
