#include <stdio.h>//biblioteca de entrada/saida por perifericos padrao
#include <stdlib.h>//biblioteca padrao para uso de funções do sistema
#include <locale.h>//biblioteca para uso de caracteres especiais da lingua

/*Escreva um programa em C para o Ministério da
Saúde que o auxilie nas informações sobre a dengue
em Brasília. Esse programa deve receber os dados
sobre o número de casos suspeitos, o número de casos
confirmados, número de mortes e o total de dados, apresentando a
tela:

Casos suspeitos: 12
Casos confirmados: 15
Quantidade de mortes: 2

*/
int main()//programa principal
{
    setlocale(LC_ALL, "Portuguese");
    //declaração de variaveis
    int total, susp, mort, conf;

    //cabeçalho
    printf("Universiade do Estado de Minas Gerais - UEMG\n");
    printf("Curso de Graduação em Sistemas de Informação\n");
    printf("Discilina: Programação estruturada\n");
    printf("Aluna: Jessica de Lima Basilio\n");

    //Inicio da lógica de programação
    printf("\nPreencha com as seguintes informações sobre a dengue em Brasília: \n\n");

    printf("\tCasos suspeitos: ");
    scanf("%d", &susp);
    printf("\tCasos confirmados: ");
    scanf("%d", &conf);
    printf("\tQuantidade de mortes: ");
    scanf("%d", &mort);

    total = susp + conf + mort;
    printf("\nApresentação dos resultados\n\n");
    printf("Casos suspeitos: %d\n", susp);
    printf("Casos confirmados: %d\n", conf);
    printf("Quantidade de mortes: %d\n", mort);
    printf("Total de dados coletados: %d\n", total);

    getchar();//função que aguarda recebimento de caracter via teclado
    return 0;
}
