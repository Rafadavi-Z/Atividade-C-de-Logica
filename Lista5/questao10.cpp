#include <stdio.h>
#include <locale.h>

// Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float vetor[15], total = 0;

    int i;

    printf("Digite a nota da prova de 15 alunos\n");

    for (i = 0; i < 15; i++)
    {
        printf("Digite o valor da nota do %dº Aluno\n", i + 1);
        scanf("%f", &vetor[i]);
        total += vetor[i];
    }
    
    printf("A média geral foi %.2f", total / 15);

    return 0;
}

