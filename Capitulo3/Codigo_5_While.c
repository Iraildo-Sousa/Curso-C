/* Iniciamos os testes em estruturas de repetição, e o primeiro método será o "while" */

#include <stdio.h>

int main ( void ) {

    float dinheiro = 100, produto = 0;

    while (produto <= dinheiro) {

        printf("Continue comprando!\n");
        produto = produto + 10;

    } /* while (produto <= dinheiro) */

    printf("Seus produtos chegaram a R$ %.2f de R$ %.2f disponível\n", produto, dinheiro);
     

    return 0;

} /* int main ( void ) */