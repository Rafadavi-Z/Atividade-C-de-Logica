#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");

    int num = 1;

    for (int contador = 0; contador < 10; contador++) {
        printf("%d\n",num);
        num += 1;
    }

    return 0;
}




