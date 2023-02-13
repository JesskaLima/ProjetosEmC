#include <stdio.h>
#include <string.h>

#define MAX_ATLETAS 10
#define MAX_NOME 50
#define MAX_MODALIDADE 50
//Definindo os valores máximos

typedef struct {
    char nome[MAX_NOME],sobrenome[MAX_NOME];
    float peso;
    float altura;
    char modalidade[MAX_MODALIDADE];
} Atleta;
//Monta-se a struct dos atletas, usando typedef para definíla como 'Atleta'

Atleta atletas[MAX_ATLETAS]; //define o valor de atletas, MAX_ATLETAS = 10
int atleta_cont = 0; //zera o contador dos atletas


void add_atleta() {

//Printa e registra os valores

    Atleta atleta;
    printf("Nome: ");
    scanf("%s", atleta.nome);
    printf ("Sobrenome: ");
    scanf ("%s", atleta.sobrenome);
    strcat(atleta.nome, " ");
    strcat(atleta.nome, atleta.sobrenome); //Concatena o nome com o sobrenome.
    printf("Peso (kg): ");
    scanf("%f", &atleta.peso);
    printf("Altura (m): ");
    scanf("%f", &atleta.altura);
    printf("Modalidade: ");
    scanf("%s", atleta.modalidade);

    atletas[atleta_cont++] = atleta;
}

void calcular_media_peso_e_altura() {
    float total_peso = 0;
    float total_altura = 0;

    for (int i = 0; i < atleta_cont; i++) {
        total_peso += atletas[i].peso; // o total recebe o próprio valor de total + o conteúdo de peso dos atletas
        total_altura += atletas[i].altura; //mesma coisa aqui
    }

    float media_peso = total_peso / atleta_cont; //divide total pelo número de atletas
    float media_altura = total_altura / atleta_cont; //rt

    printf("Peso medio: %.2f kg\n", media_peso);
    printf("Altura media: %.2f m\n", media_altura);
}

void lista_atleta_por_modalidade(char modalidade[MAX_MODALIDADE]) {
    printf("Atletas na modalidade %s:\n", modalidade);

    for (int i = 0; i < atleta_cont; i++) {
        if (strcmp(atletas[i].modalidade, modalidade) == 0) { //for percorre os atletas registrados,usando a função strcmp para comparar modalidades, caso dê igual
            printf("%s\n", atletas[i].nome); //ela printa os nomes dos atletas
        }
    }
}


void print_atleta(Atleta atleta) { //essa função servirá de base ao printar os resultados de cada atleta, editá-la mudará o que cada 'bloco' irá printar
    printf("Nome: %s\n", atleta.nome);
    printf("Peso: %.2f kg\n", atleta.peso);
    printf("Altura: %.2f m\n", atleta.altura);
    printf("Modalidade: %s\n", atleta.modalidade);
}

void print_atletas() { // chama a função e numera cada atleta.
    for (int i = 0; i < atleta_cont; i++) {
        printf("Atleta %d:\n", i + 1);
        print_atleta(atletas[i]);
        printf("\n");
    }
}


int main() {
	int i;
    for (i=0;i<10;i++){ //determina quantos atletas eu irei adicionar.
    	add_atleta();
	}

 //chama funções
    print_atletas();
printf("\n");

calcular_media_peso_e_altura();
printf("\n");

int atleta_indice;
printf("Insira o numero índice do atleta que você deseja ver: (1-%d): ", atleta_cont);
atleta_indice--; // por algum MOTIVO o índice começa em 0 em vez de 1, decrementado pra bater o número inserido e listar o atleta certo

print_atleta(atletas[atleta_indice]);
printf("\n");


char modalidade[MAX_MODALIDADE];
printf("Insira a modalidade que deseja listar: ");
scanf("%s", modalidade);
printf("\n");

lista_atleta_por_modalidade(modalidade); //lista o atleta da modalidade após receber a variavel 'modalidade', comparando com as da lista

return 0;
}
