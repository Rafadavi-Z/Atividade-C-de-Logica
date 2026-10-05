#include <stdio.h>
#include <locale.h>

// Leia três números e determine qual deles é o maior.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int num1, num2, num3;

    printf("Digite três números quaisquer\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d é o maior número", num1);
    }

    else if (num2 > num1 && num2 > num3)
    {
        printf("%d é o maior número", num2);
    }

    else if (num3 > num1 && num3 > num2)
    {
        printf("%d é o maior número", num3);
    }

    return 0;
}

