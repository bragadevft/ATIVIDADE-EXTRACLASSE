#include <stdio.h>

int ano_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano_bissexto(ano) == 1) {
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }

    return 0;
}
