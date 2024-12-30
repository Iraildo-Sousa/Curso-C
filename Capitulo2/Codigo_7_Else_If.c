/* Agora vamos testar o mesmo código da sessão anterior, só que utilizando Else If */

#include <stdio.h>

int main ( void ) {

    int nota1 = 5;

    if ( nota1 >= 6 ) {

        printf("Aprovado\n");

    }

    else if ( nota1 >= 3 && nota1 <= 5 ) {

        printf("Recuperação!\n");

    }

    else if ( nota1 >= 0 && nota1 <= 2 ) {

        printf("Reprovado!\n");

    }

    else {

        printf("Nota inválida!\n");

    }

    return 0;

} /* int main ( void ) */