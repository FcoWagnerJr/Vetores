/*Faça um programa que solicita e armazena em um vetor, denominado de v1, cinco
números inteiros maiores ou iguais a zero. Construa outro vetor, denominado de v2,
do mesmo tipo e tamanho de v1, onde cada valor de v2 deve ser definido com o
resultado do fatorial de cada elemento correspondente em v1.
Ao final, o programa deve exibir o conteúdo dos vetores v1 e v2.*/
int main(){
    int v1[5]; 
    int v2[5]; 
    printf("Digite cinco numeros inteiros maiores ou iguais a zero:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &v1[i]);
        while (v1[i] < 0){
            printf("Digite um numero maior ou igual a zero: ");
            scanf("%d", &v1[i]);
        }
    }
    for (int i = 0; i < 5; i++){
        v2[i] = fatorial(v1[i]);
    }
    printf("\nConteudo dos vetores:\n");
    printf("v1: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", v1[i]);
    }
    printf("\n");
    printf("v2: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", v2[i]);
    }
    printf("\n");
    return 0;
}
