#include <stdio.h>
#include <math.h>
#include <string.h>

int testatando_for()
{

    // TESTANDO O FOR
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("GANHOU 10 vezes\n");
    }

    return (0);
}

// Este Programa passa por toda a String e diz quantas letras repetiu
int nome()
{
    char nome[100];
    int contador;
    fgets(nome, 99, stdin);
    printf("Sua Frase digitada foi: %s", nome);
    contador = 0;
    for (int i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] == 'c')
        {
            contador = contador + 1;
        }
    }
    printf("numero de caractere c %d", contador);
    return 0;
}

// este programa conta de 100 a 0

int zero_cem()
{
    int x = 100;
    for (int i = 0; i !=100; i++){
        printf("%d ", x);
        x = x-1;
    }
    return 0;
}

// este programa muda as letras

int main()
{
    char nome[10];
    int conta = 0;
    fgets(nome, 10, stdin);

    for (int i = 0; nome[i] != '\0'; i++){

        if (nome[i] == 'a'){
            nome[i] = 'b';
                conta = conta + 1;
        }
    }
    printf("O numero de vezes que se alterou foi %i e a palavra ficou %s", conta, nome);
}