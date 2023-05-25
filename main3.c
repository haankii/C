// Questao 2 a, b, c, d
int main(){
    
    float vetorAGT[7] = {8.9, 3, 7, 8.5, 9, 1.0, 7.5}, vetorPFN[7] = {9,5,9.7,5,7.9,8.5,5.5};
    int estudante[7]= {1,2,3,4,5,6,7}, estudantepfn[7] = {1,2,3,4,5,6,7}, auxestudante = 0;
    float aux = 0;

    for (int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            //AGT
            if (vetorAGT[i] > vetorAGT[j]){
                aux = estudante[i];
                estudante[i] = estudante[j];
                estudante[j] = aux;

                aux = vetorAGT[i];
                vetorAGT[i] = vetorAGT[j];
                vetorAGT[j] = aux;
            }

            //PFN
            if (vetorPFN[i] > vetorPFN[j]){

                aux = estudantepfn[i];
                estudantepfn[i] = estudantepfn[j];
                estudantepfn[j] = aux;

                aux = vetorPFN[i];
                vetorPFN[i] = vetorPFN[j];
                vetorPFN[j] = aux;
            }
        }

    }

    //LETRA A e C
    printf("\n5 Maiores de AGT e estudantes:\n");
    for(int i = 0; i < 5; i++){
        printf("| %.1f |", vetorAGT[i]);
        printf("|  %d  |\n", estudante[i]);
    }

    //LETRA B e C
    printf("\n5 Maiores de PFN e estudantes:\n");
    for(int i = 0; i < 5; i++){
        printf("| %.1f |", vetorPFN[i]);
        printf("|  %d  |\n", estudantepfn[i]);

    }
    printf("\n");

    //LETRA D
    printf("Estudantes que estao simultaneamente no C:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <5; j++){
            if(estudante[i] == estudantepfn[j]){
                printf("|  %d  |", estudante[i]);
            }
        }
    }
    printf("\n");
    return 0;
}