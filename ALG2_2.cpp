#include<stdio.h>
int lerIdade(){
    int idade;
    printf("Digite a idade: ");
    scanf("%i",&idade);
    return idade;
}

int calcularAno(int x){//pode ser qualquer nome, como idade
    int ano;
    ano = 2022 - x;
    return ano;
}

void apresentar(int ano){//n�o retorna nenhum valor
    printf("O seu ano de nascimento e: %i", ano);
}

int main(){
    int idade, ano;
    idade = lerIdade();
    ano = calcularAno(idade);// a vari�vel a ser exportada vai dentro do parenteses
    apresentar(ano);
    return 0;
}
