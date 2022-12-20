#include <stdio.h>//biblioteca de entrada/saída por periféricos padrão
#include <stdlib.h>//biblioteca para uso de funções do sistema
#include <locale.h>//biblioteca que imprime caracter especial e acentos

/*Escreva um programa que leia o número de
chuteiras de uma loja de esporte. Os valores deverão
ser inseridos por meio do teclado. Como saída, o
programa deve apresentar o número de chuteiras e
suas marcas. Utilizando o caráter especial \t dentro do printf, desejamos que você
obtenha uma saída parecida com esta:

         Quantidade de chuteiras em estoque

    Marca (A)        Marca (B)          Marca (C)

        10               25                 45
*/

int main()//programa principal
{
    setlocale(LC_ALL, "Portuguese");
    //declaração de variáveis
    int marcaA, marcaB, marcaC;//variáveis do tipo inteiro para marca A, B, C
    //CABEÇALHO
    printf("Universiade do Estado de Minas Gerais - UEMG\n");
    printf("Curso de Graduação em Sistemas de Informação\n");
    printf("Discilina: Programação estruturada\n");
    printf("Aluna: Jessica de Lima Basilio\n\n\n");

    /*Os seguintes comandos printf são para imprimir a mensagem que está dentro das aspas ("")
    para que haja comunicação entre o usuário do programa e o computador. As funções scanf servem
    para receber os números desejados, o %d indica que a variável ao qual será desstinada o valor recebido
    é do tipo inteiro. O & indica que o valor, digitado no teclado, será armazenado na variável declarada
    que está logo em seguida deste &.*/

    printf("Digite a quantidade de chuteiras da marca A: ");
    scanf("%d", &marcaA);

    printf("\nDigite a quantidade de chuteiras da marca B: ");
    scanf("%d", &marcaB);

    printf("\nDigite a quantidade de chuteiras da marca C: ");
    scanf("%d", &marcaC);

    //Apresentação dos resultados
    printf("\n\t\tQuantidade de Chuteiras em Estoque\n");
    printf("\n\t\tMarca(A) \t Marca(B) \t Marca(C)\n");
    printf("\n\t\t  %d     \t   %d     \t   %d\n\n\n", marcaA, marcaB, marcaC);

    //Outra opção de apresentação de resultados
    printf("Existem %d chuteiras da marca A.\n", marcaA);
    printf("Existem %d chuteiras da marca B.\n", marcaB);
    printf("Existem %d chuteiras da marca C.\n", marcaC);

    //Outra opção de apresentação de resultados
    printf("\n\nExistem %d chuteiras da marca A, %d da marca B e %d da marca C.\n\n\n", marcaA, marcaB, marcaC);

    getchar();//função que agruada recebimento de caracter via teclado
    return 0;
}
