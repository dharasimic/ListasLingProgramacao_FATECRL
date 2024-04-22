#include "stdio.h"
#include "windows.h"
#define ex1

/*OBS.: Todos os programa devem ser finalizados pelo usuario.*/

#ifdef ex1
/*Exercício 1: Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma variável auxiliar.*/

int main()
{
    int a, b;
    char executar_novamente;

    do
    {

        printf("digite um numero:");
        scanf(" %i", &a);

        printf("digite um numero:");
        scanf(" %i", &b);

        a = a + b;
        b = a - b;
        a = a - b;

        printf("os valores invertidos sao: %i e %i", a, b);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex2
/*Exercício 2:  Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

int main()
{
    int seg, min, horas, segundos;
    char executar_novamente;

    do
    {
        printf("Digite um valor em segundos:");
        scanf(" %i", &seg);

        horas = seg / 3600;
        min = (seg % 3600) / 60;
        segundos = (seg % 3600) % 60;

        printf("os segundos que voce digitou em horas sao: %ih %imin %iseg\n", horas, min, segundos);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex3
/*Exercício 3: Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:
             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
int main()
{
    short int sho;
    long int longi;
    int i;
    float flo;
    double dob;
    char cha;
    char executar_novamente;

    do
    {
        printf("Digite um numero inteiro curto:\n");
        scanf(" %hd", &sho);

        printf("Digite um numero inteiro longo:\n");
        scanf(" %ld", &longi);

        printf("Digite um valor inteiro qualquer:\n");
        scanf(" %i", &i);

        printf("Digite um valor real qualquer:\n");
        scanf(" %f", &flo);

        printf("Digite um valor qualquer:\n");
        scanf(" %lf", &dob);

        printf("Digite um caracter:\n");
        scanf(" %c", &cha);

        printf("        10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
        printf("    %-6hd              %-11ld         %-10i\n", sho, longi, i);
        printf("              %-12e       %-15e     %-1c\n", flo, dob, cha);

        system("pause");

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex4
/*Exercício 4: Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/

int main()
{
    int num, cent, dez, uni, inverso;
    char executar_novamente;

    do
    {
        do
        {
            printf("digite um numero qualquer de tres digitos:");
            scanf(" %i", &num);

            if (num < 100 || num > 999)
            {
                printf("Tente novamente.\n");
            }
        } while (num < 100 || num > 999);

        cent = num / 100;
        dez = (num / 10) % 10;
        uni = num % 10;

        inverso = (uni * 100) + (dez * 10) + cent;

        printf("o numero digitado ao contrario sera: %i\n", inverso);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex5
/*Exercício 5: Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
int main()
{
    int multiplo = 0, valor, limite;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite um numero inteiro, sendo maior que zero:\n");
            scanf("%i", &valor);
        } while (valor <= 0);

        do
        {
            printf("Digite o valor para o limite minimo, sendo maior que zero:\n");
            scanf("%i", &limite);
        } while (limite <= 0);

        do
        {
            multiplo = multiplo + valor;
        } while (multiplo <= limite);

        printf("O menor multiplo e %i\n", multiplo);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif
