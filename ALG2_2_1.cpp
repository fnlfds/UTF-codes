#include<stdio.h>

int pedirNascimento(){
    int nascimento;
    printf("Digite seu ano de nascimento: ");
    scanf("%i",&nascimento);
    return nascimento;
}

int calculaIdade(int nascimento){
    int idade;
    idade = 2022 - nascimento;
    return idade;
}

void apresentar(int idade){
    printf("Sua idade e: %i anos", idade);
}
int main(){
    int nascimento, idade;
    nascimento = pedirNascimento();
    idade = calculaIdade(nascimento);
    apresentar(idade);
    return 0;
}
