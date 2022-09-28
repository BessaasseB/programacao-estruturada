#include <stdio.h>

int main(void){

    float nota[30];
    int i;

    for(i=0; i<30; i++){
        printf("Informe a nota: ");
        scanf("%f", &nota[i]);
    }
    printf("\n");
    for(i=0; i<30; i++){
        printf("Nota %d: %.1f\n", i+1, nota[i]);
    }

    return 0;
}

