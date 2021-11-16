#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 1001

/*-------------------------------------------------------------------------------------------------------*/ 

// Structs usados nas funçoés de banco de dados

typedef struct{
    int   money;
    char nome[MAX];
}PATROCINADOR;

typedef struct{
    PATROCINADOR info[MAX];
    int f;           
}NODO;

typedef struct{
    char nome[MAX];
}FORNECEDOR;

typedef struct{
    FORNECEDOR info[MAX];
    int f;           
}NODO1;

/*-------------------------------------------------------------------------------------------------------*/ 

// Funçóes notificações

void notifi_ciar_lista();
void notifi_informa_salario_funcionarios();
void notifi_informa_quantidade_funcionarios();

/*-------------------------------------------------------------------------------------------------------*/ 

// Funçóes relacionadas a banco de dados em pilha 

void cria_lista( int *fim );
void entrada_Patrocinadores( PATROCINADOR *aux );
void inclui_lista( NODO *lista );
void consulta_nome( NODO lista );
void entrada_fornecedores( FORNECEDOR *aux );
void inclui_lista_fornecedores( NODO1 *lista );
void imprime_lista_fornecedores( NODO1 lista );

/*-------------------------------------------------------------------------------------------------------*/

// Funçóes do menu principal

void Controle_receber ();
void Controle_pagar ();
void Folha_de_pagamento();
void Estoque_de_produtos ();
void patrocinadores ();
void Fornecedores ();

