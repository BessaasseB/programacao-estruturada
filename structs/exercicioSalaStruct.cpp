#include <stdio.h>

struct livro{
	char nome[30];
	float valor;
	char editora[30];
	int volume;
};


int main(void){
	
	struct livro livro1;
	
	printf("==CADASTRO DE LIVRO==\n");
	printf("Nome do livro: ");
	scanf("%s", &livro1.nome);
	
	printf("Valor: ");
	scanf("%f", &livro1.valor);
	
	printf("Editora: ");
	scanf("%s", &livro1.editora);
	
	printf("Volume: ");
	scanf("%d", &livro1.volume);
	
	printf("\nDados do livro cadastrado\n");
	printf("Nome:	%s\nValor:	%.2f\nEditora: %s\nVolume:	%d",livro1.nome, livro1.valor, livro1.editora, livro1.volume);
	
	return 0;
}
