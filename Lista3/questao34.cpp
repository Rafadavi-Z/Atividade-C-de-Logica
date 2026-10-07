#include <stdio.h>
#include <locale.h>

// Uma loja deseja registrar várias vendas durante o dia. Para cada venda, leia:
// • nome do produto;
// • quantidade;
// • preço unitário.
// Calcule o total de cada venda. Utilize uma opção para informar quando não existem mais vendas.
// Ao final, apresente: quantidade de vendas realizadas; quantidade total de produtos vendidos; faturamento total; maior venda realizada.


int main() {

    setlocale(LC_ALL, ".UTF-8");

    char nome[10][3]; // normalmente já se usa o char como array, então o [10] é um array para guardar a quantidade de letras em uma palavra e [3] guarda o número de palavras (arrays de conjunto de letras) que podem ser salvas
    int quantidade[3], i = 0, total_quantidade = 0, total_vendas = 0, options, maior_venda;
    float preco[3], total_faturamento = 0;

    do
    {
        printf("Deseja registrar um produto?\n");
        printf("Aperte 1 para sim\n");
        printf("Aperte 0 finalizar o dia\n");
        scanf("%d", &options);

        switch (options)
        {
            case 0:
                printf("Dia finalizado, vamos ver os resultados\n");
                break;
            
            case 1:
                if (i > 3)
                {
                    printf("Não existem mais vendas\n");
                    break;
                }
                printf("Qual o produto desejado?\n");
                scanf("%s", nome[i]);
                total_vendas++;

                printf("Qual a quantidade do produto?\n");
                scanf("%d", &quantidade[i]);
                total_quantidade += quantidade[i];

                printf("Qual é o preço do produto?\n");
                scanf("%f", &preco[i]);
                total_faturamento += (quantidade[i] * preco[i]);

                if (i == 0 || (quantidade[i] * preco[i]) > maior_venda)
                {
                    maior_venda = i;
                }

                i++;

                printf("Cadastro Realizado.\n");
                break;

            default:
                printf("Opção inválida, tente novamnete\n");
                break;
        }
    } while(options != 0);

    printf("A quantidade de vendas realizadas foi %d\n", total_vendas);
    printf("A quantidade total de produtos vendidos foi %d\n", total_quantidade);
    printf("O faturamento total foi R$ %.2f\n", total_faturamento);
    printf("A maior venda realizada foi %s com %d precificado em R$ %.2f resultando assim em R$ %.2f\n", nome[maior_venda], quantidade[maior_venda], preco[maior_venda], quantidade[maior_venda] * preco[maior_venda] );

    return 0;
}




