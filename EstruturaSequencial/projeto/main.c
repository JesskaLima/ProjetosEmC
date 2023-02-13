//Exemplo de struct usando vetor e função imprime

#include <stdio.h>
#include <conio.h>
#include <string.h>

	/*Criando a struct */
	struct ficha_de_aluno {
    	 int nro;
     	char nome[50];
     	float prova1;
     	float prova2;
	};

void imprime(struct ficha_de_aluno *a);

int main(void){

/*Criando a variável aluno que será do tipo struct ficha_de_aluno */
	struct ficha_de_aluno aluno[5];

	printf("\n Cadastro de aluno");
	for (int i=0;i<5;i++){
		printf("\nNumero: ");
		scanf("%d",&aluno[i].nro);
        fflush(stdin);
		printf("\nNome: ");


	  /*usaremos o comando fgets() para ler strings, no caso o nome
	  do aluno fgets(variavel, tamanho da string, entrada)
	  como estamos lendo do teclado a entrada é stdin (entrada padrão),
	  porém em outro caso, a entrada tambem poderia ser um arquivo */

		fgets(aluno[i].nome, 50, stdin);
		printf("\nInforme a 1a. nota: ");
		scanf("%f", &aluno[i].prova1);
		printf("\nInforme a 2a. nota: ");
		scanf("%f", &aluno[i].prova2);
	}
	imprime(aluno);
	getch();
	return(0);
}

void imprime(struct ficha_de_aluno a[5]) {
	printf("\n\n ---- Lendo os dados da struct ----\n\n");
	for (int i=0;i<5;i++){
		printf("\n%d - %s\n", a[i].nro, a[i].nome);
		printf("Prova 1: %.2f\n" , a[i].prova1);
		printf("Prova 2: %.2f\n" , a[i].prova2);
	}
}
