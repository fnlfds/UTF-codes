/*Uso da diretiva de compila��o #include para adicionar o arquivo stdio.h
com funcionalidades de entrada e sa�da de dados*/
#include<stdio.h>

//Fun��o principal

int main() {
  int i, n;//Contador e op��o do usu�rio
  int fibonacci[20];
    fibonacci[0] = 1;//Dois primeiros termos da sequencia
    fibonacci[1] = 1;
  printf("Digite o numero de termos da sequencia de Fibonacci menor ou igual a 20 e maior ou igual a 3 :\n");
  scanf("%i",&n);

  while (n < 3 || n > 20) {//Mensagem de erro
    printf("Digite novamente:\n");
    scanf("%i", &n);
  }

  if (n > 3) {//2 primeiros n�meros
    printf("%i %i ", fibonacci[0], fibonacci[1]);
  }

  for (i = 2; i < n; i++) {//Casos restantes
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    printf("%i ", fibonacci[i]);
  }

  return 0;
}
