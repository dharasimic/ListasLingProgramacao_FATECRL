#include "stdio.h"
#include "windows.h"

// variáveis globais:
char produto1[20], produto2[20], produto3[20];
int quantidade1, quantidade2, quantidade3;
char nome[20];

// Funções adicionais/auxiliares:

// Função de escrita:
void escrita()
{
    FILE *arquivo;

    arquivo = fopen("produtos.txt", "w");

    // se ele não encontrar o .txt, ele cria um:
    if (arquivo == NULL)
    {
        printf("Não foi possível criar o seu banco de dados.\n");
    }

    fwrite(&produto1, sizeof(produto1), 1, arquivo);
    fwrite(&produto2, sizeof(produto2), 1, arquivo);
    fwrite(&produto3, sizeof(produto3), 1, arquivo);
    fwrite(&quantidade1, sizeof(quantidade1), 1, arquivo);
    fwrite(&quantidade2, sizeof(quantidade2), 1, arquivo);
    fwrite(&quantidade3, sizeof(quantidade3), 1, arquivo);
    fclose(arquivo);
}

//  Função de leitura de dados:
void leitura()
{
    FILE *ponteiro;

    ponteiro = fopen("produtos.txt", "r");

    if (ponteiro == NULL)
    {
        printf("O arquivo produtos nao existe\n");
    }
    fread(&produto1, sizeof(produto1), 1, ponteiro);
    fread(&produto2, sizeof(produto2), 1, ponteiro);
    fread(&produto3, sizeof(produto3), 1, ponteiro);
    fread(&quantidade1, sizeof(quantidade1), 1, ponteiro);
    fread(&quantidade2, sizeof(quantidade2), 1, ponteiro);
    fread(&quantidade3, sizeof(quantidade3), 1, ponteiro);

    fclose(ponteiro);
}

// função que compara nomes:
int comparaNomes()
{
    int i;
    int encontrado = 0;

    leitura();

    // comparação com o produto 1:
    for (i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] != '\0')
        {
            if (nome[i] != produto1[i])
            {
                break;
            }
        }
    }

    if (nome[i] == '\0' && produto1[i] == '\0')
    {
        return 1;
    }

    // comparação com o produto 2:
    for (i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] != '\0')
        {
            if (nome[i] != produto2[i])
            {
                break;
            }
        }
    }

    if (nome[i] == '\0' && produto2[i] == '\0')
    {
        return 2;
    }

    // comparação com o produto 3:
    for (i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] != '\0')
        {
            if (nome[i] != produto3[i])
            {
                break;
            }
        }
    }

    if (nome[i] == '\0' && produto3[i] == '\0')
    {
        return 3;
    }
    
    return encontrado;
}

// Funções pedidas no desafio:
//  Opção 1: Função de entrada de dados:
void entradaDados()
{
    // coletando os dados:
    printf("Digite os dados em letras minusculas!\nNome do primeiro produto:\n");
    gets(produto1);

    printf("Digite a quantidade do primeiro produto:\n");
    scanf(" %i", &quantidade1);

    getchar();

    printf("Nome do segundo produto:\n");
    gets(produto2);

    printf("Digite a quantidade do segundo produto:\n");
    scanf(" %i", &quantidade2);

    getchar();

    printf("Nome do terceiro produto:\n");
    gets(produto3);

    printf("Digite a quantidade do terceiro produto:\n");
    scanf(" %i", &quantidade3);

    getchar();

    // escrevendo os dados coletados dentro do .txt:
    escrita();

    printf("Dados coletados!\n");
}

// Opção 2: Função de listagem de dados:
void listaDados()
{
    leitura();

    printf("\nEsses sao os produtos do Banco de Dados:\n");

    if (produto1[0] != '\0')
    {
        printf("%i %s\n", quantidade1, produto1);
    }

    if (produto2[0] != '\0')
    {
        printf("%i %s\n", quantidade2, produto2);
    }

    if (produto3[0] != '\0')
    {
        printf("%i %s\n\n", quantidade3, produto3);
    }
}

// Opção 3: Pesquisar produto pelo nome:
void pesquisaNome()
{
    int encontrado = 0;

    printf("Digite um nome de produto para pesquisar (somente letras minusculas!):\n");
    gets(nome);

    encontrado = comparaNomes();

    // Se o produto foi encontrado, imprime uma mensagem informando que o produto foi encontrado
    if (encontrado == 1 || encontrado == 2 || encontrado == 3)
    {
        printf("Foi encontrado um produto chamado '%s'\n", nome);
    }

    if (encontrado == 0)
    {
        printf("Nao foi encontrado nenhum produto chamado '%s'\n", nome);
    }
}

