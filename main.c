#include <stdio.h>

double soma(double a, double b)     { return a + b; }
double subtracao(double a, double b){ return a - b; }
double multiplicacao(double a, double b){ return a * b; }
double divisao(double a, double b)  { return b != 0 ? a / b : 0; }

int main() {
    double a, b, resultado;
    char op;

    printf("=== Calculadora ===\n");
    printf("Operadores: + - * /\n\n");

    while (1) {
        printf("Expressao (ou 'q' para sair): ");
        if (scanf(" %lf %c %lf", &a, &op, &b) != 3) {
            char c;
            scanf(" %c", &c);
            if (c == 'q') break;
            printf("Entrada invalida. Tente: 3 + 2\n");
            continue;
        }

        switch (op) {
            case '+': resultado = soma(a, b);           break;
            case '-': resultado = subtracao(a, b);      break;
            case '*': resultado = multiplicacao(a, b);  break;
            case '/':
                if (b == 0) { printf("Erro: divisao por zero\n"); continue; }
                resultado = divisao(a, b);
                break;
            default:
                printf("Operador invalido: %c\n", op);
                continue;
        }

        printf("= %.6g\n\n", resultado);
    }

    printf("Ate mais!\n");
    return 0;
}
