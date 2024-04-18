/*. Elabore um programa que solicita e armazena cinco n�meros reais em um vetor,
denominado de a, sendo que esses n�meros ser�o utilizados para preencher outro
vetor. Sendo assim, declare outro vetor, denominando de b, do mesmo tipo e tamanho
de a e, em seguida, o preencha de acordo com as seguintes condi��es:
� Se o �ndice do vetor a for zero, insira em b o respectivo valor de a;
� Se o �ndice de a for par, insira em b o respectivo valor de a multiplicado por 5;
� Se o �ndice do vetor a for �mpar, insira em b o respectivo valor a somado com 5;
Ao final, o programa deve exibir o conte�do dos vetores a e b.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
    float a[5]; 
    float b[5]; 
    int i; 
    printf("Digite cinco n�meros reais:\n");
    for (i = 0; i < 5; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%f", &a[i]);
    }
    for (i = 0; i < 5; i++) {
        if (i == 0) {
            b[i] = a[i];
        } else if (i % 2 == 0) {
            b[i] = a[i] * 5;
        } else {
            b[i] = a[i] + 5;
        }
    }
    printf("\nConte�do do vetor a:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n\nConte�do do vetor b:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");
    return (0);
}
