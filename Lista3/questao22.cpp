#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");

    int num = 10;

    for (int contador = 10; contador >= 0; contador--) 
    {
        printf("%d\n",num);
        num -= 1;
    }

    printf("Fim da contagem!");

    return 0;
}




