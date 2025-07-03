#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, i, M, tamanho, a, b, c, d, e;
    char palavra[1000], aux1[1000], aux2[1000], final[1000];
    scanf("%d", &N);
    if (1 <= N && N <= 10000) {
        for (i = N; i > 0; i--) {
            fflush(stdin);
            scanf(" %[^\n]", palavra);
            strcpy(aux1, palavra);
            tamanho = strlen(palavra) - 1;

            for (a = 0; a <= tamanho; a++) {
                if (isalpha(palavra[a]) != 0) {
                    aux1[a] = palavra[a] + 3;
                }
            }

            b = tamanho;
            strcpy(aux2, aux1);

            for (c = 0; c <= tamanho; c++) {
                aux2[c] = aux1[b];
                b--;
            }

            d = (tamanho + 1) / 2;
            strcpy(final, aux2);
            for (e = d; e <= tamanho; e++) {
                final[e] = aux2[e] - 1;
            }

            printf("%s\n", aux1);
            printf("%s\n", aux2);
            printf("%s\n", final);
        }
    }
    return 0;
}

