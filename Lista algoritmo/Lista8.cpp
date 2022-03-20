#include<stdio.h>
float salario_N(float salario_antigo){
    float salario_novo;
    salario_novo = (110.67 * salario_antigo)/100;
    return salario_novo;
}

float perda_S(float resultado_salario, float salario_antigo){
    float perda;
    perda = resultado_salario - salario_antigo;
    return perda;
}
int main(){
    float salario_antigo, resultado_salario, resultado_perda;
    printf("Digite seu salario:R$");
    scanf("%f",&salario_antigo);
    resultado_salario = salario_N(salario_antigo);
    resultado_perda = perda_S(resultado_salario, salario_antigo);
    printf("O salario esperado com reajuste e: R$%.2f", resultado_salario);
    printf("\nA perda aquisitiva em um ano sem reajuste foi de: R$%.2f", resultado_perda);
    return 0;
}
