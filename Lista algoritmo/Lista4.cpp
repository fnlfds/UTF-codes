#include<stdio.h>
float calcular(float C){
    float F;
    F = (9*C/5) + 32;
    return F;
}
int main(){
    float F, C, resposta;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f",&C);
    resposta = calcular(C);
    printf("O valor em Farenheit e %.2f e em Celsius e %.2f", resposta, C);
    return 0;
}
