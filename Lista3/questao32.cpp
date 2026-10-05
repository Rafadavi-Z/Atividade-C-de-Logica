#include <stdio.h>
#include <locale.h>

// Leia: hora de entrada; hora de saída.
// Calcule o número de horas que o veículo permaneceu estacionado. Considere:
// • primeira hora → R$ 10,00;
// • demais horas → R$ 5,00 por hora.
// Apresente o tempo de permanência e o valor total.

int main() {

    setlocale(LC_ALL, ".UTF-8");

    int hora_ent, hora_sai, tempo, valor;

    printf("Qual o horário de entrada?\n");
    scanf("%d", &hora_ent);

    printf("Qual o horário de saída?\n");
    scanf("%d", &hora_sai);

    tempo = hora_sai - hora_ent;
    valor = 0;

    for (tempo; tempo > 1; tempo--)
    {
        valor += 5;
    }
    valor += 10;

    printf("O tempo de permanência foi de %d e o valor total ficou em R$ %d\n", hora_sai - hora_ent, valor);

    return 0;
}




