#include <stdio.h>
int main() {
 // Declaração De Variáveis.
    int idade = 23;
    float altura = 1.70;
    float peso = 79.95;
    char nome[20] = "Karlos"; 
 // Mudança de Valor.
    idade = 24;
    altura = 1.75;
    peso = 80.00;
 // Saida de Dados.
    printf("Idade: %d\n", idade);
    printf("altura: %.2f\n", altura);
    printf("peso: %.2f\n", peso);
    printf("nome: %s\n", nome);
}

