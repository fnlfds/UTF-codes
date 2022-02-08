/*Uso da diretiva de compila��o #include para adicionar o
arquivo stdio.h com fun��es de entrada e sa�da de dados*/

#include<stdio.h>

//Procedimento para c�lculo de caracteres num�ricos

void calculaNumero(char palavra[101]){
    int soma = 0;
    int n;//Contador

    for(n = 0; palavra[n] != '\0'; n++){
        if (palavra[n] == '0')
            soma = soma + 1;
        if (palavra[n] == '1')
            soma = soma + 1;
        if (palavra[n] == '2')
            soma = soma + 1;
        if (palavra[n] == '3')
            soma = soma + 1;
        if (palavra[n] == '4')
            soma = soma + 1;
        if (palavra[n] == '5')
            soma = soma + 1;
        if (palavra[n] == '6')
            soma = soma + 1;
        if (palavra[n] == '7')
            soma = soma + 1;
        if (palavra[n] == '8')
            soma = soma + 1;
        if (palavra[n] == '9')
            soma = soma + 1;
    }
    printf("Numero de caracteres numericos: %i", soma);
}

//Fun��o para o c�lculo das letras

int calculaLetra(char palavra[101]){
    int soma = 0;
    int n;//Contador

    for(n = 0; palavra[n] != '\0'; n++){
        if(palavra[n] == 'a')
            soma = soma + 1;
        if(palavra[n] == 'A')
            soma = soma + 1;
        if(palavra[n] == 'b')
            soma = soma + 1;
        if(palavra[n] == 'B')
            soma = soma = 1;
        if(palavra[n] == 'c')
            soma = soma + 1;
        if(palavra[n] == 'C')
            soma = soma + 1;
    }
    return soma;
}

//Fun��o principal

int main(){
    int resposta_letra = 0;
    char palavra[101];

    printf("---Calculo de caracteres especificos---\n");
    printf("\nDigite uma palavra :");
    scanf("%s",&palavra);
    calculaNumero(palavra);//Chamada do procedimento
    resposta_letra = calculaLetra(palavra);//Chamada da fun��o
    printf("\nNumero de caracteres [a], [b], [c[, [A], [B], [C]: %i", resposta_letra);
    return 0;
}
