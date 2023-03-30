#include <stdio.h>

int main(){
    int a= 0, b = 0, c = 0;
    printf("Digite os seus tres numeros:");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c){
        printf("O numero maior e: %d", a);
    } else if (b>c){
        printf("O numero maior e: %d", b);
    } else {
        printf("O numero maior e: %d", c);
    }


    

}