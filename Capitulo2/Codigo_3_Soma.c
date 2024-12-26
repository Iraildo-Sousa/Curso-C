/* Aqui iremos somar dois números inteiros */

#include <stdio.h>

int main ( void ) {

    int n1, n2, r;

    printf("Digite um número: ");
    scanf("%d", &n1); /* adiciona o número digitado à variável n1 */

    printf("Digite outro número: ");
    scanf("%d", &n2); /* adiciona o número digitado à variável n2 */

    r = n1 + n2; /* soma os dois números inteiros */

    printf("A soma de %d + %d é %d.\n", n1, n1, r);

    return 0;

} /* Fim da função main */