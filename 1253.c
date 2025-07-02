#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j, cesar;
    char palavra[101];

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%s", palavra);
        scanf("%d", &cesar);  

        for (j = 0; j < strlen(palavra); j++) {
            
            palavra[j] = ((palavra[j] - 'A' - cesar + 26) % 26) + 'A';
        }

        printf("%s\n", palavra);
    }

    return 0;
}
