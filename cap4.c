#include "stdio.h"
#include "windows.h"
#define ex1

/*OBS.: Todos os programa devem ser finalizados pelo usuario.*/

#ifdef ex1
/*Exercício 01:
1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double              */

int main()
{
    char executar_novamente;
    int i, int1[3];
    long long1[3];
    unsigned unsigned1[3];
    float float1[3];
    double double1[3];

    do
    {

        printf("Digite 3 valores inteiros (int):\n");
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &int1[i]);
        }

        printf("Digite 3 valores longos (long):\n");
        for (i = 0; i < 3; i++)
        {
            scanf("%ld", &long1[i]);
        }

        printf("Digite 3 valores sem sinal (unsigned):\n");
        for (i = 0; i < 3; i++)
        {
            scanf("%u", &unsigned1[i]);
        }

        printf("Digite 3 valores decimais (float):\n");
        for (i = 0; i < 3; i++)
        {
            scanf("%f", &float1[i]);
        }

        printf("Digite 3 valores decimais de alta precisao (double):\n");
        for (i = 0; i < 3; i++)
        {
            scanf("%lf", &double1[i]);
        }

        printf("\n");
        printf("\n        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("  %-10d          %-10ld          %-10u\n", int1[0], long1[0], unsigned1[0]);
        printf("            %-12.2f        %-15.5f\n", float1[0], double1[0]);
        printf("  %-10d          %-10ld          %-10u\n", int1[1], long1[1], unsigned1[1]);
        printf("            %-12.2f        %-15.5f\n", float1[1], double1[1]);
        printf("  %-10d          %-10ld          %-10u\n", int1[2], long1[2], unsigned1[2]);
        printf("            %-12.2f        %-15.5f\n", float1[2], double1[2]);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex2
/*Exercício 02:
Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um terá as componentes de ordem impar
    e o outro terá as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}.*/

int main()
{
    int i, nums[10], pares[10], impares[10];
    int par, impar;
    char executar_novamente;
    do
    {
        printf("Digite 10 numeros inteiros:\n");

        for (i = 0; i < 10; i++)
        {
            scanf(" %i", &nums[i]);
        }

        par = 0;
        impar = 0;

        for (i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                pares[par++] = nums[i];
            }
        }

        for (i = 0; i < 10; i++)
        {
            if (i % 2 != 0)
            {
                impares[impar++] = nums[i];
            }
        }

        printf("\nEsses foram o numeros digitados em posicoes pares:\n");
        for (i = 0; i < par; i++)
        {
            printf("%d ", pares[i]);
        }

        printf("\nEsses foram os numeros digitados em posicoes impares:\n");
        for (i = 0; i < impar; i++)
        {
            printf("%d ", impares[i]);
        }

        printf("\n");

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex3
/*Exercícios 03:
Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um terá as componentes de valor impar
    e o outro terá as componentes de valor par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}.*/
int main()
{
    int i, nums[10], pares[10], impares[10];
    int par, impar;
    char executar_novamente;

    do
    {
        printf("Digite 10 numeros inteiros:\n");

        for (i = 0; i < 10; i++)
        {
            scanf(" %i", &nums[i]);
        }

        par = 0;
        impar = 0;

        for (i = 0; i < 10; i++)
        {
            if (nums[i] % 2 == 0)
            {
                pares[par] = nums[i];
                par++;
            }

            else
            {
                impares[impar] = nums[i];
                impar++;
            }
        }

        printf("\nEsses foram os numeros pares que voce digitou:\n");
        for (i = 0; i < par; i++)
        {
            printf("%d ", pares[i]);
        }

        printf("\nEsses foram os numeros impares que voce digitou:\n");
        for (i = 0; i < impar; i++)
        {
            printf("%d ", impares[i]);
        }

        printf("\n");

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}

#endif

#ifdef ex4
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o
    resultado em um 3. vetor. Imprima na tela o indice, os valores e o resultado
    dos 6 elementos dos vetores.*/
int main()
{
    int matriz1[2][3], matriz2[2][3], resultados[2][3];
    int i, j;
    char executar_novamente;

    do
    {
        printf("Digite 6 numeros pra primeira matriz:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%i", &matriz1[i][j]);
            }
        }

        printf("Digite 6 numeros pra segunda matriz:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%i", &matriz2[i][j]);
            }
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                resultados[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }

        printf("A matriz resultado das somas da primeira e segunda matriz e':\n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", resultados[i][j]);
            }
            printf("\n"); // Quebra de linha após cada linha
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex5
/*5 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores
    ordenados.*/
int main()
{
    int i, j, temp, num[10];
    char executar_novamente;
    do
    {
        printf("Digite dez numeros inteiros:\n");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &num[i]);
            // Ordena os elementos até o índice atual
            for (j = i; j > 0 && num[j] < num[j - 1]; j--)
            {
                // Troca os valores
                temp = num[j];
                num[j] = num[j - 1];
                num[j - 1] = temp;
            }
        }

        printf("Os numeros digitados em ordem crescente:\n");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", num[i]);
        }

        printf("\n");

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif