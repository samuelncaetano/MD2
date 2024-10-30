#include <stdio.h>

// Função para calcular o MDC usando a fórmula da divisão (a = q * b + r)
int mdc(int a, int b) {
    while (b != 0) {
        int q = a / b;        // Calcula o quociente inteiro
        int r = a - q * b;    // Calcula o resto como r = a - q * b
        a = b;                // Atualiza a com o valor de b
        b = r;                // Atualiza b com o valor do resto r
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
