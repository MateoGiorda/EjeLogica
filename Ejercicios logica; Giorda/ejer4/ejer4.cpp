#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *dolarFile, *cajaFile;
    float valor_dolar, dolares, importe;
    
    // Abrir el archivo "dolar.txt" para leer el valor del dólar
    dolarFile = fopen("dolar.txt", "r");
    if (dolarFile == NULL) {
        printf("Error: No se pudo abrir el archivo dolar.txt\n");
        return 1;
    }
    fscanf(dolarFile, "%f", &valor_dolar);
    fclose(dolarFile);

    // Abrir el archivo "caja.txt" para registrar las operaciones
    cajaFile = fopen("caja.txt", "a");
    if (cajaFile == NULL) {
        printf("Error: No se pudo abrir el archivo caja.txt\n");
        return 1;
    }

    while (1) {
        // Solicitar la cantidad de dólares a comprar
        printf("Ingresa la cantidad de dolares a comprar (0 para cerrar el sistema): ");
        scanf("%f", &dolares);

        // Verificar si se debe cerrar el sistema
        if (dolares == 0) {
            break;
        }

        // Calcular el importe a pagar en pesos
        importe = dolares * valor_dolar;
        printf("El importe a pagar en pesos es: %.2f\n", importe);

        // Obtener la fecha y hora actual
        time_t now = time(NULL);
        struct tm *fechaHora = localtime(&now);

        // Registrar la operación en caja.txt
        fprintf(cajaFile, "Fecha y hora: %02d-%02d-%04d %02d:%02d:%02d, Cantidad de USD: %.2f, Importe abonado: %.2f\n",
                fechaHora->tm_mday, fechaHora->tm_mon + 1, fechaHora->tm_year + 1900,
                fechaHora->tm_hour, fechaHora->tm_min, fechaHora->tm_sec,
                dolares, importe);
    }

    // Cerrar el archivo de caja
    fclose(cajaFile);

    printf("\nSistema cerrado.\n");
    return 0;
}

