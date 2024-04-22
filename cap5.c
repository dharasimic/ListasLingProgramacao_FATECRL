#include "stdio.h"
#include "windows.h"
#define ex1
/*OBS.: Todos os programa devem ser finalizados pelo usuario.*/

#ifdef ex1
/*1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os 5 vetores como variaveis
    globais)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/

//Variaveis Globais:
char nome1[8], nome2[8], nome3[8], nome4[8], nome5[8];

int main()
{
    char executar_novamente;
    do
    {
        printf("Digite o primeiro nome:\n");
        gets(nome1);
        printf("Digite o segundo nome:\n");
        gets(nome2);
        printf("Digite o terceiro nome:\n");
        gets(nome3);
        printf("Digite o quarto nome:\n");
        gets(nome4);
        printf("Digite o quinto nome:\n");
        gets(nome5);

        printf("\n      10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("  %-8s                                %-8s\n", nome1, nome5);
        printf("            %-8s            %-8s\n", nome2, nome4);
        printf("                      %-8s\n", nome3);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

        // limpando o buffer:
        while ((getchar()) != '\n');
        
    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex2
/*2 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las e retorne como resultado se são IGUAIS 1 ou se
    DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
    (Declare os vetores como variavel global) (nao pode usar funcao de biblioteca)
*/

// Variáveis pedidas para sem globais:
char vetor1[10], vetor2[10];

// Funções pedidas para serem feitas fora da main:
int comparaVetores()
{
    int i;
    int encontrado = 0;

    for (i = 0; vetor1[i] != '\0'; i++)
    {
        if (vetor1[i] != '\0')
        {
            if (vetor1[i] != vetor2[i])
            {
                break;
            }
        }
    }

    if (vetor1[i] == '\0' && vetor2[i] == '\0')
    {
        return 1;
    }

    return encontrado;
}

int main()
{
    int encontrado;
    char executar_novamente;

    do
    {
        printf("Digite 10 caracteres:\n");
        scanf(" %s", vetor1);

        printf("Digite 10 caracteres:\n");
        scanf(" %s", vetor2);

        encontrado = comparaVetores();

        printf("O retorno da funcao foi: %i\n", encontrado);

        if (encontrado == 1)
        {
            printf("Isso significa que os vetores digitados sao iguais!\n");
        }

        else
        {
            printf("Isso significa que os vetores digitados sao diferentes!\n");
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex3
/*3 - Escreva um programa que receba uma string na funcao main(). Faca uma funcao que
    calcula o comprimento de uma string recebida via teclado. Mostre o valor do
    comprimento na funcao main().
    (Declare o vetor como variavel global) (nao pode usar funcao de biblioteca)
*/

// Variável Global:
char string[100];

// Função global:
int Comprimento()
{
    int i, cont = 0;

    for (i = 0; i < 100; i++)
    {
        if (string[i] != '\0')
        {
            cont++;
        }

        else
        {
            break;
        }
    }

    return cont;
}

int main()
{
    char executar_novamente;
    int comprimento;

    do
    {
        printf("Digite alguma coisa:\n");
        scanf(" %s", string);

        comprimento = Comprimento();

        printf("Voce digitou %i caracteres!\n(contando os espacos!)\n", comprimento);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex4
/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas. (nao pode usar funcao de biblioteca)
*/
int main()
{
    char executar_novamente;
    char maius[10];
    int i;

    do
    {
        printf("Digite 10 caracteres minusculos:\n");
        fgets(maius, sizeof(maius), stdin);

        /*Por que eu usei a função 'fgets' ao invés da 'scanf' como usei nos exercícios anteriores:
ao usar o método de 'scanf(" %s", string)', o programa não estava reconhecendo o caractere de espaço,
tornando a conversão de strings com espaços impossível, ele convertia apenas até o espaço e parava, printando somente o que foi
convertido. Portanto, fazendo algumas pesquisas e testes diferentes, me pareceu uma melhor abordagem para ler
uma linha inteira de entrada, incluindo espaços em branco, é usar a função 'fgets'. Dito isso, usarei essa mesma função
no próximo exercício.*/

        for (i = 0; i < 10; i++)
        {
            if (maius[i] != '\0')
            {
                if (maius[i] >= 'a' && maius[i] <= 'z')
                {
                    maius[i] = maius[i] - ('a' - 'A');
                }
            }

            else
            {
                break;
            }
        }

        printf("Aqui esta o que voce digitou em letras maiusculas: %s\n", maius);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

        // limpando o buffer
        while ((getchar()) != '\n');

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex5
/*5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas. (nao pode usar funcao de biblioteca)
*/
int main()
{
    char executar_novamente;
    char minus[10];
    int i;

    do
    {
        printf("Digite 10 caracteres maiusculos:\n");
        fgets(minus, sizeof(minus), stdin);

        for (i = 0; i < 10; i++)
        {
            if (minus[i] != '\0')
            {
                if (minus[i] >= 'A' && minus[i] <= 'Z')
                {
                    minus[i] = minus[i] - ('A' - 'a');
                }
            }

            else
            {
                break;
            }
        }

        printf("Aqui esta o que voce digitou em letras maiusculas: %s\n", minus);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

        // limpando o buffer
        while ((getchar()) != '\n');

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif
