#include <stdio.h> //biblioteca de entrada/sa�da por perif�ricos padr�o
#include <stdlib.h> //biblioteca para uso de fun��es do sistema
#include <conio.h> //biblioteca para manipula��o de caracteres
#include <locale.h> //biblioteca para uso de caracteres da l�ngua portuguesa

/*Escreva um programa que leia o n�mero de alunos
e de alunas de uma sala. Como sa�da, o programa
deve apresentar o n�mero de alunos e em seguida
o de alunas.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //DECLARACAO DE VARIAVEIS
    int num_alunos, num_alunas;

    //CABECALHO
    printf("UEMG - Universidade do Estado de Minas Gerais\n");
    printf("Disciplina: Programa��o Estruturada\n");
    printf("Aluna: Jessica de Lima Basilio");

    //INICIO DA LOGICA DE PROGRAMACAO
    printf("\n\nDigite o n�mero de alunos: ");//INICIO DE INTERA��O
    scanf("%d", &num_alunos); /*receber o dado com a funcao scanf  do tipo int identificado por
    %d(faz a leitura do dado digitado) que sera armazenado no espa�o reservado para num_alunos,
    &(sinal que armazena valor � vari�vel)*/
    printf("\nDigite o n�mero de alunas: ");//SEGUNDA IMPRESSAO
    scanf("%d", &num_alunas); /*receber o dado com a funcao scanf  do tipo int identificado por
    %d faz a leitura do dado digitado) que sera armazenado no espa�o reservado para num_alunas,
    &(sinal que armazena valor � vari�vel)*/

    printf("\n\nN�mero de alunos: %d\n", num_alunos);/*Apresentacao de resultados na tela com a fun��o printf.
    Onde est� o %d, ser� apresentado o valor de uma vari�vel do tipo int, que por sua vez � identificada
    posteriormente, num_alunos, por fim \n significa que deseja-se pular uma linha.*/

    printf("\nN�mero de alunas: %d\n", num_alunas);/*Apresentacao de resultados na tela com a fun��o printf.
    Onde est� o %d, ser� apresentado o valor de uma vari�vel do tipo int, que por sua vez � identificada
    posteriormente, num_alunas, por fim \n significa que deseja-se pular uma linha.*/

    getchar();//fun��o que aguarda caracter via teclado
    return 0;
}
