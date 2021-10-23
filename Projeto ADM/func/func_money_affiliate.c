#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float money1, money2, money3, money4;
    static int opi, soma1 = 0, soma2 = 0, soma3 = 0 , soma4 = 0;
    static float soma5 = 0;

    printf("\n-----------------------------------------------\n\tControle de contas a pagar\n-----------------------------------------------\n");

    do{

        printf("\n(1) - Conta de luz.\n(2) - Conta de água.\n(3) - Conta de aluguel.\n(4) - Conta fornecedores.\n(5) - Valor total das contas deste mês.\n(0) - Retorna ao menu anterior.\n\nInforme o número da opiçáo desejada: ");
        scanf("%d", &opi);

        if (opi == 1){

            printf("\nInforme o valor da conta de luz deste mês: ");
            scanf("%f", &money1);
            soma1 = soma1 + money1;
            printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money1);
            
            }

            else if (opi == 2){

                printf("\nInforme o valor da conta de água deste mês: ");
                scanf("%f", &money2);
                soma2 = soma2 + money2;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money2);

                }

                else if (opi == 3){

                    printf("\nInforme o valor da conta de aluguel deste mês: ");
                    scanf("%f", &money3);
                    soma3 = soma3 + money3;
                    printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money3);

                    }

                    else if (opi == 4){

                        printf("\nInforme o valor total a ser pago para os fornecedores deste mês: ");
                        scanf("%f", &money4);
                        soma4 = soma4 + money4;
                        printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money4);

                        }
                        else if (opi == 5){

                            soma5 = soma1 + soma2 + soma3 + soma4;

                            printf("\n------------------------------------------------------\nO valor total das contas deste mês é de : RS %.2f\n------------------------------------------------------\n", soma5);

                            }


    }while(opi != 0);

    return 0;
}