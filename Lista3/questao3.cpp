#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");

    float n1, n2, R;

    printf("Digite 2 números\n");
    scanf("%f %f", &n1, &n2);

    R = n1 + n2;

    printf("A soma dos dois números é %.2f\n", R);

    R = n1 - n2;

    printf("A subtração dos dois números é %.2f\n", R);

    R = n1 * n2;

    printf("A multiplicação dos dois números é %.2f\n", R);

    R = n1 / n2;

    printf("A divisão dos dois números é %.2f\n", R);

    return 0;
}

