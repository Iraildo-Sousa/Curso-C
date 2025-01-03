/* Criar um valor de sentinela para sair do código*/

#include <stdio.h>

int main ( void ) {

    int nota, sair = 0, totalNotas = 0, aluno = 0;
    float media;


    while (nota != -1) {
        
        totalNotas = totalNotas + nota;

        if (nota != -1) {

            aluno++;

        }

        printf("Digite a nota do %dº aluno: ", aluno);
        scanf("%d", &nota);

        while (nota < -1) {

            printf("Nota inválida! Digite outra nota: ");
            scanf("%d", &nota);

        }

        while (nota == -1 && aluno == 1) {

            printf("Nota inválida! Digite outra nota: ");
            scanf("%d", &nota);

        }

    } /* fim while */


    if (nota > -2 ) {
        
        media = (float) totalNotas / (aluno - 1);
        printf("A média da turma é %.2f.\n", media);

    }

    else {

        printf("Nota inválida\n");

    }

    return 0;

} /* fim main */