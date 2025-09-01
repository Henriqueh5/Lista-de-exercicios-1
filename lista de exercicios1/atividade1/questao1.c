#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o lado A: ");
    scanf("%f", &a);

    printf("Digite o lado B: ");
    scanf("%f", &b);

    printf("Digite o lado C: ");
    scanf("%f", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("É um triângulo válido.\n");

        if (a == b && b == c) {
            printf("Triângulo Equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles.\n");
        } else {
            printf("Triângulo Escaleno.\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}