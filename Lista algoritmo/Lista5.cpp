#include<stdio.h>

float calcular(float F){
    float C;
    C = (5*(F-32))/9;
    return C;
}
int main(){
    float F, C, resposta;
    printf("Digite uma temperatura em Farenheit: ");
    scanf("%f",&F);
    resposta = calcular(F);
    printf("O valor em Celsius e: %.2f", resposta);
    return 0;
}
