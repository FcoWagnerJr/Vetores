/*Fa�a um programa que solicita e armazena cinco n�meros inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
    int numeros[5]; 
    int soma = 0; 
    int i; 
    printf("Digite cinco n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 5; i++) {
        soma += numeros[i];
    }
    printf("A soma dos n�meros �: %d\n", soma);
    return 0;
}
