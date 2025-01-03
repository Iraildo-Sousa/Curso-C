/* Agora testaremos o For */

/* Pseudocódigo: 

    Para aluno, se aluno for igual ou menor que 12 alunos, então aluno vai receber +1

        escreva: Digite a nota do aluno 1 (aumenta +1 em cada ciclo):
        leia: a nota do aluno.
        nota da turma vai ser somada todas as notas digitadas pelo professor.

    a media será a divisão de todas as notas por 12 (quantidade de alunos).
    escreva: A média da turma é o valor contido em média.


*/

#include <stdio.h>

int main ( void ) {

    int notas = 0, notaTurma, aluno = 1;
    int media;

    for( aluno = 1 ; aluno <= 12 ; aluno++ ) {

        printf("Digite a nota do aluno %d: \n", aluno);
        scanf("%d", &notaTurma);
        notas = notas + notaTurma;

    } /* for( aluno ; aluno <= 12 ; aluno++ ) */

/*    while (aluno <= 12) {

        printf("Digite a nota do aluno %d: ", aluno);
        scanf("%d", &notaTurma);
        notas = notas + notaTurma;
        aluno++;
    } */

    media = notas / 12;

    printf("A média da turma é %d.\n", media);

    return 0;

} /* int main ( void ) */