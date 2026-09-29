#include <stdio.h>
#include <locale.h>

// Leia um número inteiro positivo N.
// Calcule a soma de todos os números de 1 até N.
// Entrada: 5
// Processamento: 1 + 2 + 3 + 4 + 5
// Saída: 15



int main(){

    setlocale(LC_ALL, ".UTF-8");

    int N;
    int result = 0;

    printf("Informe um número\n");
    scanf("%d", &N);

    for (N; N > 0; N--)
    {
        result += N;
    }

    printf("%d", result);

    return 0;
}




