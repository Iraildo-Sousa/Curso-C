/* Vamos trabalhar com o que aprendemos até o momento */

#include <stdio.h>

int main ( void ) {

    int aprovados = 0, reprovados = 0, aluno = 0; 

    for (int contador = 1; contador <= 10; contador++) {

        printf("Digite a nota do %dº aluno (1 para aprovado ou 2 para reprovado): ", contador);
        scanf("%d", &aluno);

        printf("Aprovados: %d e Reprovados: %d\n\n", aprovados, reprovados);

        
        if (aluno == 1) {

            aprovados = aprovados + 1;

        }

        else if (aluno == 2) {

            reprovados = reprovados + 1;

        }

        else {

            printf("Número inválido, digite apenas 1 para aprovado ou 2 para reprovado. \n\n");
            contador = contador - 1;

        }


    }

    if (aprovados >= 8) {

            printf("Alunos aprovados: %d\nAlunos reprovados: %d\nO professor merece um aumento!\n", aprovados, reprovados);

    }

    else if (aprovados < 8 && aprovados >= 5) {

            printf("Alunos aprovados: %d\nAlunos reprovados: %d\nO professor não fez mais do que sua obrigação!\n", aprovados, reprovados);

    }

    else {

            printf("Alunos aprovados: %d\nAlunos reprovados: %d\nEsse professor merece a rua!\n", aprovados, reprovados);

    }


    return 0;

}