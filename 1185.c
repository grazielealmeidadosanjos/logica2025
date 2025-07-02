#include <stdio.h>
int main() {
    double M[12][12], soma = 0.0;
    char op;
    int i, j, contador = 0;

    scanf(" %c", &op);  // Espaço antes de %c para evitar erro de leitura

    // Leitura da matriz 12x12
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (i + j < 11){
                soma += M[i][j];
                contador++;
            }
        }
    }

    if (op == 'S') {
        printf("%.1lf\n", soma);
    } else if (op == 'M') {
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}
