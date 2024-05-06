/*3. Implemente um procedimento preencheValores que preencha 2 vetores X e Y, com 10
elementos cada com valores aleatórios entre 10 e 20. Implemente um procedimento que receba
os dois vetores previamente preenchidos e gere um novo vetor Z com os elementos desses 2
vetores intercalados de tal forma que nas posições ímpares do novo vetor estejam os elementos
do primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro.
Faça um procedimento que receba e exiba o conteúdo de um vetor. Implemente um programa
que faça as devidas declarações e acione os módulos para exemplificar o seu uso.

void preencheValores(int x[], int y[], int length);
void intercala(int x[], int y[], int length, int z[]);*/

#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()

void preencheValores(int x[], int y[], int length){
    srand(time(NULL));
    for (int i=0; i < length; i++){
    // gerando valores aleatórios na faixa de 10 a 20
    x[i] = 10 + rand() % 11;
    y[i] = 10 + rand() % 11;

  }

  printf("Vetor x: \n");
  for(int i = 0; i<length; i++){
    printf("%d\n", x[i]);
  }

  printf("Vetor y: \n");
  for(int i = 0; i<length; i++){
    printf("%d\n", y[i]);
  }
  printf("\n");

};


void intercala(int x[], int y[], int length, int z[]){
    for(int i = 0; i<length; i++){
        z[2 * i] = x[i];       // Elementos de X em posições ímpares de Z (índices 0, 2, 4, ...)
        z[2 * i + 1] = y[i];    // Elementos de Y em posições pares de Z (índices 1, 3, 5, ...)
    }
};

void exibeResultado(int length, int z[]){
    printf("Resultado do novo vetor formado:\n");
    for(int i = 0; i<2*length; i++){
        printf("%d\n", z[i]);
    }
    printf("\n");

}

int main(){
    int length = 10;
    int a[length], b[length], z[length];

    preencheValores(a, b, length);
    intercala(a, b, length, z);
    exibeResultado(length, z);

    return 0;
}