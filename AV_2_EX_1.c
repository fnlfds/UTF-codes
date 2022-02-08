/*Uso da diretiva de compila��o #include para adicionar
o arquivo stdio.h com funcionalidades de entrada e sa�da de dados.*/

#include<stdio.h>

//Uso da struct para o armazenamento das informa��es

typedef struct {
    struct{
        char rua[51][61], bairro[51][61], cidade[51][61], estado[51][21];//Matrizes para armazenar os dados
        int num_endereco[51];
    }endereco;

    struct{
    char nomeFantasia[51][61], atividade[51][61];
    }caracteres;//Para evitar um bug envolvendo o char dentro da struct dados_empresa, foi necess�rio criar outra struct

    struct{
        int codigo[51];
        int dia[50], mes[50], ano[50];
    }numeros;
    int num_funcionario[50];//Estava ocorrendo um bug com num_funcionario no interior da struct numeros, tendo que ficar de fora
}dados_empresa;

//Fun��o principal para a opera��o dos dados

int main(){
//Declara��o de vari�veis

    dados_empresa empresa;//Vari�vel do tipo dados_empresa
    int contador_1 = 0, contador_2 = 0, contador_3 = 0, contador_4 = 0;//Contadores necess�rios para as opera��es
    char resposta_1, resposta_2;//Op��es ao usu�rio
    float soma = 0, media;//M�dia dos funcion�rios

    printf("---Registro de empresas---\n");
    for (contador_1 = 0; contador_1 < 50; contador_1 ++){
        printf("\nDigite o codigo da empresa %i a ser registrado: ", contador_1 + 1);
        fflush(stdin);//Limpeza para evitar bugs
        scanf("%i",&empresa.numeros.codigo[contador_2]);
        printf("\nDigite o nome fantasia da empresa: ");
        fflush(stdin);
        gets(empresa.caracteres.nomeFantasia[contador_2]);//Fun��o gets para armazenar a string
        printf("\nDigite a descricao da atividade da empresa: ");
        fflush(stdin);
        gets(empresa.caracteres.atividade[contador_2]);
        printf("\nDigite a rua da empresa: ");
        fflush(stdin);
        gets(empresa.endereco.rua[contador_2]);
        printf("\nDigite o numero do endereco da empresa: ");
        fflush(stdin);
        scanf("%i",&empresa.endereco.num_endereco[contador_2]);
        printf("\nDigite o bairro da empresa: ");
        fflush(stdin);
        gets(empresa.endereco.bairro[contador_2]);
        printf("\nDigite a cidade da empresa: ");
        fflush(stdin);
        gets(empresa.endereco.cidade[contador_2]);
        printf("\nDigite o estado da empresa: ");
        fflush(stdin);
        gets(empresa.endereco.estado[contador_2]);
        printf("\nDigite o numero de funcionarios: ");
        fflush(stdin);
        scanf("%i",&empresa.num_funcionario[contador_2]);
        printf("\nDigite o dia de abertura da empresa: ");
        fflush(stdin);
        scanf("%i",&empresa.numeros.dia[contador_2]);
        printf("\nDigite o mes de abertura da empresa: ");
        fflush(stdin);
        scanf("%i",&empresa.numeros.mes[contador_2]);
        printf("\nDigite o ano de abertura da empresa: ");
        fflush(stdin);
        scanf("%i",&empresa.numeros.ano[contador_2]);
        contador_2 = contador_2 + 1;//Registro das empresas
        contador_3 = contador_3 + 1;//Necess�rio para a m�dia

        printf("\nDeseja continuar o cadastro? Digite [S] para continuar ou [N] para finalizar: ");
        fflush(stdin);
        scanf("%c",&resposta_1);
        if (resposta_1 == 'N')
            contador_1 = 100;
    }

    //M�dia dos funcion�rios

    for(contador_4 = 0; contador_4 < contador_3; contador_4 ++){
        soma = soma + empresa.num_funcionario[contador_4];
    }
    media = (float) soma / contador_3;
    printf("\n\nMedia do numero de funcionarios: %.2f", media);

    //Busca de empresas no cadastro

    printf("\n\nDeseja buscar alguma empresa cadastrada? Digite [S] se sim ou [N] para finalizar o programa: ");
    fflush(stdin);
    scanf("%c",&resposta_2);
    if (resposta_2 == 'S'){
        printf("\nDigite o codigo da empresa a ser buscada: ");
        fflush(stdin);
        scanf("%i",&empresa.numeros.codigo[51]);
        while (empresa.numeros.codigo[51] != empresa.numeros.codigo[contador_2]){
            contador_2 = contador_2 - 1;//O contador ir� diminuindo de valor at� encontrar o c�digo correspondente
        }
        if (empresa.numeros.codigo[51] == empresa.numeros.codigo[contador_2]){
            printf("\n---Informacoes da empresa---");
            printf("\nCodigo da empresa: %i", empresa.numeros.codigo[contador_2]);
            printf("\nNome fantasia: %s", empresa.caracteres.nomeFantasia);
            printf("\nAtividade da empresa: %s", empresa.caracteres.atividade[contador_2]);
            printf("\nRua: %s", empresa.endereco.rua[contador_2]);
            printf("\nNumero: %i", empresa.endereco.num_endereco[contador_2]);
            printf("\nBairro: %s", empresa.endereco.bairro[contador_2]);
            printf("\nCidade: %s", empresa.endereco.cidade[contador_2]);
            printf("\nEstado: %s", empresa.endereco.estado[contador_2]);
            printf("\nNumero de funcionarios: %i", empresa.num_funcionario[contador_2]);
            printf("\nData de abertura da empresa: %i/%i/%i", empresa.numeros.dia[contador_2], empresa.numeros.mes[contador_2], empresa.numeros.ano[contador_2]);
        }
    }
    return 0;
}
