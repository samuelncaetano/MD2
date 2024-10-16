#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1; // Caso base: Fibonacci(1) e Fibonacci(2) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
    }
}

int main() {
    int num, i;
    
    // Entrada do usuário
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &num);
    
    // Exibe os números da sequência de Fibonacci até o n-ésimo termo
    printf("Sequência de Fibonacci até o %dº termo:\n", num);
    for (i = 1; i <= num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
