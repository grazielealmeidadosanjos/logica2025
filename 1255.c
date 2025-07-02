#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N,a;
    scanf("%d", &N);


    for (int a = 0; a < N; a++) {
        char linha[1001];
        fflush(stdin);
        scanf(" %[^\n]",linha);

        int freq[26] = {0};
        int max = 0;
        
        int tamanho=strlen(linha)-1;

        for (int i = 0; i<=tamanho; i++) {
            if (isalpha(linha[i])) {
                char c = tolower(linha[i]);
                freq[c - 'a']++;
                if (freq[c - 'a'] > max) {
                    max = freq[c - 'a'];
                }
            }
        }

    
        for (int i = 0; i < 26; i++) {
            if (freq[i] == max) {
                printf("%c", i + 'a');
            }
        }

        printf("\n");
    }

    return 0;
}
