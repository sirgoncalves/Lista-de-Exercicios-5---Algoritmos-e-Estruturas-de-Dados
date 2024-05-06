/*6. Crie um procedimento que recebe um vetor de caracteres. Esse procedimento deverá contar o
número de palavras que são repetidas no texto e imprima a contagem de cada palavra repetida
juntamente com sua frequência. Implemente o mais que solicita ao usuário o texto e chame o
procedimento passando o vetor de caracteres.*/

#include <stdio.h>
#include <string.h>

void procedimento1(char vetor[]){
    int tam = strlen(vetor);
    int i, j, cont1=0;

    do
    {
        for(i=0;i<tam;i++){
            for(j=i;j<tam;j++){
                if(vetor[j]==vetor[i]){
                    cont1++;
                    printf("O caractere %c ocorreu %d vezes\n", vetor[j], cont1);
                }
            }
        }
    } while (vetor[i] != '\0');
    
}

int main(){
    char vetor[300];
    printf("Escreva uma frase: \n");
    scanf("%s", &vetor);

    procedimento1(vetor);
}