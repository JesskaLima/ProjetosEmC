#include <stdio.h>//biblioteca de entrada/sa�da por perif�ricos padr�o
#include <stdlib.h>//biblioteca para uso de fun��es do sistema
#include <locale.h>//biblioteca que imprime caracter especial e acentos

/*Escreva um programa que leia o n�mero de
chuteiras de uma loja de esporte. Os valores dever�o
ser inseridos por meio do teclado. Como sa�da, o
programa deve apresentar o n�mero de chuteiras e
suas marcas. Utilizando o car�ter especial \t dentro do printf, desejamos que voc�
obtenha uma sa�da parecida com esta:

         Quantidade de chuteiras em estoque

    Marca (A)        Marca (B)          Marca (C)

        10               25                 45
*/

int main()//programa principal
{
    setlocale(LC_ALL, "Portuguese");
    //declara��o de vari�veis
    int marcaA, marcaB, marcaC;//vari�veis do tipo inteiro para marca A, B, C
    //CABE�ALHO
    printf("Universiade do Estado de Minas Gerais - UEMG\n");
    printf("Curso de Gradua��o em Sistemas de Informa��o\n");
    printf("Discilina: Programa��o estruturada\n");
    printf("Aluna: Jessica de Lima Basilio\n\n\n");

    /*Os seguintes comandos printf s�o para imprimir a mensagem que est� dentro das aspas ("")
    para que haja comunica��o entre o usu�rio do programa e o computador. As fun��es scanf servem
    para receber os n�meros desejados, o %d indica que a vari�vel ao qual ser� desstinada o valor recebido
    � do tipo inteiro. O & indica que o valor, digitado no teclado, ser� armazenado na vari�vel declarada
    que est� logo em seguida deste &.*/

    printf("Digite a quantidade de chuteiras da marca A: ");
    scanf("%d", &marcaA);

    printf("\nDigite a quantidade de chuteiras da marca B: ");
    scanf("%d", &marcaB);

    printf("\nDigite a quantidade de chuteiras da marca C: ");
    scanf("%d", &marcaC);

    //Apresenta��o dos resultados
    printf("\n\t\tQuantidade de Chuteiras em Estoque\n");
    printf("\n\t\tMarca(A) \t Marca(B) \t Marca(C)\n");
    printf("\n\t\t  %d     \t   %d     \t   %d\n\n\n", marcaA, marcaB, marcaC);

    //Outra op��o de apresenta��o de resultados
    printf("Existem %d chuteiras da marca A.\n", marcaA);
    printf("Existem %d chuteiras da marca B.\n", marcaB);
    printf("Existem %d chuteiras da marca C.\n", marcaC);

    //Outra op��o de apresenta��o de resultados
    printf("\n\nExistem %d chuteiras da marca A, %d da marca B e %d da marca C.\n\n\n", marcaA, marcaB, marcaC);

    getchar();//fun��o que agruada recebimento de caracter via teclado
    return 0;
}
