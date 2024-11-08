#include <stdio.h>

int main() {
    const float PRECIO_POR_LITRO = 1300.0;
    float litros, importe;
    float total_litros = 0.0, total_recaudado = 0.0;
    int contador_cargas = 0;

    while (1) {
        // Solicitar la cantidad de litros para la carga
        printf("Ingresa la cantidad de litros (0 para cerrar el sistema): ");
        scanf("%f", &litros);

        // Verificar si se debe cerrar el sistema
        if (litros == 0) {
            break;
        }

        // Calcular el importe de la carga actual
        importe = litros * PRECIO_POR_LITRO;
        printf("El importe a pagar es: %.2f\n", importe);

        // Acumular los litros y el importe
        total_litros += litros;
        total_recaudado += importe;
        contador_cargas++;
    }

    // Calcular el promedio de carga
    float promedio_carga = (contador_cargas > 0) ? (total_litros / contador_cargas) : 0;

    // Mostrar los resultados finales
    printf("Resumen de la jornada:\n");
    printf("Total de litros vendidos: %.2f\n", total_litros);
    printf("Total recaudado: %.2f\n", total_recaudado);
    printf("Promedio de litros por carga: %.2f\n", promedio_carga);

    return 0;
}
