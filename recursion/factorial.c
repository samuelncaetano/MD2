#include <stdio.h>

// Função recursiva para calcular o fatorial
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: fatorial de 0 e 1 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int num;
    
    // Entrada do usuário
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);
    
    // Verifica se o número é não negativo
    if (num < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        // Exibe o resultado
        printf("O fatorial de %d é %llu\n", num, fatorial(num));
    }

    return 0;
}
