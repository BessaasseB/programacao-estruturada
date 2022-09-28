#include <stdio.h>

int main(void){

    int numero[80], i, j, cont=0, size;

    do{
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &size);
    }while(size > 80);

    printf("\n");

    for(i=0; i<size; i++){
        printf("Informe o numero: ");
        scanf("%d", &numero[i]);
    }

    printf("\n");

    printf("Informe um numero para buscar: ");
    scanf("%d", &j);

    printf("\n");

    for(i=0; i<size; i++){
        if(numero[i] == j){
            cont++;
        }

    }

    printf("Apareceram %d numeros iguais ao informado", cont);
    return 0;
}
