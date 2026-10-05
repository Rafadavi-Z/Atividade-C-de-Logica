#include <stdio.h>
#include <locale.h>

// Leia duas notas de um aluno e calcule sua média. Considere:
// • Média ≥ 7,0 → Aprovado
// • Média ≥ 5,0 e < 7,0 → Recuperação
// • Média < 5,0 → Reprovado
// Apresente a média e a situação do aluno.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float nota1, nota2, media;

    printf("Digite a 1ª nota\n");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua média é %.2f e você está ", media);

    if (media >= 7)
    {
        printf("aprovado\n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("de recuperação\n");
    }
    else
    {
        printf("reprovado\n");
    }

    return 0;
}

