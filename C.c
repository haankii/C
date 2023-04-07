#include <stdio.h> 
 //Criei uma função que eu poderia usar em outras coisas
int multi(int b, int y, int u){
    int pao;
    pao = b*y*u;
    printf("O resultado e %d",pao);
    return 0;
}

//Função principal
 int main(){
    int x, y, z;
    printf("Escreva 3 numeros para multiplicar:\n");
    scanf("%d %d %d", &x, &y, &z );
    multi(x, y, z);
    return 0;
 }
