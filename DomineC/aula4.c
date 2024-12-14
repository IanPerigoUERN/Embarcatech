// Estruturas de controle de fluxo condicional
// if, else, else if

#include<stdio.h>

int main (){
    int idade = 26;

    if (idade <18){
        printf("Menor de idade \n");
    } 
    else if( idade >=18 && idade < 25){
        printf("Você é um jovem adulto \n");
    }
    else {
        printf("Adulto \n");

    
    }
    return 0;
}