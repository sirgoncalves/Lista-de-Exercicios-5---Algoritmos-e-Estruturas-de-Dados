/*7. Implemente a função abaixo, que receba como parâmetro uma string e converte,
individualmente, cada caractere para maiúsculo. A função deverá retornar a string convertida
para maiúsculo. A string a ser retornada deverá ser criada utilizando o comando malloc.
char* capitalizeString(char *vetor, int tamanho);

Ilustre o funcionamento da função criando um main que solicita ao usuário o texto e chama a
função. O main deverá imprimir o resultado da função*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* ConverteString(char vetor[], int tam){
    char *novaString = malloc(tam + 1); // +1 para o caractere nulo
    if(novaString == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }

    for(int i = 0; i < tam; i++){
        novaString[i] = toupper(vetor[i]);
    }
    //novaString[tam] = '\0'; // Adiciona o caractere nulo ao final da string

    return novaString;
}
int main(){
    char string[50];
    int tam = strlen(string);
    printf("Insira uma string:");
    scanf("%s", &string);
    fflush(stdin);

    char *result = ConverteString(string, tam);
    if(result != NULL) {
        printf("A string maiúscula eh: %s\n", result);
        free(result); // Libera a memória alocada
    }

    }


/* //toupper transforma em maiuscula
    letra = toupper(letra);
    printf("Maiuscula: %c \n\n",letra);*/
