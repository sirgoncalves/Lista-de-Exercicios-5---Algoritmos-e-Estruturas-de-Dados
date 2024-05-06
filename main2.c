/*2. Implemente um procedimento preencheNotas que receba e preencha um vetor com as notas
de uma turma de 10 alunos. Faça um procedimento calculaMedia que receba um vetor
preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima
da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa
(main) que declare e preencha as devidas o vetor com valores digitados e acione os
procedimentos.

void preencheNotas(int tam, int vetor[]);
void calculaMedia(int tam, int vetor[]);*/

#include <stdio.h>

void procedimento1PreencheNotas(float vetor[], int tam){
    printf("Insira 10 notas\n");
    for(int i=0; i<tam;i++){
        printf("Insira a %d nota: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void procedimento2CalculaMedia(float vetor[], int tam){
    float soma = 0;
    int cont1 = 0, cont2 = 0;
    for(int i = 0; i<tam;i++){
        soma+=vetor[i];
    }

    float media = soma/tam;

    for(int i = 0; i<tam;i++){
        if(vetor[i]>=media){
            cont1++;
        }
        else if(vetor[i]<media){
            cont2++;
        }
    }

    printf("A media da turma eh: %.2f\n", media);
    printf("Quantidade acima da media: %d\n", cont1);
    printf("Quantidade abaixo da media: %d\n", cont2);
}

int main(){
    int tam = 10;
    float notas[tam];

    procedimento1PreencheNotas(notas, tam);
    procedimento2CalculaMedia(notas, tam);

    return 0;
}