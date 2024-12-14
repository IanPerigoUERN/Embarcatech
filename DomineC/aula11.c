//Strings são sequência de caracteres
// É um vetor de caracteres que termina com o caractere nulo \0
// É utilizado para armazenar palavras, frases, textos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Nessa biblioteca temos funções para trabalhar com strings
// strlen() - retorna o tamanho da string, Strcpy() - copia uma string para outra, strcat() - concatena duas strings 
//strcmp() - compara duas strings
int main(void){
    char nome[20] = "Maria";
    char sobrenome[20]= "Janaína";
    char copiaNome[20];
    char nomeCompleto[40];

    printf("Tamanho do nome %ld, tamanho do sobrenome %ld\n", strlen(nome), strlen(sobrenome));

    strcpy(copiaNome, nome); // Passando os parâmetros da variável que receberá a cópia e a que será copiada
    
    printf("Cópia do nome: %s\n", copiaNome);

    strcat(copiaNome, sobrenome);

    printf("Nome completo: %s\n", copiaNome);
    if (strcmp(nome , sobrenome) == 0){
        printf("Os nomes são iguais\n");
    }else{
        printf("Os nomes são diferentes\n");
    }

    return 0;
}