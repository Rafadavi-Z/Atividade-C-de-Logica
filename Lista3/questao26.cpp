#include <stdio.h>
#include <locale.h>

// Leia a quantidade de alunos de uma turma.
// Em seguida, leia a nota de cada aluno.
// Ao final, apresente a média geral da turma.



int main(){

    setlocale(LC_ALL, ".UTF-8");


    int alunos;
    float notas = 0;
    float media;

    printf("Informe a quantidade de alunos\n");
    scanf("%d", &alunos);

    int i = alunos;

    for (i; i > 0; i--)
    {
        printf("Informe a nota do aluno\n");
        scanf("%f", &notas);
        media += notas;
    }

    media = media / alunos;
    printf("A média da turma é %.2f", media);

    return 0;
}




