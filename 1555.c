#include <stdio.h>

int main() {
    int n;    // número de tentativas
    int i;
    int x, y;
    int Rafael, Beto, Carlos;

    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        scanf("%d", &x);
        scanf("%d", &y);

        Rafael = (3 * x) * (3 * x) + (y * y);
        Beto = 2 * (x * x) + (5 * y) * (5 * y);
        Carlos = -(100 * x) + (y * y * y);

        if (Rafael > Beto) {
            if (Rafael > Carlos) {
                printf("Rafael ganhou\n");
            }
        }

        if (Beto > Rafael) {
            if (Beto > Carlos) {
                printf("Beto ganhou\n");
            }
        }

        if (Carlos > Rafael) {
            if (Carlos > Beto) {
                printf("Carlos ganhou\n");
            }
        }
    }

    return 0;
}
