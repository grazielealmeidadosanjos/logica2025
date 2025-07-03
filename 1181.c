#include <stdio.h>

int main() {
    char T; // S ou M
    double Matriz[12][12];
    double soma, media;
    int L, i, j, g; // 0 <= L <= 11
    soma = 0;

    scanf("%d", &L);
    if (0 <= L && L <= 11) {
        scanf(" %c", &T);
        for (j = 0; j < 12; j++) {
            for (g = 0; g < 12; g++) {
                scanf("%lf", &Matriz[j][g]);
            }
        }
        if (T == 'M') {
            for (i = 0; i < 12; i++) {
                soma = Matriz[L][i] + soma;
            }
            media = soma / 12;
            printf("%.1lf\n", media);
        }
        if (T == 'S') {
            for (i = 0; i < 12; i++) {
                soma = Matriz[L][i] + soma;
            }
            printf("%.1lf\n", soma);
        }
    }

    return 0;
}

