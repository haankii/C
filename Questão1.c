#include<stdio.h>

//Questao 1

int main(){
    //AGT
    float notasAlunos1=0,notasAlunos=0, media=0,porcentagem=0, exame=0;
    printf("Media de Agt: ");
        for(int i = 0; i<15;i++){
            scanf("%f", &notasAlunos);
            notasAlunos1 += notasAlunos;
            if (notasAlunos < 7.0){
                exame++;
            }
        }
    media = notasAlunos1 / 15;
    porcentagem = notasAlunos1 / exame;
    printf("AGT---------------------------\n");
    printf("porcetagem de medias < 7 em : %.1f\n", porcentagem);
    printf("Media geral desse grupo: %.1f\n", media);
    printf("Total estudantes em exames: %.1f\n", exame);
    return 0;
}
