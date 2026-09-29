#include <stdio.h>
#include <locale.h>

// Apresente todos os números pares existentes entre 1 e 100.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int num = 0;

    while (num <= 100)
    {
        if (num % 2 == 0)
        {
            printf("%d é par\n", num);
        }
        num++;
    }

    return 0;
}




