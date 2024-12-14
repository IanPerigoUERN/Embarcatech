// Struct são estruturas de dados que podem conter membros com diferentes tipos de dados.

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
    };
    
int main(){
    struct Pessoa pessoa1; //Declarando uma variável chamada pessoa1 do tipo pessoa

    strcpy(pessoa1.nome, "Ian");
    pessoa1.idade = 34;
    pessoa1.altura = 1.83;

    printf("Nome : %s\n idade: %d\n Altura: %.2f\n", pessoa1.nome, pessoa1.idade, pessoa1.altura);
    return 0;
}