#include <stdio.h>

int main() {
  int i = 1000;
  for (i ; i <= 1999; i++){
    if (i % 5 == 0) {
      printf("\n");
    }
    printf("%d ", i);
  }
  return 0;
}
