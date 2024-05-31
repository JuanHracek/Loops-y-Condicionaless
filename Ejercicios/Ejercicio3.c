#include <stdio.h>
#include <math.h>

int main() {
  double x, y, angle;

  x = 1.0;
  y = 1.0;

  angle = atan2(y, x) * 180 / M_PI;

  printf("El ángulo del vector (%.1f, %.1f) es: %.1f grados\n", x, y, angle);

  return 0;
}