/*-------------------------------------------------------------------------------------------------------*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opi, CORA , Cora_cont = 0;
    
    do{

        if(Cora_cont == 0){
            printf("\n| ------------------------------------------------------------------------------------ |\n\n\t\t\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n");
            printf("\n| ------------------------------------------------------------------------------------ |\n");
            printf("\n ( ^ _ ^ ) - Olá, eu sou a CORA e estou aqui para ajudar você com o que precisa!\n\n ( ^ _ ^ ) - Vamos lá então por favor digite o número ( 1 ) para começar: ");
            scanf("%d", &CORA);
            Cora_cont++;

        }else{

            system("cls"); 
            printf("\n| ------------------------------------------------------- |\n\n\t  SISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n\n| ------------------------------------------------------- |\n");
            printf("\n | (1) - Salário dos funcionarios (folha de pagamento).\n | (2) - Controle de contas a paga.\n | (3) - Estoque de produtos.\n | (4) - Patrocinadores.\n | (5) - Fornecedores.\n |\n\n( ^ _ ^ ) - INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
            scanf("%d", &opi);

            switch (opi){

                case 1:
                    Folha_de_pagamento (); // 95% complete
                    break;
                case 2:
                    Controle_pagar (); // 95% complete
                    break;
                case 3:
                    Estoque_de_produtos (); // Development process
                    break;
                case 4:
                    patrocinadores (); // 95% complete
                    break;
                case 5:
                    Fornecedores (); // 95% complete
                    break;

                }
        }
    }while (opi != 0);
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Controle de contas a paga

void Controle_pagar (){

    int opi;
    float money1 = 0, money2 = 0, money3 = 0, soma_total = 0;

    system("cls");
    printf("\n | ---------------------------------------------------------------------|\n\n\t\t\tCONTROLE DE CONTAS A PAGA\n");

    do{

        printf("\n | ---------------------------------------------------------------------|\n");
        printf("\n | (1) - Conta de luz.\n | (2) - Conta de água.\n | (3) - Conta de aluguel.\n | (4) - Valor total das contas deste mês.\n | (0) - Retorna ao menu anterior.\n | \n\n ( ^ _ ^ ) INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);

        switch (opi){

            case 1:{
                
                system("cls");
                printf("\n\n ( ^ _ ^ ) Informe o valor da conta de luz deste mês: ");
                scanf("%f", &money1);
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n");
                printf("\n\t\t  O valor informado foi : RS %.2f\n", money1);
                break;
            }
            case 2:{

                system("cls");
                printf("\n\n ( ^ _ ^ ) Informe o valor da conta de água deste mês: ");
                scanf("%f", &money2);
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n");
                printf("\n\t\t  O valor informado foi : RS %.2f\n", money2);
                break;
            }
            case 3:{

                system("cls");
                printf("\n\n ( ^ _ ^ ) Informe o valor da conta de aluguel deste mês: ");
                scanf("%f", &money3);
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n");
                printf("\n\t\t  O valor informado foi : RS %.2f\n", money3);
                break;
            }
            
            case 4:{

                soma_total = money1 + money2 + money3;
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n");
                printf("\n\t   O valor total das contas deste mês é de : RS %.2f\n", soma_total);
                break;
            }
        
        }

    }while(opi != 0);

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Salário dos funcionarios (folha de pagamento)

void Folha_de_pagamento(){

    int opi, opi_funcionarios, add_funcionario, remove_funcionario, quant_funcionarios = 0, verificador_de_bonus = 0, sal[quant_funcionarios], verificador_de_salario = 0, x, y, z;
    float cal_bonus,  cal_inss, bonus_porcentagem, salario_final;
    float desconto_inss = 7.5;

    system("cls");
    printf("\n | -------------------------------------------------------------------------------|\n\n\t\t\t\tFOLHA DE PAGAMENTO\n");

    do{

        printf("\n | -------------------------------------------------------------------------------|\n");
        printf("\n | (1) - Bonificação.\n | (2) - Desconto do INSS.\n | (3) - Quantidade de funcionários.\n | (4) - Salário bruto dos Funcionarios.\n | (5) - Salário líquido dos Funcionarios.\n | (6) - Adicionar salário dos funcionários.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);

        // Quantidade de funcionários.

        if(opi == 3){

            system("cls");

                do{

                    printf("\n | -------------------------------------------------------------------------------|\n");
                    printf("\n | (1) - Adicionar  funcionários\n | (2) - Remove funcionários.\n | (3) - Quantidade de funcionários.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
                    scanf("%d", &opi_funcionarios);

                    if(opi_funcionarios == 1){

                        system("cls"); 
                        printf("\n | Quantos funcionários você deseja adiconar: ");
                        scanf("%d", &add_funcionario);
                        quant_funcionarios = quant_funcionarios + add_funcionario;
                        system("cls");
                        printf("\n | -------------------------------------------------------------------------------|\n");
                        printf("\n\t\t\tFoi adicionado %d funcionários.\n", add_funcionario);

                        }else if(opi_funcionarios == 2){

                            system("cls"); 
                            printf("\n | Quantos funcionários você deseja remove: ");
                            scanf("%d", &remove_funcionario);
                            quant_funcionarios = quant_funcionarios - remove_funcionario;
                            system("cls");
                            printf("\n | -------------------------------------------------------------------------------|\n");
                            printf("\n\t\t\t  Foi removido %d funcionários.\n", remove_funcionario);

                            }else if(opi_funcionarios == 3){

                                system("cls");
                                printf("\n | -------------------------------------------------------------------------------|\n");
                                printf("\n\t\t\tA quantidade de funcionários é: %d\n", quant_funcionarios);
                                }

                }while(opi_funcionarios != 0);
                system("cls"); 

            }

            // Adicionar salário dos funcionários.

            else if(opi == 6){
                if(quant_funcionarios > 0){
                    system("cls");
                    for(x = 0; x < quant_funcionarios; x++){
                            printf("\n | Digite o salário do %d° funcionário: ", x+1);
                            scanf("%d", &sal[x]);
                            verificador_de_salario++;
                            }

                            system("cls"); 
                            printf("\n | -------------------------------------------------------------------------------|\n");
                            for(y = 0; y < quant_funcionarios; y++){
                                printf("\n\t\t\tO salário do %d° funcionário é: %d\n", y+1, sal[y]);
                            }
                            
                    }else{ notifi_informa_quantidade_funcionarios(); } 
                }

                // Bonificação.

                else if(opi == 1){
                    if(quant_funcionarios > 0){
                        if(verificador_de_salario > 0){

                            system("cls");
                            printf("\n | Informa em porcentagem a gratificação para os funcionários: ");
                            scanf("%f", &bonus_porcentagem);
                            system("cls");
                            printf("\n | -------------------------------------------------------------------------------|\n");
                            for(z = 0; z < quant_funcionarios; z++){
                                cal_bonus =  sal[z] * bonus_porcentagem / 100;
                                printf("\n\t\tA bonificação do %d° funcionários será de: R$ %.2f\n", z+1, cal_bonus);
                                verificador_de_bonus++;
                                }

                         }else{ notifi_informa_salario_funcionarios(); }
                    }else{ notifi_informa_quantidade_funcionarios(); }
                    }

                    // Desconto do INSS.

                    else if(opi == 2){
                        if(quant_funcionarios > 0){
                            if(verificador_de_salario > 0){

                                system("cls");
                                printf("\n | -------------------------------------------------------------------------------|\n");
                                for(z = 0; z < quant_funcionarios; z++){
                                    cal_inss =  sal[z] * desconto_inss / 100;
                                    printf("\n\t\tO desconto do INSS do %d° funcionários será de: R$ %.2f\n", z+1, cal_inss);
                                    }

                            }else{ notifi_informa_salario_funcionarios(); }
                        }else{ notifi_informa_quantidade_funcionarios(); }

                        }  

                        //Salário final dos Funcionarios.

                        else if(opi == 5){
                            if(quant_funcionarios > 0){
                                if(verificador_de_salario > 0){
                                    if(verificador_de_bonus > 0){

                                            system("cls");
                                            printf("\n | -------------------------------------------------------------------------------|\n");
                                            for(z = 0; z < quant_funcionarios; z++){
                                                salario_final = sal[z] + ( sal[z] * bonus_porcentagem / 100) - (sal[z] * desconto_inss / 100);
                                                printf("\n\t   O Salário líquido dos Funcionarios %d° será de: R$ %.2f\n", z+1, salario_final);
                                                }

                                    }else{
                                        system("cls");
                                        printf("\n | -------------------------------------------------------------------------------|\n");
                                        printf("\n\tPor favor primeiramente adicionar a bonificação dos funcionários!\n");
                                    }
                                }else{ notifi_informa_salario_funcionarios(); }
                            }else{ notifi_informa_quantidade_funcionarios(); }

                            }

                            // Salário bruto

                            else if(opi == 4){
                                if(verificador_de_salario > 0){

                                    system("cls"); 
                                    printf("\n | -------------------------------------------------------------------------------|\n");
                                    for(y = 0; y < quant_funcionarios; y++){
                                        printf("\n\t\t   O salário bruto do %d° funcionário é: R$ %d\n", y+1, sal[y]);
                                        }
                                            
                                }else{ notifi_informa_salario_funcionarios(); }

                            }            

    }while(opi != 0);
    
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Estoque de produtos.

void Estoque_de_produtos (){

    
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - patrocinadores

void patrocinadores (){

    NODO lista;
    int aux;

    int opi, lista_cont = 0;

    system("cls");
    printf("\n | ---------------------------------------------------------------------|\n\n\t\t\t     Patrocinadores\n");

    do{
        printf("\n | ---------------------------------------------------------------------|\n");
        printf("\n | (1) - Cria lista de patrocinadores.\n | (2) - Adicionar patrocinador.\n | (3) - Consulta patrocinador.\n | (4) - Mostra lista completa de patrocinadores.\n | (0) - Retorna ao menu anterior.\n | \n\n ( ^ _ ^ ) - INFORME O NÚMERO DA OPÇÂO DESEJADA: ");
        scanf("%d", &opi);

        switch (opi){

        case 1:{
            cria_lista( &lista.f );
            lista_cont++;
            break;
        }
        case 2:{
            if( lista_cont == 0){
                notifi_ciar_lista();
            }else{
                inclui_lista( &lista );
            }
            break;
        }
        case 3:{
            if( lista_cont == 0){
                notifi_ciar_lista();
            }else{
                consulta_nome ( lista );
            }
            break;
        }
        case 4:{
            if( lista_cont == 0){
                notifi_ciar_lista();
            }else{
                imprime_lista( lista );
            }
            break;
            }
        }

   }while ( opi != 0 );

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Fornecedores

void Fornecedores (){

    NODO1 lista_fornecedores;
    int aux;

    int opi, lista_cont = 0;

    system("cls");
    printf("\n | ---------------------------------------------------------------------|\n\n\t\t\t     Fornecedores\n");

    do{
        printf("\n | ---------------------------------------------------------------------|\n");
        printf("\n | (1) - Cria lista de fornecedores.\n | (2) - Adicionar fornecedor.\n | (3) - Mostra lista completa de fornecedores.\n | (0) - Retorna ao menu anterior.\n | \n\n ( ^ _ ^ ) - INFORME O NÚMERO DA OPÇÂO DESEJADA: ");
        scanf("%d", &opi);

        switch (opi){

        case 1:{
            cria_lista( &lista_fornecedores.f );
            lista_cont++;
            break;
        }
        case 2:{
            if( lista_cont == 0){
                notifi_ciar_lista();
            }else{
                inclui_lista_fornecedores( &lista_fornecedores );
            }
            break;
        }
        case 3:{
            if( lista_cont == 0){
                notifi_ciar_lista();
            }else{
                imprime_lista_fornecedores( lista_fornecedores );
            }
            break;
            }
        }
   }while ( opi != 0 );

}

void venda_produtos(){
    
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Funçóes relacionadas a banbo de Patrocinadores em pilha - patrocinadores 

void cria_lista( int *fim ){

    system("cls");
    *fim = 0;    
    printf("\n | ---------------------------------------------------------------------|\n ");
    printf( "\n\t\t\t      Lista criada!\n" );
    getchar();
}

void entrada_Patrocinadores( PATROCINADOR *aux ){

	system("cls");
    printf("\n | Informe o nome do patrocinador: ");
    fflush( stdin );
    gets( aux->nome );
    printf("\n | Digite o valor que vai sé fornecido pelo de patrocinador: ");
    fflush( stdin );     
    scanf( "%d", &aux-> money );
}

void inclui_lista( NODO *lista ){

        int i;
        if(lista -> f == MAX){
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf( "\n\t\t\t      Lista cheia! \n" );
        }else{
            PATROCINADOR aux;
            entrada_Patrocinadores( &aux );
            for (i = lista -> f; i > 0; i--){
                lista -> info[i] = lista -> info [i - 1];
            }
            lista -> info[0] = aux;
            lista -> f++;
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf("\n\t\t     Registro incluído na lista!\n");
        }
}

void imprime_lista( NODO lista ){
     
    int i;
    if( lista.f == 0 ){
        system("cls");
        printf("\n | ---------------------------------------------------------------------|\n ");
        printf( "\n\t\t\t      Lista vazia! \n" );
    }
    else{
        system("cls");
        printf("\n | ----------------------------- Lista ---------------------------------|\n ");
	    for( i = 0 ; i < lista.f ; i++ ) { 
	         printf( "\n\t\t     Patrocinador: %s", lista.info[ i ].nome );
             printf( "     Valor: R$ %d\n", lista.info[ i ].money );
             
	    }
    }    
    getchar();
}

void consulta_nome( NODO lista ){

        int i = 0;
        char nome[30];
        system("cls");
        printf("\n | Informe o nome a ser consultado: ");
        fflush(stdin);
        gets(nome);
        while ((i < lista.f) && strcmp(lista.info[i].nome, nome) != 0){ i++; }
        if(i >= lista.f){
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf("\n\t\t   Nome não encontrado na lista!\n");
        }else{
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
	        printf( "\n\t\t     Nome: %s", lista.info[ i ].nome );
            printf( "\t Valor: R$ %d\n", lista.info[ i ].money );
        }

    }   


// Funçóes relacionadas a banbo de Patrocinadores em pilha - fornecedores

void entrada_fornecedores( FORNECEDOR *aux ){

	system("cls");
    printf("\n | Informe o nome do patrocinador: ");
    fflush( stdin );
    gets( aux->nome );

}

void inclui_lista_fornecedores( NODO1 *lista ){

        int i;
        if(lista -> f == MAX){
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf( "\n\t\t\t      Lista cheia! \n" );
        }else{
            FORNECEDOR aux;
            entrada_fornecedores( &aux );
            for (i = lista -> f; i > 0; i--){
                lista -> info[i] = lista -> info [i - 1];
            }
            lista -> info[0] = aux;
            lista -> f++;
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf("\n\t\t     Registro incluído na lista!\n");
        }
}

void imprime_lista_fornecedores( NODO1 lista ){
     
    int i;
    if( lista.f == 0 ){
        system("cls");
        printf("\n | ---------------------------------------------------------------------|\n ");
        printf( "\n\t\t\t      Lista vazia! \n" );
    }
    else{
        system("cls");
        printf("\n | ----------------------------- Lista ---------------------------------|\n ");
	    for( i = 0 ; i < lista.f ; i++ ) { 
	         printf( "\n\t\t\t    Fornecedor: %s\n", lista.info[ i ].nome );
             
	    }
    }    
    getchar();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

//Notificações

void notifi_ciar_lista(){
    system("cls");
    printf("\n | ---------------------------------------------------------------------|\n ");
    printf("\n   ( ^ _ ^ ) - Por favor primeiramente  crie a lista de patrocinadores!\n");
}

void notifi_informa_quantidade_funcionarios(){
    system("cls");
    printf("\n | -------------------------------------------------------------------------------|\n");
    printf("\n     ( ^ _ ^ ) - Por favor primeiramente informe a quantidade de funcionários!\n");
}

void notifi_informa_salario_funcionarios(){
    system("cls");
    printf("\n | -------------------------------------------------------------------------------|\n");
    printf("\n     ( ^ _ ^ ) - Por favor primeiramente adicionar o salário dos funcionários!\n");
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//
