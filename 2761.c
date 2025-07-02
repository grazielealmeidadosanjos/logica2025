#include <stdio.h>
 
int main() {
    int A;
    float B;
    char C;
    char D[51];
    scanf("%d", &A);
    scanf("%f", &B);
    scanf(" %c", &C);
    scanf(" %[^\n]", D);
    printf("%d%.6f%c%s\n", A, B, C, D);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);
    printf("%d          %.6f          %c          %s\n", A, B, C, D);

    return 0;
}
