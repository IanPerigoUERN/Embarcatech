//Controle de fluxo simples com for

#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas=5,i,j,k;
    for (int i=0; i<linhas; i++){
       for(int j=0; j<linhas- i -1; j++){
            printf(" ");
       }
       for (int k =0; k< (i*2)+1; k++){
           printf("#");
       }
       printf("\n");
    }
    return 0;
}