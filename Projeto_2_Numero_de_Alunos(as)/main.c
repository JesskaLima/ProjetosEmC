#include <stdio.h> //biblioteca de entrada/saída por periféricos padrão
#include <stdlib.h> //biblioteca para uso de funções do sistema
#include <conio.h> //biblioteca para manipulação de caracteres
#include <locale.h> //biblioteca para uso de caracteres da língua portuguesa

/*Escreva um programa que leia o número de alunos
e de alunas de uma sala. Como saída, o programa
deve apresentar o número de alunos e em seguida
o de alunas.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //DECLARACAO DE VARIAVEIS
    int num_alunos, num_alunas;

    //CABECALHO
    printf("UEMG - Universidade do Estado de Minas Gerais\n");
    printf("Disciplina: Programação Estruturada\n");
    printf("Aluna: Jessica de Lima Basilio");

    //INICIO DA LOGICA DE PROGRAMACAO
    printf("\n\nDigite o número de alunos: ");//INICIO DE INTERAÇÃO
    scanf("%d", &num_alunos); /*receber o dado com a funcao scanf  do tipo int identificado por
    %d(faz a leitura do dado digitado) que sera armazenado no espaço reservado para num_alunos,
    &(sinal que armazena valor à variável)*/
    printf("\nDigite o número de alunas: ");//SEGUNDA IMPRESSAO
    scanf("%d", &num_alunas); /*receber o dado com a funcao scanf  do tipo int identificado por
    %d faz a leitura do dado digitado) que sera armazenado no espaço reservado para num_alunas,
    &(sinal que armazena valor à variável)*/

    printf("\n\nNúmero de alunos: %d\n", num_alunos);/*Apresentacao de resultados na tela com a função printf.
    Onde está o %d, será apresentado o valor de uma variável do tipo int, que por sua vez é identificada
    posteriormente, num_alunos, por fim \n significa que deseja-se pular uma linha.*/

    printf("\nNúmero de alunas: %d\n", num_alunas);/*Apresentacao de resultados na tela com a função printf.
    Onde está o %d, será apresentado o valor de uma variável do tipo int, que por sua vez é identificada
    posteriormente, num_alunas, por fim \n significa que deseja-se pular uma linha.*/

    getchar();//função que aguarda caracter via teclado
    return 0;
}
