#include <stdio.h>
#include <locale.h>

// Desenvolva um programa em C para determinar o valor de uma multa de trânsito a partir da velocidade registrada de um veículo.
// O programa deverá solicitar a velocidade máxima permitida na via e a velocidade registrada do veículo.
// Caso o veículo esteja dentro do limite permitido, informe que não houve infração.
// Caso o limite tenha sido ultrapassado, utilize estruturas if, else if e else aninhadas para classificar a infração
// considerando o percentual excedido: até 20% acima do limite, a infração será média; acima de 20% e até
// 50%, será grave; e acima de 50%, será gravíssima. Após determinar a classificação, verifique se a
// velocidade registrada foi superior a 120 km/h. Nesse caso, acrescente à mensagem um alerta de velocidade
// extremamente elevada. O programa deverá apresentar o limite da via, a velocidade registrada, o percentual
// excedido e a classificação final da situação.

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int vel_max, vel_r;

    printf("Informe 1º a velocidade máxima da via e depois a velocidade resgistrada em km/h\n");
    scanf("%d %d", &vel_max, &vel_r);

    printf("O limite da via é de %dkm/h\n", vel_max);

    printf("A velocidade registrada é de %dkm/h\n", vel_r);

    if (vel_r > vel_max)
    {
        if (vel_r > 120)
        {
            printf("Alerta, você estava andando com uma velocidade extremamente elevada\n");
        }
        if (vel_r > (vel_max * 1.5))
        {
            printf("Infração gravíssima, você passou o limite da via em mais de 50 porcento\n");
        }
        else if (vel_r <= (vel_max * 1.5) && vel_r > (vel_max * 1.2))
        {
            printf("Infração grave, você passou o limite da via em mais de 20 porcento\n");
        }
        else
        {
            printf("Infração média, você passou o limite da via mas não ultrapassou mais de 20 porcento\n");
        }
    }
    else
    {
        printf("Não houve infração\n");
    }

}