// Opção 4: Pesquisa produto pela inicial:
void pesquisaInicial()
{
    char inicial;
    printf("Digite a inicial desejada\n");
    inicial = getchar();

    leitura();
    if (produto1[0] == inicial || produto2[0] == inicial || produto3[0] == inicial)
    {
        printf("Esse e' o resultado da sua pesquisa pela inicial '%c':\n", inicial);
        if (produto1[0] == inicial)
        {
            printf("%i %s\n", quantidade1, produto1);
        }
        if (produto2[0] == inicial)
        {
            printf("%i %s\n", quantidade2, produto2);
        }
        if (produto3[0] == inicial)
        {
            printf("%i %s\n", quantidade3, produto3);
        }
    }

    if (produto1[0] != inicial && produto2[0] != inicial && produto3[0] != inicial)
    {
        printf("Nao foi encontrado nenhum produto com a inicial '%c'!\n", inicial);
    }
}

// Opção 5: Editar Dados:
void atualizarDados()
{
    int encontrado = 0;

    printf("Qual o nome do produto que deseja editar?\n");
    gets(nome);

    encontrado = comparaNomes();

    if (encontrado == 1 || encontrado == 2 || encontrado == 3)
    {
        if (encontrado == 1)
        {
            printf("Qual o nome do novo produto?\n");
            gets(produto1);

            printf("Qual a quantidade do novo produto?\n");
            scanf(" %i", &quantidade1);

            printf("Dados atualizados com sucesso!\n");
        }

        if (encontrado == 2)
        {
            printf("Qual o nome do novo produto?\n");
            gets(produto2);

            printf("Qual a quantidade do novo produto?\n");
            scanf(" %i", &quantidade2);

            printf("Dados atualizados com sucesso!\n");
        }

        if (encontrado == 3)
        {
            printf("Qual o nome do novo produto?\n");
            gets(produto3);

            printf("Qual a quantidade do novo produto?\n");
            scanf(" %i", &quantidade3);

            printf("Dados atualizados com sucesso!\n");
        }
    }

    //escreve no .txt:
    escrita();

    if (encontrado == 0)
    {
        printf("Nao foi possivel localizar um produto chamado '%s'\n", nome);
    }
}

// Opção 6: Excluir dados:
void excluirDados()
{
    int encontrado = 0;

    char resposta;

    printf("Qual o nome do produto que deseja excluir?\n");
    gets(nome);

    encontrado = comparaNomes();

    if (encontrado == 1 || encontrado == 2 || encontrado == 3)
    {
        printf("Tem certeza que deseja excluir o produto '%s'? (S/N)\n", nome);
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's')
        {
            printf("Dados excluidos com sucesso!\n");

            // exclusão dos dados dentro das variáveis:
            // se o produto que o usuário decidiu excluir for o produto 1:
            if (encontrado == 1)
            {
                produto1[0] = '\0';
            }
            // se o produto que o usuário decidiu excluir for o produto 2:
            if (encontrado == 2)
            {
                produto2[0] = '\0';
            }
            // se o produto que o usuário decidiu excluir for o produto 3:
            if (encontrado == 3)
            {
                produto3[0] = '\0';
            }
        }

        if (resposta == 'N' || resposta == 'n')
        {
            printf("Operacao cancelada!\n");
        }

        // Exclusão dos dados dentro do .txt:
        escrita();
    }

    if (encontrado == 0)
    {
        printf("Nao existe nenhum produto chamado '%s' no banco de dados.\n", nome);
    }
}

int main()
{
    int opcaoMenu;

    while (opcaoMenu != 7)
    {
        printf("\t\t\tBem vindo ao Banco de Dados!\n\n\n");

        printf("\tMENU:\n");
        printf("1 - [Entrar Dados]\n2 - [Listagem de Produtos]\n3 - [Pesquisar Produto Pelo Nome]\n");
        printf("4 - [Pesquisar Produto Pela Inicial]\n5 - [Editar Dados]\n6 - [Excluir Dados]\n");
        printf("7 - [Sair]\n");

        printf("\nDigite uma opcao:\n");

        scanf(" %i", &opcaoMenu);
        getchar();

        // switch case break:
        switch (opcaoMenu)
        {
        case 1:
            entradaDados();
            break;

        case 2:
            listaDados();
            break;

        case 3:
            pesquisaNome();
            break;

        case 4:
            pesquisaInicial();
            break;

        case 5:
            atualizarDados();
            break;

        case 6:
            excluirDados();
            break;

        case 7:
            exit(0);
            break;

        default:
            printf("Escolha invalida!\n");
            system("pause");
            system("cls");
            break;
        }
        system("pause");
        system("cls");
    }
}