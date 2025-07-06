#include <stdio.h>
#include <string.h>

char* matriz[9][9] = {
    {"10","3","2","5","7","*","4","6","8"},
    {"4","9","8","2","6","1","3","A","5"},
    {"7","5","P","3","8","4","2","1","9"},
    {"P","4","3","1","5","8","7","9","2"},
    {"5","2","1","7","9","10","8","4","6"},
    {"9","8","A","4","2","6","5","3","1"},
    {"2","1","4","9","3","a","P","P","7"},
    {"3","6","10","8","1","7","*","2","4"},
    {"8","7","9","6","4","2","1","5","3"}
};

int LinhasDiferentes(int linha) {
    char* vistos[9];
    int contagens[9] = {0};
    int total = 0;

    for (int i = 0; i < 9; i++) {
        int repetido = 0;
        for (int j = 0; j < total; j++) {
            if (strcmp(vistos[j], matriz[linha][i]) == 0) {
                contagens[j]++;
                repetido = 1;
                printf("%s,%d", matriz[linha][i], contagens[j]);
                return 0;
            }
        }
        if (!repetido) {
            vistos[total] = matriz[linha][i];
            contagens[total] = 1;
            printf("%s,%d", matriz[linha][i], contagens[total]);
            total++;
        }
    }
    return 1;
}

int ColunasDiferentes(int coluna) {
    char* vistos[9];
    int contagens[9] = {0};
    int total = 0;

    for (int i = 0; i < 9; i++) {
        int repetido = 0;
        for (int j = 0; j < total; j++) {
            if (strcmp(vistos[j], matriz[i][coluna]) == 0) {
                contagens[j]++;
                repetido = 1;
                printf("%s,%d", matriz[i][coluna], contagens[j]);
                return 0;
            }
        }
        if (!repetido) {
            vistos[total] = matriz[i][coluna];
            contagens[total] = 1;
            printf("%s,%d", matriz[i][coluna], contagens[total]);
            total++;
        }
    }
    return 1;
}

int QuadrantesDiferentes(int quadrante) {
    int i, j;
    if (quadrante == 1) { i = 0; j = 0; }
    if (quadrante == 2) { i = 0; j = 3; }
    if (quadrante == 3) { i = 0; j = 6; }
    if (quadrante == 4) { i = 3; j = 0; }
    if (quadrante == 5) { i = 3; j = 3; }
    if (quadrante == 6) { i = 3; j = 6; }
    if (quadrante == 7) { i = 6; j = 0; }
    if (quadrante == 8) { i = 6; j = 3; }
    if (quadrante == 9) { i = 6; j = 6; }

    char* vistos[9];
    int contagens[9] = {0};
    int total = 0;

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            char* valor = matriz[i + a][j + b];
            int repetido = 0;
            for (int k = 0; k < total; k++) {
                if (strcmp(vistos[k], valor) == 0) {
                    contagens[k]++;
                    repetido = 1;
                    printf("%s,%d", valor, contagens[k]);
                    return 0;
                }
            }
            if (!repetido) {
                vistos[total] = valor;
                contagens[total] = 1;
                printf("%s,%d", valor, contagens[total]);
                total++;
            }
        }
    }
    return 1;
}

int main() {
    if (LinhasDiferentes(0)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(1)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(2)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(3)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(4)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(5)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(6)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(7)) { printf("Certo"); } else { printf("Errado"); }
    if (LinhasDiferentes(8)) { printf("Certo"); } else { printf("Errado"); }

    if (ColunasDiferentes(0)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(1)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(2)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(3)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(4)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(5)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(6)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(7)) { printf("Certo"); } else { printf("Errado"); }
    if (ColunasDiferentes(8)) { printf("Certo"); } else { printf("Errado"); }

    if (QuadrantesDiferentes(1)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(2)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(3)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(4)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(5)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(6)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(7)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(8)) { printf("Certo"); } else { printf("Errado"); }
    if (QuadrantesDiferentes(9)) { printf("Certo"); } else { printf("Errado"); }

    return 0;
}
