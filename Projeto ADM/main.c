#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opi;

    printf("\n______________________________________________________\n\n\tSISTEMA DE ADIMINISTRA��O DE EMPRESAS\n______________________________________________________\n");

    printf("\n\n | (1) - Controle contas a receber.\n | (2) - Controle contas a pagar.\n | (3) - Gera relat�rios financeiros.\n | (4) - Folha de pagamento dos funcion�rios.\n | (5) - Lista de funcion�rios.\n | (6) - Estoque de produtos.\n | (7) - Fornecedores.\n |\n | INFORME O N�MERO DA OP��O DESEJADA: ");
    scanf("%d", &opi);

    return 0;
}
