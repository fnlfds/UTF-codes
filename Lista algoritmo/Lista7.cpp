#include<stdio.h>
float conta1(float C){
    float F;
    F = (9*C/5)+32;
    return F;
}

float conta2(float F){
    float C;
    C = (5*(F-32))/9;
    return C;
}

int main(){
    int i = 4;
    float C, F, res;
    while (i != 0){
        printf("\n1-Converter um valor de Celsius para Farenheit\n2-Converter um valor de Farenheit para Celsius\n0-Sair");
        printf("\nDigite um numero: ");
        scanf("%i",&i);
        if (i == 1){
            printf("Digite o valor em Celsius: ");
            scanf("%f",&C);
            res = conta1(C);
            printf("O valor em Farenheit e: %.2f\n", res);
        }
        if (i == 2){
            printf("Digite o valor em Farenheit: ");
            scanf("%f",&F);
            res = conta2(F);

            printf("O valor em Celsius e: %.2f\n", res);
        }
    }
    return 0;
}
