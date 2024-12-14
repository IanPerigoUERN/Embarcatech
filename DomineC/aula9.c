// Vetores e matrizes
// Vetores são conjuntos de dados do mesmo tipo armazenados em sequência

#include <stdio.h>
#include <stdlib.h>

int main (){
    int vetor1[5] = {1,2,3,4};

    char vetor2[5] = {'a','b','c','d'};

    printf("1º elemento do vetor 1: %d\n 1º elemento do vetor 2: ¨%c\n", vetor1[0], vetor2[0]); 
    
    // Para exibir o vetor inteiro é necessário uma laço de repetição
    int i =0;
    for (int i =0; i<4; i++){
        printf("Elementos do vetor 1: %d\n", vetor1[i]);
    }

    // Matrizes são vetores multidimensionais
    // Possuem linhas e colunas

    int matriz[2][3] = {{1,2,3},{4,5,6}};//Elementos mais internos são as colunas e os externos são as linhas
    int j=0, k=0;
    for (j=0; j<2; j++){
        
        for (k=0; k<3; k++){ // Loop imprimindo a matriz utiliza k<3 pois são 3 colunas
            printf("Elemento da matriz: %d\n", matriz[j][k]);
        }
        printf("\n");
    }
    
    return 0;
}