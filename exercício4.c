/*Implemente um algoritmo computacional em linguagem de programação C que receba como
entrada o raio (r) de um círculo, sendo que o círculo está em um quadrado, conforme a figura abaixo.
O algoritmo deve calcular a área em cinza, a área do círculo, a área do quadrado, o perímetro do
quadrado, apresentando os resultados dos cálculos para o usuário.*/

#include<stdio.h>
int main(){
    float raio, area_cinza, area_circulo, area_quadrado, p_quadrado;
    printf("----Calculo raio----\n\n");
    printf("Insira o valor do raio do circulo: ");
    scanf("%f",&raio);
    area_circulo = 3.14 * raio * raio;
    area_quadrado = 4 * raio * raio;
    p_quadrado = 8 * raio;
    area_cinza = (area_quadrado - area_circulo) / 4;
    printf("\nO valor da area em cinza e: %.2f", area_cinza);
    printf("\nO valor da area do circulo e: %.2f", area_circulo);
    printf("\nO valor da area do quadrado e: %.2f", area_quadrado);
    printf("\nO valor do perimetro do quadrado e: %.2f", p_quadrado);
    return 0;
}
