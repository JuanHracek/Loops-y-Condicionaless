#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, i;
  long long factorial = 1;

  if (argc != 2) {
    printf("Uso: %s <numero>\n", argv[0]);
    return 1;
  }

  n = atoi(argv[1]);

  if (n < 0) {
    printf("Error: El número debe ser mayor o igual a cero.\n");
    return 1;
  }

  if (n == 0) {
    factorial = 1;
  } else {
    for (i = 1; i <= n; i++) {
      factorial *= i;
    }
  }

  printf("El factorial de %d es: %lld\n", n, factorial);

  return 0;
}