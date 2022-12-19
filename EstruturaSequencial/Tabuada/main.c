#include <stdio.h>//biblioteca de entrada e saida dos periféricos padrão
#include <stdlib.h>//biblioteca do uso de funções do sistema
#include <locale.h>//biblioteca para imprimir caracteres especiais

//Escreva um programa em C que apresente a tabuada do número 3

int main() //programa principal
{
    setlocale(LC_ALL, "Portuguese");
    //cabeçalho
    printf("Universiade do Estado de Minas Gerais - UEMG\n");
    printf("Curso de Graduação em Sistemas de Informação\n");
    printf("Discilina: Programação estruturada\n");
    printf("Aluna: Jessica de Lima Basilio\n");

    //Inicio da lógica de programação
    printf("\nTabuada de 3:\n\n");

    //Escrevendo mensagem na tela

    printf("3 x 0 = %d\n", 3*0);
    printf("3 x 1 = %d\n", 3*1);
    printf("3 x 2 = %d\n", 3*2);
    printf("3 x 3 = %d\n", 3*3);
    printf("3 x 4 = %d\n", 3*4);
    printf("3 x 5 = %d\n", 3*5);
    printf("3 x 6 = %d\n", 3*6);
    printf("3 x 7 = %d\n", 3*7);
    printf("3 x 8 = %d\n", 3*8);
    printf("3 x 9 = %d\n", 3*9);
    printf("3 x 10 = %d\n", 3*10);

    getchar();//função que aguarda recebimento de caracter via teclado
    return 0;
}
