#include <stdio.h>
#include <locale.h>

// Desenvolva um algoritmo para controlar os resultados de uma turma.
// Primeiramente, informe a quantidade de alunos.
// Para cada aluno, leia: nome; nota da primeira avaliação; nota da segunda avaliação.
// Calcule a média e classifique:
// • Média ≥ 7 → Aprovado
// • Média ≥ 5 e < 7 → Recuperação
// • Média < 5 → Reprovado
// Ao final, apresente: 
// quantidade de alunos; quantidade de aprovados; quantidade em recuperação; quantidade de reprovados; média geral da turma; maior média; menor média.


int main() {

    setlocale(LC_ALL, ".UTF-8");

    int quant_alunos, aprovados = 0, recuparacao = 0 , reprovados = 0, maior_media, menor_media;

    printf("Informe a quantidade de alunos\n");
    scanf("%d", &quant_alunos);

    char nome[20][quant_alunos];
    float nota1[quant_alunos], nota2[quant_alunos], media_individual, media_geral = 0;


    for (int i = (quant_alunos - 1); i >= 0; i--)
    {
        printf("Digite o nome do aluno\n");
        scanf("%s", nome[i]);

        printf("Digite a 1ª nota\n");
        scanf("%f", &nota1[i]);

        printf("Digite a 2ª nota\n");
        scanf("%f", &nota2[i]);

        media_individual = (nota1[i] + nota2[i]) / 2;

        if (media_individual >= 7)
        {
            aprovados++;
        }
        else if (media_individual >= 5 && media_individual < 7)
        {
            recuparacao++;
        }
        else
        {
            reprovados++;
        }

        media_geral += media_individual;


        if(i == (quant_alunos - 1))
        {
            maior_media = i;
            menor_media = i;
        }
        else
        {
            if ((nota1[maior_media] + nota2[maior_media]) / 2 < media_individual)
            {
                maior_media = i;
            }
            if ((nota1[menor_media] + nota2[menor_media]) / 2 > media_individual)
            {
                menor_media = i;
            }
        }

    }
    
    printf("A quantidade de aprovados foi %d\n", aprovados);
    printf("A quantidade em recuperação foi %d\n", recuparacao);
    printf("A quantidade de reprovados foi %d\n", reprovados);
    printf("A média geral da turma foi %.2f\n", media_geral / quant_alunos);
    printf("A maior média foi de %s com a 1ª nota sendo %.2f, a 2ª sendo %.2f e a média sendo %.2f\n", nome[maior_media], nota1[maior_media], nota2[maior_media], (nota1[maior_media] + nota2[maior_media]) / 2);
    printf("A menor média foi de %s com a 1ª nota sendo %.2f, a 2ª sendo %.2f e a média sendo %.2f\n", nome[menor_media], nota1[menor_media], nota2[menor_media], (nota1[menor_media] + nota2[menor_media]) / 2);

    return 0;
}