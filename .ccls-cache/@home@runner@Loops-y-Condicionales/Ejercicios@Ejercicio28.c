#include <stdio.h>
#include <math.h>

int main() {
  int n, i, potencia = 1;
  printf("Ingrese un entero positivo: ");
  scanf("%d", &n);

  // Encontrar la potencia de 2 más grande que entra en n
  while (potencia <= n) {
    potencia *= 2;
  }
  potencia /= 2;

  // Imprimir la representación binaria
  printf("La representación binaria de %d es: ", n);
  while (potencia > 0) {
    if (n >= potencia) {
      printf("1");
      n -= potencia;
    } else {
      printf("0");
    }
    potencia /= 2;
  }
  printf("\n");

  return 0;
}