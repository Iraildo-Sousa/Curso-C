/* Programa para testarmos a estrutura de condição IF */

#include <stdio.h>

/* Iniciando a função main */

int main (void) {

    int num1, num2;

    printf("Digite dois números inteiros e direi a relação entre eles: ");

    scanf("%d%d", &num1, &num2);

    if (num1 < num2) {

        printf("O número %d é menor do que o número %d.\n", num1, num2);

    } /* if (num1 < num2) */

    if (num1 > num2) {

        printf("O número %d é maior do que o número %d.\n", num1, num2);

    } /* if (num1 > num2) */

    if (num1 == num2) {

        printf("O número %d é igual o número %d.\n", num1, num2);

    } /* if (num1 == num2) */

    return 0;

} /* int main (void) */