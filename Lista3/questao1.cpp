#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");

    char nome[16];

    printf("Digite seu nome\n");
    scanf("%s",nome);

    printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação", nome);

    return 0;
}

