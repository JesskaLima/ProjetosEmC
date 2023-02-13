/*
Instru��es
fa�a um programa que registre dados de 10 atletas que v�o participar de uma competi��o.
Os dados a serem registrados s�o nome completo, peso, altura e modalidade que competir�.
Fa�a fun��es para: a) imprimir os dados de todos os atletas; b) imprimir os dados de um
atleta; c) calcular o peso m�dio e altura m�dia dos atletas; d) listar os atletas por
modalidade.
O trabalho deve ser desenvolvido em grupos de, no m�ximo, 3 pessoas, e ser� apresentado no dia 15/02.
*/
#include <stdio.h>
#include <string.h>

#define MAX_ATHLETES 10
#define MAX_NAME 100
#define MAX_MODALITY 50
#define TAMANHO 10

// Estrutura para armazenar os dados de um atleta
typedef struct Atleta {
  char nome[MAX_NAME]; // Nome completo do atleta
  float peso; // Peso do atleta
  float altura; // Altura do atleta
  char modalidade[MAX_MODALITY]; // Modalidade na qual o atleta competir�
} Atleta;

// Fun��o para imprimir os dados de um atleta
void imprimirAtleta(Atleta atleta) {
  printf("Nome: %s\n", atleta.nome);
  printf("Peso: %.2f\n", atleta.peso);
  printf("Altura: %.2f\n", atleta.altura);
  printf("Modalidade: %s\n", atleta.modalidade);
}

// Fun��o para imprimir os dados de todos os atletas
void imprimirAtletas(Atleta atletas[], int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++) {
    printf("\nAtleta %d:\n", i + 1);
    imprimirAtleta(atletas[i]);
  }
}

// Fun��o para obter os dados de um atleta
void obterAtleta(Atleta *atleta) {
  printf("Informe o nome do atleta: ");
  scanf("%s", atleta->nome);
  fflush(stdin);

  printf("Informe o peso do atleta: ");
  scanf("%f", &atleta->peso);
  fflush(stdin);

  printf("Informe a altura do atleta: ");
  scanf("%f", &atleta->altura);
  fflush(stdin);

  printf("Informe a modalidade do atleta: ");
  scanf("%s", atleta->modalidade);
  fflush(stdin);

  printf("\nxxxxxxxxxxx\n\n");
  fflush(stdin);
}

// Fun��o para calcular a m�dia de peso e altura dos atletas
void calcularMedias(Atleta atletas[], int tamanho, float *mediaPeso,
                    float *mediaAltura) {
  int i;
  float totalPeso = 0.0, totalAltura = 0.0;

  for (i = 0; i < tamanho; i++) {
    totalPeso += atletas[i].peso;
    totalAltura += atletas[i].altura;
  }

  *mediaPeso = totalPeso / tamanho;
  *mediaAltura = totalAltura / tamanho;
}

// Fun��o para listar os atletas por modalidade
void listarPorModalidade(Atleta atletas[], int tamanho) {
  int i, j;
  Atleta temp;
char modalidades[MAX_ATHLETES][MAX_MODALITY]; // Armazenar as modalidades �nicas
int modalidadesContador[MAX_ATHLETES]; // Contador para cada modalidade
int modalidadesTamanho = 0; // N�mero de modalidades �nicas

// Inicializando o contador de modalidades
for (i = 0; i < MAX_ATHLETES; i++) {
modalidadesContador[i] = 0;
}

// Verificando as modalidades �nicas
for (i = 0; i < tamanho; i++) {
        int existe = 0;
        for (j = 0; j < modalidadesTamanho; j++) {
                if (strcmp(atletas[i].modalidade, modalidades[j]) == 0) {
                    existe = 1;
                    modalidadesContador[j]++;
                    break;
                }
        }
        if (!existe) {
                strcpy(modalidades[modalidadesTamanho], atletas[i].modalidade);
                modalidadesContador[modalidadesTamanho]++;
                modalidadesTamanho++;
                }
}

// Ordenando as modalidades por ordem alfab�tica
for (i = 0; i < modalidadesTamanho; i++) {
        for (j = i + 1; j < modalidadesTamanho; j++) {
            if (strcmp(modalidades[i], modalidades[j]) > 0) {
                strcpy(temp.modalidade, modalidades[i]);
                strcpy(modalidades[i], modalidades[j]);
                strcpy(modalidades[j], temp.modalidade);
                int tempContador = modalidadesContador[i];
                modalidadesContador[i] = modalidadesContador[j];
                modalidadesContador[j] = tempContador;
            }
        }
}

// Imprimindo os atletas por modalidade
for (i = 0; i < modalidadesTamanho; i++) {
        printf("\nModalidade: %s\n", modalidades[i]);
        for (j = 0; j < tamanho; j++) {
                if (strcmp(atletas[j].modalidade, modalidades[i]) == 0) {
                    imprimirAtleta(atletas[j]);
                }
        }
}
}


int main() {
  // Vetor de atletas
  Atleta atletas[TAMANHO];

  // Obtendo os dados dos atletas
  for (int i = 0; i < TAMANHO; i++) {
    obterAtleta(&atletas[i]);
  }

  // Imprimindo os dados de todos os atletas
  imprimirAtletas(atletas, TAMANHO);

  // Imprimindo os dados de um atleta
  int indice;
  printf("\nInforme o �ndice do atleta (1 a %d): ", TAMANHO);
  scanf("%d", &indice);
  imprimirAtleta(atletas[indice - 1]);

  // Calculando o peso m�dio e a altura m�dia dos atletas
  float mediaPeso, mediaAltura;
  calcularMedias(atletas, TAMANHO, &mediaPeso, &mediaAltura);
  printf("\nPeso m�dio: %.2f\n", mediaPeso);
  printf("Altura m�dia: %.2f\n", mediaAltura);

  // Listando os atletas por modalidade
  listarPorModalidade(atletas, TAMANHO);

  return 0;
}

