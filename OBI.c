#include<stdio.h>

int main(){
    int P, M, D;
    int troca;
    int D1 = 31, D3 = 0, resuDias;
    int resu, pao;
    scanf("%d %d %d", &P, &M , &D);

    if (D <= 15){
    for(int i = 0; i < D; i++){
        troca = P + (i * M);
    }} else {
        troca = P + (14 * M);
    }
    if(D == 1){
        resuDias = D1 * P;
        printf("%d\n", resuDias);
    } else if (D >= 2){
        /*30*/ D3 = D1 - (D-1);
        resuDias = D3 * troca;
        printf("%d\n", resuDias);
    }

}
    