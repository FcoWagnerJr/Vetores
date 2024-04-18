#include<stdio.h>
#include<locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int a[8];
	int i;
	for (i = 0; i < 8; i++){
		printf("Digite um valor:\n");
		scanf("%d\n", &a[i]);
	}
	printf("Valores armazenados em ordem inversa:\n");
	for(i = 7; i >= 0; i--){
		printf("%d\n", a[i]);
	}
	return (0);
}
