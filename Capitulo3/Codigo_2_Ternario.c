/* Testando o operador ternário */

#include <stdio.h>

int main ( void ) {

    int nota1 = -1, nota2, nota3;

/* Exemplo 1 */

/*  nota1 > 6 ? printf("Aprovado!\n") 
    : nota1 > 3 && nota1 < 6 ? printf("Recuperação\n") 
    : printf("Reprovado!\n"); */

    printf(nota1 >= 6 ? "Aprovado\n" 
    : nota1 >= 3 && nota1 <= 5 ? "Recuperação!\n"
    : nota1 >= 0 && nota1 <= 2 ? "Reprovado!\n" 
    : "Nota inválida!\n");

    return 0;

}