#include <stdio.h>

int main(void){

    int dados[100], size, soma = 0, i;

    do{
        printf("Informe quantos valores vao ser lidos: ");
        scanf("%d", &size);
    }while(size > 100);

    printf("\n");

    for(i=0; i<size; i++){
        printf("Informe o valor: ");
        scanf("%d", &dados[i]);
    }

    printf("\n");

    for(i=0; i<size; i++){
        soma = soma + dados[i];
    }

    printf("Soma de todos os dados: %d", soma);

    printf("\n");

    return 0;
}
