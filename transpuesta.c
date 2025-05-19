#include <stdio.h>
#define MAX 30

int darnumero();
int dimenumero();
void guardaDatos(float arreglo[][MAX], int fila, int col);
void transpuestaMatriz(float arreglo[][MAX], int fila, int col);

int main() {
    int fila, col;

    printf("¿Cuántas filas? ");
    fila = darnumero();
    printf("¿Cuántas columnas? ");
    col = dimenumero();

    float matriz[fila][col];

    printf("Ingrese los datos para la matriz:\n");
    guardaDatos(matriz, fila, col);

    printf("\nLa matriz transpuesta es:\n");
    transpuestaMatriz(matriz, fila, col);

    return 0;
}

int darnumero() {
    int numero;
    scanf("%d", &numero);
    return numero;
}

int dimenumero() {
    int numero;
    scanf("%d", &numero);
    return numero;
}

void guardaDatos(float arreglo[][MAX], int fila, int col) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < col; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &arreglo[i][j]);
        }
    }
}

void transpuestaMatriz(float arreglo[][MAX], int fila, int col) {
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < fila; i++) {
            printf("%.2f\t", arreglo[i][j]);
        }
        printf("\n");
    }
}

