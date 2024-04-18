/* Crie um programa que solicita e armazena o nome completo de um usuário em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o ‘\0’ na contagem e não utilize a função strlen*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
    char nome[100];
    int contador = 0;
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);
    while (nome[contador] != '\0') {
        contador++;
    }
    printf("A quantidade de caracteres inseridos é: %d\n", contador);
    return (0);
}
