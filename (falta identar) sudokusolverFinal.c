#include <stdio.h>

int matriz[9][9] = {
    {1,3,2,5,7,9,4,6,8},
    {4,0,8,2,6,1,3,7,5},
    {7,5,6,3,8,4,2,1,9},
    {6,4,3,0,5,8,7,9,2},
    {5,2,1,7,9,3,8,4,6},
    {9,8,7,4,2,6,5,3,0},
    {2,1,4,9,3,5,6,8,7},
    {3,6,5,8,1,7,9,2,4},
    {8,7,0,6,4,2,0,5,3}
};

int LinhasDiferentes(int linha) {
    int quantidade[9] = {0};
    for (int i = 0; i < 9; i++) {
        int numero = matriz[linha][i];
        if (numero == 0) continue;
        quantidade[numero - 1]++;
        if (quantidade[numero - 1] > 1) {
            return 0;
        }
    }
    return 1;
}

int ColunasDiferentes(int coluna) {
    int quantidade[9] = {0};
    for (int i = 0; i < 9; i++) {
        int numero = matriz[i][coluna];
        if (numero == 0) continue;
        quantidade[numero - 1]++;
        if (quantidade[numero - 1] > 1) {
            return 0;
        }
    }
    return 1;
}

int QuadrantesDiferentes(int quadrante) {
    int quantidade[9] = {0};
    int i = 0, j = 0;

    if (quadrante == 1) { i = 0; j = 0; }
    if (quadrante == 2) { i = 0; j = 3; }
    if (quadrante == 3) { i = 0; j = 6; }
    if (quadrante == 4) { i = 3; j = 0; }
    if (quadrante == 5) { i = 3; j = 3; }
    if (quadrante == 6) { i = 3; j = 6; }
    if (quadrante == 7) { i = 6; j = 0; }
    if (quadrante == 8) { i = 6; j = 3; }
    if (quadrante == 9) { i = 6; j = 6; }

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            int numero = matriz[i + a][j + b];
            if (numero == 0) continue;
            quantidade[numero - 1]++;
            if (quantidade[numero - 1] > 1) {
                return 0;
            }
        }
    }
    return 1;
}

int QuadrantePorPosicao(int linha, int coluna) {
    if (linha < 3 && coluna < 3) return 1;
    if (linha < 3 && coluna < 6) return 2;
    if (linha < 3 && coluna < 9) return 3;
    if (linha < 6 && coluna < 3) return 4;
    if (linha < 6 && coluna < 6) return 5;
    if (linha < 6 && coluna < 9) return 6;
    if (linha < 9 && coluna < 3) return 7;
    if (linha < 9 && coluna < 6) return 8;
    return 9;
}

int PosicaoValida(int linha, int coluna) {
    return LinhasDiferentes(linha) &&
           ColunasDiferentes(coluna) &&
           QuadrantesDiferentes(QuadrantePorPosicao(linha, coluna));
}

void MostrarMatriz() {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void Resolver(int linha, int coluna) {
    if (linha == 9) {
        MostrarMatriz();
        return;
    }

    int proxLinha = (coluna == 8) ? linha + 1 : linha;
    int proxColuna = (coluna + 1) % 9;

    if (matriz[linha][coluna] != 0) {
        Resolver(proxLinha, proxColuna);
    } else {
        for (int num = 1; num <= 9; num++) {
            matriz[linha][coluna] = num;
            if (PosicaoValida(linha, coluna)) {
                Resolver(proxLinha, proxColuna);
            }
            matriz[linha][coluna] = 0;
        }
    }
}

int main() {
    Resolver(0, 0);
    return 0;
}

