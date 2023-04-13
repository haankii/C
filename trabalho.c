#include <stdio.h>
#include <string.h>

int main()
{

    // Variaveis
    float nota1, nota2, media;
    int matricula;
    char nome[50], MatriculaTCC, nome_orientador[20], oriente, titulo_trabalho[20];
    char nomeAvaliador1[20], data_defesa[20], nomeAvaliador2[20];

    // Inicio

    printf("Inicio do semestre:\n");
    printf("\n");
    printf("Coloque o nome do aluno: ");
    fgets(nome, 50, stdin);
    strtok(nome, "\n");
    printf("\n");
    printf("Coloque a matricula: ");
    scanf("%d", &matricula);
    printf("\n");
    getchar(); // consome a quebra de linha
    printf("Caso queira fazer o TCC, digite 'S' para sim e 'N para nao':\n");
    scanf("%c", &MatriculaTCC);
    printf("\n");

    if (MatriculaTCC == 'S')
    {
        printf("Tem orientador?\n");
        getchar();
        scanf("%c", &oriente);
        printf("\n");
        if (oriente == 'S')
        {
            printf("__________________________________________\n\n");
            printf("Digite o Nome do orientador: ");
            getchar();
            fgets(nome_orientador, 20, stdin);
            printf("\n");

            if (nome_orientador != "")
            {

                // primeira parte

                printf("Digite o titulo do trabalho: ");
                fgets(titulo_trabalho, 20, stdin);
                strtok(titulo_trabalho, "\n");
                printf("\n");
                printf("Digite a data da defesa: ");
                fgets(data_defesa, 20, stdin);
                printf("\n");
                printf("Sua de defesa: %s, %s, %s\n", nome, titulo_trabalho, data_defesa);
                printf("__________________________________________\n\n");
                // segunda parte

                printf("Digite o nome do primeiro avaliador: ");
                fgets(nomeAvaliador1, 20, stdin);
                printf("\n");
                printf("Digite a nota: ");
                scanf("%f", &nota1);
                printf("\n");

                getchar();
                printf("Digite o nome do segundo avaliador: ");
                fgets(nomeAvaliador2, 20, stdin);
                printf("\n");
                printf("Digite a nota: ");
                scanf("%f", &nota2);
                printf("\n");
                media = (nota1 + nota2) / 2;
                printf("__________________________________________\n\n");
                // Terceira
                if (media >= 7)
                {
                    printf("Aprovado\n");
                }
                else
                {
                    printf("Faça correções\n");
                }
            }
        }
        else
        {
            printf("Procure orientador urgente");
        }
    }
}