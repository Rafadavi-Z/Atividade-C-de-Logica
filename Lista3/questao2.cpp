#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");

    int n1, n2;

    printf("Digite 2 números\n");
    scanf("%d %d", &n1, &n2);

    n1 += n2;

    printf("A soma dos dois números é %d", n1);

    return 0;
}

