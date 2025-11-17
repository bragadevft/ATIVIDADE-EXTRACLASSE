#include <stdio.h>

#define TAM 10

float media(int v[]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += v[i];
    }
    return (float)soma / TAM;
}

int maior(int v[]) {
    int m = v[0];
    for (int i = 1; i < TAM; i++) {
        if (v[i] > m) {
            m = v[i];
        }
    }
    return m;
}

int menor(int v[]) {
    int m = v[0];
    for (int i = 1; i < TAM; i++) {
        if (v[i] < m) {
            m = v[i];
        }
    }
    return m;
}

int pares(int v[]) {
    int c = 0;
    for (int i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0) {
            c++;
        }
    }
    return c;
}

int main() {
    int v[TAM];

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nMedia: %.2f\n", media(v));
    printf("Maior: %d\n", maior(v));
    printf("Menor: %d\n", menor(v));
    printf("Quantidade de pares: %d\n", pares(v));

    return 0;
}
