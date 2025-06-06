#include <stdio.h>
int main() {
 // Variáveis.
    int idade;
    float altura ;
    float peso ;
    char nome[20];
      
// Entrada de Dados.
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
   
    printf("Digite sua altura: ");
    scanf("%.2f", &altura);
    printf("Sua altura é: %.2f\n", altura);
}