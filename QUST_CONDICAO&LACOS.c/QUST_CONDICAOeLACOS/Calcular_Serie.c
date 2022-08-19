#include <stdio.h>

double fatorial(double num) {
  int resultado = 1;
  for (int i = 1; i <= num; i++) {
    resultado *= i;
  }
  return resultado;
}

int main() {
  int j, n;
  double s = 0;

  printf("digite um numero inteiro e maior que zero: ");
  scanf("%d", &n);

  for (j = 1; j <= n; j++) {
    s += j / (fatorial(j * 2));
  }
  printf("%lf", s);

  return 0;
}
/*Escreva um programa para calcular o valor da série, para 5 termos: S = 0 + 1/2! +
2/4! + 3/6! + …
*/