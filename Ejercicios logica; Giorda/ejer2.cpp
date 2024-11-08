#include <stdio.h>

int main() {
    float importe, total = 0.0, iva;
    const float TASA_IVA = 0.21;

    // Solicitar el importe de cada comprobante y acumular el total
    for (int i = 1; i <= 5; i++) {
        printf("Ingresa el importe del comprobante %d: ", i);
        scanf("%f", &importe);
        total += importe;
    }

    // Calcular el IVA
    iva = total * TASA_IVA;

    // Mostrar el total a pagar y el importe de IVA
    printf("El total a pagar es: %.2f\n", total);
    printf("El importe de IVA (21%%) es: %.2f\n", iva);

    return 0;
}
