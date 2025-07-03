#include <stdio.h>

int main() {
    int N;
    double n1, n2, n3, media;

    scanf("%d", &N);
    do {
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        media = (2 * n1 + 3 * n2 + 5 * n3) / 10.0;
        printf("%.1lf\n", media);
        N = N - 1;
    } while (N > 0);

    return 0;
}

