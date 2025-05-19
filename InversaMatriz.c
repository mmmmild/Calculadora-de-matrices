#include <stdio.h>

void imprimeMatriz(float array[2][2]);
float Determinante(float matriz[2][2]);
void Adjunta(float matriz[2][2], float adjunta[2][2]);
int Inversa(float matriz[2][2], float inversa[2][2]);

int main() {
    float matriz[2][2];
    float inversa[2][2];
    
    printf("Dame valores\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz ingresada:\n");
    imprimeMatriz(matriz);
    
    if (Inversa(matriz, inversa)) {
        printf("\nMatriz inversa:\n");
        imprimeMatriz(inversa);
    } else {
        printf("\nLa matriz no tiene inversa (determinante = 0).\n");
    }

    return 0;
}

float Determinante(float matriz[2][2]) {
    float det = (matriz[0][0] * matriz[1][1]) - (matriz[1][0] * matriz[0][1]);
    return det;
}

void Adjunta(float matriz[2][2], float adjunta[2][2]) {
    adjunta[0][0] = matriz[1][1];
    adjunta[0][1] = -matriz[0][1];
    adjunta[1][0] = -matriz[1][0];
    adjunta[1][1] = matriz[0][0];
}

int Inversa(float matriz[2][2], float inversa[2][2]) {
    float det = Determinante(matriz);
    
    if (det == 0) {
        return 0; 
    }
    
    float adjunta[2][2];
    Adjunta(matriz, adjunta);
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            inversa[i][j] = adjunta[i][j] / det;
        }
    }
    
    return 1;
}

void imprimeMatriz(float array[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f\t", array[i][j]);
        }
        printf("\n");
    }
}