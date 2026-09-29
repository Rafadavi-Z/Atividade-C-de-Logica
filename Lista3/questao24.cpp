#include <stdio.h>
#include <locale.h>

// Leia um número inteiro e apresente sua tabuada de 1 até 10.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int num, contador, result;

    printf("Informe um número\n");
    scanf("%d", &num);

    contador = 1;

    while (contador <= 10)
    {
        result = num * contador;
        printf("%d X %d = %d\n", num, contador, result);
        
        contador++;
    }

    return 0;
}




