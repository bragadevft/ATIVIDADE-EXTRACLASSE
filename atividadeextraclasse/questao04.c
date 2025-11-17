#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    float x, y, r;
    int op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("1-Somar  2-Subtrair  3-Multiplicar  4-Dividir\n");
    printf("Escolha a operacao: ");
    scanf("%d", &op);

    if (op == 1) {
        r = somar(x, y);
        printf("Resultado: %.2f\n", r);
    } else if (op == 2) {
        r = subtrair(x, y);
        printf("Resultado: %.2f\n", r);
    } else if (op == 3) {
        r = multiplicar(x, y);
        printf("Resultado: %.2f\n", r);
    } else if (op == 4) {
        if (y == 0) {
            printf("Erro: divisao por zero.\n");
        } else {
            r = dividir(x, y);
            printf("Resultado: %.2f\n", r);
        }
    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}
