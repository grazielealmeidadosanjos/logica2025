#include <stdio.h>

//int matriz[9][9];
int matriz[9][9] = {{1,3,2,5,7,9,4,6,8},
{4,0,8,2,6,1,3,7,5},
{7,5,6,3,8,4,2,1,9},
{6,4,3,0,5,8,7,9,2},
{5,2,1,7,9,3,8,4,6},
{9,8,7,4,2,6,5,3,0},
{2,1,4,9,3,5,6,8,7},
{3,6,5,8,1,7,9,2,4},
{8,7,0,6,4,2,0,5,3}};


// Conta os números de 1 a 9 presentes na linha
void contar_quantidade(int linha, int coluna, int quantidade[9]) {
    if (coluna == 9) return;
    int numero = matriz[linha][coluna];
    if (numero >= 1 && numero <= 9) {
        quantidade[numero - 1]++;
    }
    contar_quantidade(linha, coluna + 1, quantidade);
}

// Preenche os zeros com números faltantes
void preencher_zeros(int linha, int coluna, int quantidade[9]) {
    if (coluna == 9) return;
    if (matriz[linha][coluna] == 0) {
        for (int k = 0; k < 9; k++) {
            if (quantidade[k] == 0) {
                matriz[linha][coluna] = k + 1;
                quantidade[k] = 1;
                break;
            }
        }
    }
    preencher_zeros(linha, coluna + 1, quantidade);
}

// Aplica para todas as linhas
void preencher_linhas(int linha) {
    if (linha == 9) return;
    int quantidade[9] = {0};
    contar_quantidade(linha, 0, quantidade);
    preencher_zeros(linha, 0, quantidade);
    preencher_linhas(linha + 1);
}




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
        //printf("%d,%d", numero, quantidade[numero - 1]);
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
        //printf("%d,%d", numero, quantidade[numero - 1]);
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
        //printf("%d,%d", numero, quantidade[numero - 1]);

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

        
preencher_linhas(0);

    // Exibe a matriz
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


