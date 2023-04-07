#include <stdio.h> 

 int main(){

    //Este codigo ler duas string e imprime a segunda letra de cada string

    char Letra1[10], Letra2[10];
    printf("Escreva a primeira Strings:\n");
    fgets(Letra1, 10, stdin);
    printf("Escreva a segunda Strings:\n");
    fgets(Letra2, 10, stdin);
    printf("A sua suas palavras são: %s,%s", Letra1,Letra2);
    printf("A segunda letra de %s e: %c\n", Letra1,Letra1[1]);
    printf("A segunda letra de %s e: %c\n", Letra2,Letra2[1]);
    

    //Este codigo escreve o ASCII do codigo
    char letra;
    printf("Escreva uma letra:\n");
    scanf("%c", &letra);
    printf("Este e o resultador ASCII do caractere: %d \n", letra);
 }