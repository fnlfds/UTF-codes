/*Uso da diretiva de compila��o #include para
incluir o arquivo stdio.h, com fun��es de entrada e sa�da de dados*/

#include<stdio.h>

//Fun��o principal

int main(){
//Declara��o de vari�veis

    int linha = 0, coluna = 0, matriz[100][100];//Elementos da matriz
    int  vetor[256] = {0};//Zerando o vetor
    int m, n, i, j;//Acess�rios
    int maior = 0;//Maior valor do vetor

    printf("---Imagem Digital ---");
    while(linha < 2 || coluna < 2){//O programa requer que a linha e coluna tenham valores maiores ou iguais a 2
    printf("\nEntre com o valor da linha maior ou igual a 2: ");
    scanf("%i",&linha);
    printf("\nEntre com o valor da coluna maior ou igual a 2: ");
    scanf("%i",&coluna);
    }
    for (m = 0; m < linha; m++){
        for(n=0; n < coluna; n++){
            printf("\nDigite o valor do pixel para a linha %i e coluna %i: ", m + 1, n + 1);
            scanf("%i",&matriz[m][n]);
            vetor[matriz[m][n]] ++;//O vetor armazena o pixel de acordo com seu espa�o
        }
    }
    printf("\n---Niveis de cinza---");
    for (i = 0; i < 256; i++){//Impress�o dos n�veis de cinza
        printf("\nNivel %i : %i encontrado(s)", i, vetor[i]);
    }
    for (j = 0; j < 256; j++){//Busca do maior valor
        if (vetor[j] < vetor[j + 1]){
            vetor[maior] = vetor[j + 1];
            maior = vetor[j+1];
        }
        else{
            vetor[maior] = vetor[j];
            maior = vetor[j];
        }
    }
    if(vetor[maior] > 0){
    printf("\n\nO nivel de cinza com maior quantidade de pixels e: nivel %i com %i pixels", maior, vetor[maior]);
    }
    if(vetor[maior] <= 0)//Caso nenhum n�vel tenha pixels a mais do que os outros
    printf("\n\nNenhum nivel de cinza se sobressai");
    return 0;
}
