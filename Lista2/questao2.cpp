#include <stdio.h>
#include <locale.h>

// Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. 
// Caso o sexo seja F e o estado civil seja CASADA, solicite também o tempo de casamento, em anos. 

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    char nome[20]; 
    int sexo, estadoCivil, ano;

    printf("Digite seu nome\n");
    scanf("%s", nome);

    printf("Informe o seu o sexo\n");
    printf("0 = feminino\n1 = masculino\nQualquer outro valor para não definir\n");
    scanf("%d", &sexo);

    printf("Informe o seu estado civil\n");
    printf("0 = Casado\n1 = Solteiro\n");
    scanf("%d", &estadoCivil);

    printf ("Seu nome é %s\n", nome);
    
    if (estadoCivil != 0)
    {
        printf("Seu estado civil é de solteiro\n");
    }
    else
    {
        printf("Seu estado civil é de casado(a)\n");
    }
    

    switch (sexo)
    {
    case 0:

        printf("Seu sexo é feminino\n");

        if (estadoCivil == 0)
        {
            printf("Informe há quantos anos você está casada\n");
            scanf("%d", &ano);
            printf("Seu tempo de casada é de %d anos\n", ano);
        }
        
        break;
    
    case 1:
        printf("Seu sexo é masculino\n");
        break;
    
    default:
        printf("Seu sexo é indefinido\n");
        break;
    }

    return 0;

}

