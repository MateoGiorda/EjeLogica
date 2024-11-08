#include <stdio.h>

// Función para calcular la superficie de un terreno dado sus lados
float calcularSuperficie(float lado1, float lado2) {
    return lado1 * lado2;
}

int main() {
    FILE *metroFile;
    float precio_metro, lado1, lado2, superficie, valor_lote;
    char continuar;

    // Abrir el archivo "metro.txt" para leer el precio del metro cuadrado
    metroFile = fopen("metro.txt", "r");
    if (metroFile == NULL) {
        printf("Error: No se pudo abrir el archivo metro.txt\n");
        return 1;
    }
    fscanf(metroFile, "%f", &precio_metro);
    fclose(metroFile);

    do {
        // Solicitar los lados del terreno al usuario
        printf("Ingresa el valor del primer lado del terreno (en metros): ");
        scanf("%f", &lado1);
        printf("Ingresa el valor del segundo lado del terreno (en metros): ");
        scanf("%f", &lado2);

        // Calcular la superficie del terreno usando la función
        superficie = calcularSuperficie(lado1, lado2);

        // Calcular el valor del lote
        valor_lote = superficie * precio_metro;
        printf("La superficie del terreno es: %.2f metros cuadrados\n", superficie);
        printf("El valor del lote es: %.2f\n", valor_lote);

        // Preguntar al usuario si desea continuar
        printf("¿Deseas cotizar otro lote? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Sistema cerrado.\n");
    return 0;
}

