/*4. Peça ao usuário que crie uma senha. Utilize um vetor para armazenar a senha. Valide se a senha
atende aos critérios de segurança, como ter pelo menos 8 caracteres, conter pelo menos uma
letra maiúscula, uma letra minúscula, um número e um caractere especial. Imprima se a senha é
válida ou não*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

 void CriarSenha(char vetorSenha[], int length){
    printf("Insira sua senha: \n");
    for(int i=0;i<length; i++){
        scanf(" %c", &vetorSenha[i]);
    }
 }

bool validarSenha(char vetorSenha[], int length){
     bool temMinuscula=false, temMaiuscula=false, temDigito=false;
    if(length==8){
        for(int i=0; i<length; i++){
            if(islower(vetorSenha[i])){
                temMinuscula = true;
            }else if(isupper(vetorSenha[i])){
                temMaiuscula = true;
            }else if(isdigit(vetorSenha[i])){
                temDigito = true;
            }
        }

    if(temMinuscula==true && temMaiuscula==true && temDigito==true && length==8){
            printf("Senha valida!\n");
            return true;
    }else{
        printf("Senha invalida!\n");
            return false;
        }

    } 

}

int main(){
    char vetor[9];
    int tam=8, result = 0;

    CriarSenha(vetor, tam);
    result = validarSenha(vetor, tam);
    printf("%d", result);

    return 0;

}


/*islower
Verifica se o caracter é minúsculo*/

/*isupper
Verifica se o caracter é uma letra maiúscula*/

/*isdigit
Verificar se o caracter é um digito decimal*/