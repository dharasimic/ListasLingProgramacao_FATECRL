#include "stdio.h"
#include "windows.h"
#define ex1

/*OBS.: Todos os programa devem ser finalizados pelo usuario.*/

#ifdef ex1
/*EX 1: Escreva um programa que receba via teclado numeros inteiros positivos. Quando o numero digitado for negativo o
programa deve parar e calcular a media dos valores positivos digitados.*/
int main()
{
    float num, positivos, cont, media;
    char executar_novamente;
    do
    {
        positivos = 0;
        cont = 0;

        do
        {
            printf("Digite um numero inteiro qualquer.\n");
            scanf(" %f", &num);

            if (num >= 0)
            {
                positivos = positivos + num;
                cont++;
            }

        } while (num >= 0);

        media = positivos / cont;

        printf("A media dos numeros positivos digitados foi %.2f\n", media);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex2
/*EX 2: Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/
int main()
{
    char executar_novamente, resposta;
    int limite_inferior, limite_superior, numero_a_adivinhar;

    do
    {
        limite_inferior = 1;
        limite_superior = 99;

        printf("Pense em um numero entre 1 e 99 e pressione ENTER quando estiver pronto para iniciar.\nResponda usando:\nS ou N para sim e nao\n< para menor\n> para maior\n");
        getchar();

        while (1)
        {
            numero_a_adivinhar = (limite_inferior + limite_superior) / 2;
            printf("O numero que voce pensou e' %d? (S/N)\n", numero_a_adivinhar);
            scanf(" %c", &resposta);

            if (resposta == 'S' || resposta == 's')
            {
                printf("O numero que voce pensou e' %d!.\n", numero_a_adivinhar);
                break;
            }

            else if (resposta == 'N' || resposta == 'n')
            {
                printf("O numero que voce pensou e' maior ou menor que %d?\n", numero_a_adivinhar);
                scanf(" %c", &resposta);

                if (resposta == '<')
                {
                    limite_superior = numero_a_adivinhar - 1;
                }
                else if (resposta == '>')
                {
                    limite_inferior = numero_a_adivinhar + 1;
                }
                else
                {
                    printf("Por favor, responda com '=', '<' ou '>'.\n");
                }
            }

            else
            {
                printf("Por favor, responda com 'S' ou 'N'.\n");
            }
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
/*EX 3: Reescreva o programa do exercicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/
int main()
{
    char executar_novamente;
    do
    {
        char opcao = 'a';
        int valor = 50;
        int tentativas = 1;
        int min = 0;
        int max = 100;

        printf("Pense em um numero entre 1 e 99 e depois responda com: >, < ou =\n");

        while (opcao != '=')
        {
            printf("Voce pensou no numero %i?\n", valor);
            scanf(" %c", &opcao);

            switch (opcao)
            {
            case '>':
            {
                tentativas++;
                min = valor;
                valor = (min + max) / 2;
                break;
            }
            case '<':
            {
                tentativas++;
                max = valor;
                valor = ((max - min) / 2) + min;
                break;
            }
            case '=':
            {
                printf("Achei\n");
                printf("Tentativas: %i\n", tentativas);
                break;
            }
            default:
            {
                printf("A opcao escolhida e' invalida.\n");
            }
            }
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif

#ifdef ex4
/*EX 4: Receba via teclado a distancia em km e a quantidade de litros de gasolina
    consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

int main()
{
    char executar_novamente;
    float km, litros, razao;

    do
    {
        printf("Quantos kilometros voce percorreu?\n");
        scanf(" %f", &km);

        printf("Nesses kilometros percorridos, quanto litros de gasolina voce gastou?\n");
        scanf(" %f", &litros);

        razao = km / litros;

        if (razao < 8)
        {
            printf("O seu carro nao e nada economico, venda ele!\n");
        }

        if (razao >= 8 && razao <= 14)
        {
            printf("Seu carro e economico!\n");
        }

        if (razao > 14)
        {
            printf("Que carro otimo! Super economico!!!\n");
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
/*EX 5: As ligacoes telefonicas sao cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/
int main()
{
    int h, min, seg, tempo1, h2, min2, seg2, tempo2, duracao;
    char executar_novamente;

    do
    {
        printf("Que horas voce iniciou a ligacao?\n");

        printf("Horas:");
        scanf(" %i", &h);

        printf("Minutos:");
        scanf(" %i", &min);

        printf("Segundos:");
        scanf(" %i", &seg);

        printf("Que horas voce encerrou a ligacao?\n");

        printf("Horas:");
        scanf(" %i", &h2);

        printf("Minutos:");
        scanf(" %i", &min2);

        printf("Segundos:");
        scanf(" %i", &seg2);

        tempo1 = (h * 3600) + (min * 60) + seg;
        tempo2 = (h2 * 3600) + (min2 * 60) + seg2;

        if (tempo1 > tempo2)
        {
            duracao = tempo2 + (86400 - tempo1);
        }

        if (tempo2 > tempo1)
        {
            duracao = tempo2 - tempo1;
        }

        printf("A sua ligacao durou %i horas %i minutos e %i segundos\n", (duracao / 3600), ((duracao % 3600) / 60), ((seg % 3600) % 60));

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');
    return 0;
}
#endif
