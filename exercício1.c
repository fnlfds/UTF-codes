/*Construa um algoritmo computacional utilizando a linguagem de programação C para calcular o
valor financeiro total do IPTU (Imposto Predial Territorial Urbano) de um imóvel e os valores das
parcelas que o proprietário do imóvel deve pagar. O valor do IPTU depende do valor venal de um
imóvel, que é calculado a partir da soma dos valores da área do terreno e da área construída. O valor
do terreno é obtido multiplicando a área do terreno pelo valor R$ 300,00. O terreno sempre tem a
forma de um retângulo. O valor da área construída é obtido multiplicando a área construída por um
valor que depende do tipo do imóvel, conforme a tabela abaixo. Um menu deve ser utilizado para
acessar o tipo do imóvel. O valor do IPTU é 1% do valor venal. O comprimento e a largura do terreno,
a área construída, o tipo do imóvel e o número de parcelas são informados pelo usuário. O número de
parcelas deve ser um valor maior ou igual a 1 e o usuário deve ser informado se o número não é
válido. Se o pagamento for em uma única parcela, calcular 15% de desconto no valor do IPTU. Se o
pagamento for em mais de 5 parcelas, calcular um acréscimo de 10% no valor do IPTU, que deve ser
considerado no cálculo das parcelas. O valor venal, o valor do IPTU e o valor de cada parcela devem
ser informados ao usuário.
O menu deve ter o seguinte layout, em que a primeira letra indica a opção a ser acionada pelo usuário:
Precário
Médio
Bom
Luxo*/

#include<stdio.h>
int main (){
    float comprimento, largura, area, valor_venal, valor_terreno, valor_area, valor_iptu, valor_parcela;
    char  opcao;
    int n_parcelas, valor_referencia;
    printf("----Calculo IPTU----\n\n\n");
    printf("Tipos de imoveis:\n[P]recario\n[M]edio\n[B]om\n[L]uxo\n");
    printf("Escolha o tipo do imovel, informando sua respectiva letra maiuscula: ");
    scanf("%c",&opcao);
    switch(opcao){
    case 'P':
        valor_referencia = 100;
        break;
    case 'M':
        valor_referencia = 300;
        break;
    case 'B':
        valor_referencia = 700;
        break;
    case 'L':
        valor_referencia = 1200;
        break;
    }
    printf("Informe o comprimento do terreno: ");
    scanf("%f",&comprimento);
    printf("Informe a largura do terreno: ");
    scanf("%f",&largura);
    printf("Informe a area construida: ");
    scanf("%f",&area);
    printf("Informe o numero de parcelas: ");
    scanf("%i",&n_parcelas);
    while (n_parcelas <1){
        printf("Valor invalido\nInforme o numero de parcelas: ");
        scanf("%i",&n_parcelas);
        //Enquanto o usuário não informar um valor válido, a mensagem de erro será exibida
    }
    valor_terreno = comprimento * largura * 300;
    valor_area = area * valor_referencia;
    valor_venal = valor_terreno + valor_area;
    valor_iptu = 0.01 * valor_venal;
    if (n_parcelas == 1){
        valor_iptu = valor_iptu * 0.85;
    }
    else if ((n_parcelas > 1)&&(n_parcelas <= 5)){
        valor_iptu = valor_iptu;
    }
    else {
        valor_iptu = valor_iptu * 1.10;
    }
    valor_parcela = valor_iptu / n_parcelas;
    printf("O valor venal e:R$%.2f\n", valor_venal);
    printf("O valor do IPTU a ser pago e:R$%.2f\n", valor_iptu);
    printf("O valor de cada parcela e:R$%.2f", valor_parcela);
    return 0;
}
