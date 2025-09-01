#include <stdio.h>

int main() {
    int valor, cedulas[] = {100, 50, 20, 10, 5, 2};
    int qtd, i, restante;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    restante = valor;
    for (i = 0; i < 6; i++) {
        qtd = restante / cedulas[i];
        if (qtd > 0) {
            printf("%d cédula(s) de R$ %d\n", qtd, cedulas[i]);
            restante -= qtd * cedulas[i];
        }
    }

    if (restante != 0) {
        printf("Não é possível sacar esse valor com as cédulas disponíveis.\n");
    }

    return 0;
}
