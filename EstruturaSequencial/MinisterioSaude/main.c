#include <stdio.h>//biblioteca de entrada/saida por perifericos padrao
#include <stdlib.h>//biblioteca padrao para uso de fun��es do sistema
#include <locale.h>//biblioteca para uso de caracteres especiais da lingua

/*Escreva um programa em C para o Minist�rio da
Sa�de que o auxilie nas informa��es sobre a dengue
em Bras�lia. Esse programa deve receber os dados
sobre o n�mero de casos suspeitos, o n�mero de casos
confirmados, n�mero de mortes e o total de dados, apresentando a
tela:

Casos suspeitos: 12
Casos confirmados: 15
Quantidade de mortes: 2

*/
int main()//programa principal
{
    setlocale(LC_ALL, "Portuguese");
    //declara��o de variaveis
    int total, susp, mort, conf;

    //cabe�alho
    printf("Universiade do Estado de Minas Gerais - UEMG\n");
    printf("Curso de Gradua��o em Sistemas de Informa��o\n");
    printf("Discilina: Programa��o estruturada\n");
    printf("Aluna: Jessica de Lima Basilio\n");

    //Inicio da l�gica de programa��o
    printf("\nPreencha com as seguintes informa��es sobre a dengue em Bras�lia: \n\n");

    printf("\tCasos suspeitos: ");
    scanf("%d", &susp);
    printf("\tCasos confirmados: ");
    scanf("%d", &conf);
    printf("\tQuantidade de mortes: ");
    scanf("%d", &mort);

    total = susp + conf + mort;
    printf("\nApresenta��o dos resultados\n\n");
    printf("Casos suspeitos: %d\n", susp);
    printf("Casos confirmados: %d\n", conf);
    printf("Quantidade de mortes: %d\n", mort);
    printf("Total de dados coletados: %d\n", total);

    getchar();//fun��o que aguarda recebimento de caracter via teclado
    return 0;
}
