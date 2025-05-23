#include <stdio.h>

#define pf printf 
#define sf scanf 
#define max 30

// Variables globales
int matriz[max][max];
int filas, columnas;
int i, j;

// Inicialización de funciones
void leerMatriz();
int obtenerTraza(int traza);

// Función principal
int main() {
    pf("Ingresa el número de filas: ");
    sf("%i", &filas);
    pf("Ingresa el número de columnas: ");
    sf("%i", &columnas);

    if (filas != columnas) {
        pf("No se puede obtener la traza. La matriz no es cuadrada.\n");
    } else {
        leerMatriz();
        int traza = obtenerTraza(traza);
        pf("La traza de la matriz es: %i\n", traza);
    }

    return 0;
}

// Definición de funciones
void leerMatriz() {
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            pf("Ingresa el elemento [%i][%i]: ", i + 1, j + 1);
            sf("%i", &matriz[i][j]);
        }
    }
}

int obtenerTraza(int traza) {
    traza = 0;
    for (i = 0; i < filas; i++) {
        traza = traza + matriz[i][i];
    }
    return traza;
}
