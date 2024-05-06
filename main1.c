/*1. Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo*/

#include <stdio.h>
int main(){
    float vetor1[5], vetor2[5];
    int i;

    for(i=0; i<5; i++){;
        printf("Adicione um elemento no vetor:\n");
        scanf("%f", &vetor1[i]);

        vetor2[i]=vetor1[i]*2;
    }

    printf("Os elementos do arranjo final sao:\n");
    for(i=0; i<5; i++){;
        printf("%.2f\n", vetor2[i]);
    }

    return 0;
}