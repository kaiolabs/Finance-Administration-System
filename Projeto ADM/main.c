#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opi;

    printf("\n______________________________________________________\n\n\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n______________________________________________________\n");

    printf("\n\n | (1) - Controle contas a receber.\n | (2) - Controle contas a pagar.\n | (3) - Gera relatórios financeiros.\n | (4) - Folha de pagamento dos funcionários.\n | (5) - Lista de funcionários.\n | (6) - Estoque de produtos.\n | (7) - Fornecedores.\n |\n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
    scanf("%d", &opi);

    return 0;
}
