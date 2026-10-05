#include <stdio.h>
#include <locale.h>

// Leia votos para três candidatos: Candidato 1, Candidato 2, Candidato 3.
// O programa deverá permitir a entrada de vários votos. Utilize 0 para encerrar a votação.
// Ao final, apresente: votos do candidato 1; votos do candidato 2; votos do candidato 3; total de votos; candidato vencedor.

int main() {

    setlocale(LC_ALL, ".UTF-8");

    int options, can1 = 0, can2 = 0, can3 = 0, total = 0;

    do 
    {
        printf("---Eleição---\n");
        printf("Digite 0 para encerrar a votação\n");
        printf("Digite 1 para votar no candidato 1\n");
        printf("Digite 2 para votar no candidato 2\n");
        printf("Digite 3 para votar no candidato 3\n");
        printf("Digite qualquer outro número para anular o voto\n");

        scanf("%d", &options);

        switch (options)
        {
            case 0:
                printf("A votação foi encerrada, vamos conferir os resultados\n");
                break;
            
            case 1:
                printf("Você votou no candidato 1 com sucesso\n");
                can1++;
                total++;
                break;

            case 2:
                printf("Você votou no candidato 2 com sucesso\n");
                can2++;
                total++;
                break;

            case 3:
                printf("Você votou no candidato 3 com sucesso\n");
                can3++;
                total++;
                break;
            
            default:
                printf("Seu voto foi anulado\n");
                total++;
                break;
        }
        
    } while(options != 0);

    printf("Teve um total de %d votos\n", total);

    printf("O candidato 1 recebeu %d votos\n", can1);
    printf("O candidato 2 recebeu %d votos\n", can2);
    printf("O candidato 3 recebeu %d votos\n", can3);

    if (can1 > can2 && can1 > can3)
    {
        printf("O candidato 1 venceu\n");
    }
    else if (can2 > can1 && can2 > can3)
    {
        printf("O candidato 2 venceu\n");  
    }
    else if (can3 > can1 && can3 > can2)
    {
        printf("O candidato 3 venceu\n");
    }
    else if (can1 == can2 || can1 == can3 || can2 == can3)
    {
        printf("Opa, infelizmente houve um empate\n");
    }

    return 0;
}




