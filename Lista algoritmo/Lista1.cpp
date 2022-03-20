#include<stdio.h>
int calcular(int num){
    int resposta;
    if (num % 2 == 0){
        resposta = 0;
    }
    else{
        resposta = 1;
    return resposta;
    }

}
int main(){
    int num, resposta;
    printf("Digite um numero inteiro: ");
    scanf("%i",&num);
    resposta = calcular(num);
    if (resposta == 0){
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }
    return 0;
}
