#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int funcao(char vetor[]){
    int tam = strlen(vetor);
    for(int i=0;i<tam;i++){
        if(vetor[i]=='@'){
            return i;
        }
    }
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