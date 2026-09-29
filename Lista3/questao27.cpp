#include <stdio.h>
#include <locale.h>

// Leia as notas de 10 alunos. Considere:
// • nota ≥ 7 → aprovado;
// • nota < 7 → reprovado.
// Ao final, apresente: quantidade de aprovados; quantidade de reprovados; percentual de aprovação.


int main(){

    setlocale(LC_ALL, ".UTF-8");

    float notas;

    printf("Você informará a nota de 10 alunos\n");

    int i = 1, aprov = 0, reprov = 0;

    for (i; i <= 10; i++)
    {
        printf("Informe a do %dº aluno\n", i);
        scanf("%f", &notas);
        if (notas >= 7)
        {
            aprov++;
        }
        else
        {
            reprov++;
        }
    }

    printf("A quantidade de aprovados é %d\nA quantidade de reprovados é %d\nO percentual de aprovação é de %2.f%%", aprov, reprov, ((aprov/10.0) * 100));

    return 0;
}




