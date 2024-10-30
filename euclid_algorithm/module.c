#include <stdio.h>

// Função para calcular o MDC usando o cálculo do resto (% mod)
int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b; // Calcula o resto da divisão de a por b
        a = b;             // Atualiza a com o valor de b
        b = resto;         // Atualiza b com o valor do resto
    }
    return a; // Retorna o valor de a, que é o MDC
}

int main() {
    int num1, num2;

    // Entrada dos números
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Cálculo e saída do MDC
    int resultado = mdc(num1, num2);
    printf("O MDC de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
