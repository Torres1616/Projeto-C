#include <stdio.h>

int main() {
    // Variáveis
    int idade, matricula;
    float altura, peso;
    char nome[20];

    // Entrada de Dados
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu Nome: \n");
    scanf("%s", &nome);

    printf("Digite sua Matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua Altura: \n");
    scanf("%f", &altura);

    printf("Digite seu Peso: \n");
    scanf("%f", &peso);

    // Saída de Dados
    printf("Sua idade é: %d - sua Matricula: %d\n", idade, matricula);
    printf("Sua Altura é: %.2f - e peso: %.2f\n", altura, peso);
    printf("Seu Nome é: %s\n", nome);

    return 0;
}
