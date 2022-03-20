#include<stdio.h>
float calcular(float num1, float num2){
    float num_maior;
    if (num1 > num2){
        num_maior = num1;
    }
    else{
        num_maior = num2;
    }
    return num_maior;
}
int main(){
    float num1, num2, num_maior;
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    num_maior = calcular(num1, num2);
    printf("O maior numero e: %.2f", num_maior);
    return 0;
}
