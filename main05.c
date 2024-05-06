/*5. Crie uma função que recebe um vetor de caracter por parâmetro que representa um endereço
de e-mail para validar se o e-mail é válido. A função deverá retornar a posição do símbolo ‘@’. Se
o símbolo não estiver presente, então a função deverá retornar –1.

Implemente um main que peça ao usuário que insira um endereço de e-mail e depois chame a
função passando esse e-mail por parâmetro. Imprima se o endereço de e-mail é válido ou não*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int funcao(char vetor[]){
    int tam = strlen(vetor);
    for(int i=0;i<tam;i++){
        if(vetor[i]=='@'){
            printf("Endereco valido!\n");
            return i;
        }
    }
    printf("Endereco invalido!\n");
    return -1;
    
}


int main(){
    int result=0;
    char vetor[50];

    printf("Insira seu email:\n");
    scanf("%s", &vetor);

    result = funcao(vetor);
    printf("%d",result);
    return 0;

}