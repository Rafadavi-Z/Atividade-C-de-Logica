#include <stdio.h>
#include <locale.h>

// Crie um algoritmo que solicite uma senha. A senha correta é: 1234
// Enquanto a senha estiver incorreta, apresente: "Senha incorreta. Tente novamente."
// Quando estiver correta: "Acesso autorizado."


int main(){

    setlocale(LC_ALL, ".UTF-8");

    int N, i = 1;

    printf("Informe a senha\n");

    for (i; i <= 10; i--)
    {
        scanf("%d", &N);
        if(N == 1234)
        {
            printf("Acesso autorizado.\n");
            break;
        }
        else 
        {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }

    return 0;
}




