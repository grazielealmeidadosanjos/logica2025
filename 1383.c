#include <stdio.h>

//int matriz[9][9];
int matriz[9][9] = {
    {6,8,2,9,4,7,5,1,3},
    {3,1,4,6,2,5,7,9,8},
    {9,7,5,8,3,1,4,6,2},
    {2,5,7,3,8,6,9,4,1},
    {1,4,6,7,9,2,3,8,5},
    {8,9,3,1,5,4,6,2,7},
    {7,6,9,2,1,3,8,5,4},
    {4,2,8,5,7,9,1,3,6},
    {5,3,1,4,6,8,2,7,9}
};

int PegarLinha(int numerodalinha) {
    int i;
    for (i = 0; i < 9; i++) {
        do {
            scanf("%d", &matriz[numerodalinha][i]);
        } while ((matriz[numerodalinha][i] > 9) || (matriz[numerodalinha][i] < 1));
        //printf(" %d-%d--%d ", numerodalinha, i, matriz[numerodalinha][i]);
    }
}

int LinhasDiferentes(int linha) {
    int quantidade[9] = {0};
    for (int i = 0; i < 9; i++) {
        int numero = matriz[linha][i];
        quantidade[numero - 1]++;
        printf("%d,%d", numero, quantidade[numero - 1]);
        if (quantidade[numero - 1] > 1) {
            return 0; // Linha inválida (número repetido)
        }
    }
    return 1; // Linha válida
}

int ColunasDiferentes(int coluna) {
    int quantidade[9] = {0};
    for (int i = 0; i < 9; i++) {
        int numero = matriz[i][coluna];
        quantidade[numero - 1]++;
        printf("%d,%d", numero, quantidade[numero - 1]);
        if (quantidade[numero - 1] > 1) {
            return 0; // Coluna inválida (número repetido)
        }
    }
    return 1; // Coluna válida
}

int QuadrantesDiferentes(int quadrante) {
    int quantidade[9] = {0};
    int i, j;

    if (quadrante == 1) {
        i = 0; j = 0;
    }
    if (quadrante == 2) {
        i = 0; j = 3;
    }
    if (quadrante == 3) {
        i = 0; j = 6;
    }
    if (quadrante == 4) {
        i = 3; j = 0;
    }
    if (quadrante == 5) {
        i = 3; j = 3;
    }
    if (quadrante == 6) {
        i = 3; j = 6;
    }
    if (quadrante == 7) {
        i = 6; j = 0;
    }
    if (quadrante == 8) {
        i = 6; j = 3;
    }
    if (quadrante == 9) {
        i = 6; j = 6;
    }

    for (int a = 0; a < 9; a++) {
        int numero = matriz[i][j];
        quantidade[numero - 1]++;
        printf("%d,%d", numero, quantidade[numero - 1]);

        if (quantidade[numero - 1] > 1) {
            return 0; // Quadrante inválido (número repetido)
        }

        if (j == 2) {
            j = 0;
            i++;
            j--;
        }

        if (j == 5) {
            j = 3;
            i++;
            j--;
        }

        if (j == 8) {
            j = 6;
            i++;
            j--;
        }

        j++;
    }

    return 1; // Quadrante válido
}

int main() {
    //PegarLinha(0);
    //PegarLinha(1);
    //PegarLinha(2);
    //PegarLinha(3);
    //PegarLinha(4);
    //PegarLinha(5);
    //PegarLinha(6);
    //PegarLinha(7);
    //PegarLinha(8);

    if (LinhasDiferentes(0)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(1)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(2)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(3)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(4)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(5)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(6)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(7)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (LinhasDiferentes(8)) {
        printf("Certo");
    } else {
        printf("Errado");
    }

    if (ColunasDiferentes(0)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(1)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(2)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(3)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(4)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(5)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(6)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(7)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (ColunasDiferentes(8)) {
        printf("Certo");
    } else {
        printf("Errado");
    }

    if (QuadrantesDiferentes(1)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(2)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(3)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(4)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(5)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(6)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(7)) {
        printf("Certo");
    } else {
        printf("Errado");
    }
    if (QuadrantesDiferentes(8)) {
        printf("Certo");
    } else {
        printf("Errado");
    }

    return 0;
}
