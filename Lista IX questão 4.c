/*Escreva um programa que solicita e armazena dez n�meros inteiros em um vetor e,
ao final, informa o maior valor encontrado no vetor.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
    int numeros[10];
    int maior; 
    int i; 
    printf("Digite dez n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    maior = numeros[0];
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("O maior valor encontrado no vetor �: %d\n", maior);
    return 0;
}

