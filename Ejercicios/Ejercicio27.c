#include <stdio.h>
#include <math.h>

void imprimir_potencias_de_dos(int n) {
    int exponente = 0;
    int potencia = 1;

    while (exponente <= n) {
        printf("2^%d = %d\n", exponente, potencia);
        exponente++;
        potencia *= 2;
    }
}

int main() {
    int n;

    printf("Ingrese un número entero n: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }

    imprimir_potencias_de_dos(n);

    return 0;
}
