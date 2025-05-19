
// Multiplicaciíon entre matrices
#include <stdio.h>

#define max 10
int i,j,k;


int main() {
    int matrizA[max][max];
    int matrizB[max][max];
    int matrizResultado[max][max];

    int filasA, columnasA;
    int filasB, columnasB;

    printf("Introduce el numero de filas de la Matriz A: ");
    scanf("%d", &filasA);
    printf("Introduce el numero de columnas de la Matriz A: ");
    scanf("%d", &columnasA);

    if (filasA <= 0 || filasA > max || columnasA <= 0 || columnasA > max) {
        printf("Dimensiones invalidas para la Matriz A.\n");
        return 1; // Terminar con error
    }

    printf("\nMatriz A:\n");
    leerMatriz(matrizA, filasA, columnasA);

    printf("\nIntroduce el numero de filas de la Matriz B: ");
    scanf("%d", &filasB);
    printf("Introduce el numero de columnas de la Matriz B: ");
    scanf("%d", &columnasB);

    if (filasB <= 0 || filasB >  max|| columnasB <= 0 || columnasB > max) {
        printf("Dimensiones invalidas para la Matriz B \n");
        return 1; 
    }

    printf("\nMatriz B:\n");
    leerMatriz(matrizB, filasB, columnasB);

    if (columnasA != filasB) {
        printf("\nError: No se pueden multiplicar las matrices. El número de columnas de la Matriz A (%d) no coincide con el número de filas de la Matriz B (%d) \n", columnasA, filasB);
        return 1; 
    }

    multiplicarMatrices(matrizA, filasA, columnasA, matrizB, filasB, columnasB, matrizResultado);

   
    if ( columnasA ==  filasB) {
        printf ("\n");
        imprimirMatriz (matrizResultado, filasA, columnasB);
    }

    return 0; 
}
void leerMatriz(int matriz[][max], int filas, int columnas) {
    printf("Introduce los elementos de la matriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}


void imprimirMatriz(int matriz[][max], int filas, int columnas) {
    printf("Matriz resultante:\n");
    for (i = 0; i < filas; i++) {
        for ( j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}


void multiplicarMatrices(int matrizA[][max], int filasA, int columnasA,
                         int matrizB[][max], int filasB, int columnasB,
                         int matrizResultado[][max]) {

    if (columnasA != filasB) {
        printf("Error: El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz para poder multiplicarlas.\n");
        return; 
    }


    for ( i = 0; i < filasA; i++) {
        for ( j = 0; j < columnasB; j++) {
            matrizResultado[i][j] = 0;
        }
    }


    for ( i = 0; i < filasA; i++) { 
        for (j = 0; j < columnasB; j++) {
            for (k = 0; k < columnasA; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}




