/* Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:
a) sexo (masculino, feminino);
b) cor dos olhos (azuis, verdes, castanhos, pretos);
c) cor dos cabelos (loiros, castanhos, pretos);
d) idade em anos.
Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1. Fazer um algoritmo que determine e escreva:
a) a maior idade dos habitantes pesquisados;
b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos loiros. */

#include <stdio.h>

int main(void){
	
	int idade, maiorIdade = 0;
	char genero[10], olho[10], cabelo[10];
	
	
	do{
		
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		
		if(idade>maiorIdade){
			maiorIdade = idade;
		}
		
		if(idade>=0){

			fflush(stdin);
			printf("Genero: ");
			gets(genero);
			printf("Cor dos olhos: ");
			gets(olho);
			printf("Cor do cabelo: ");
			gets(cabelo);
			
		}
		else{
			printf("Maior idade: %d", maiorIdade);
		}
			
		
		
	}while(idade >= 0);
	
	
	
	
}
