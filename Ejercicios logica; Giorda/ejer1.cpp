#include <stdio.h>

int main() {
    float num1, num2, suma;

    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    // Calcular y mostrar la suma
    suma = num1 + num2;
    printf("La suma de los dos numeros es: %.2f\n", suma);

    // Determinar y mostrar el número mayor
    if (num1 > num2) {
        printf("El mayor es: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("El mayor es: %.2f\n", num2);
    } else {
        printf("Ambos numeros son iguales.\n");
    }

    return 0;
}

