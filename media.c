#include <stdio.h>

int main () {
    float nota1, nota2, nota3;
    float media;

    // Entrada de Dados
    printf("***  Media do aluno ***\n");

    printf("Digite a Primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a Segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a Terceira nota: \n");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (float) (nota1 + nota2 + nota3) / 3;

    // Saída de Dados
    printf("***  Resultado da Media ***\n");
    printf("A media do aluno e: %.2f\n", media);

    return 0;
}
