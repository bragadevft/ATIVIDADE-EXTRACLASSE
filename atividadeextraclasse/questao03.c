#include <stdio.h>

int somar_digitos(int n) {
    int soma = 0;
    if (n < 0) n = -n;

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Soma dos digitos: %d\n", somar_digitos(num));

    return 0;
}
