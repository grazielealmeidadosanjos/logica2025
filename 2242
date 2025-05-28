#include <stdio.h>
#include <string.h>


int main() {
    char risada[51], vogais[51];
    int i, j = 0, tamanho;

    scanf("%s", risada);
    tamanho= strlen(risada)-1;

    for (i = 0; i<=tamanho; i++) {
        if ((risada[i]=='a')||(risada[i]=='e')||(risada[i]=='i')||(risada[i]=='o')||(risada[i]=='u')) {
            vogais[j] = risada[i];
            j++;
        }
    }



    printf("%s", vogais);
    
    
    
    
    
    int inicio = 0;
    int fim = j - 1;
    int engracada = 1;

    while (inicio < fim) {
        if (vogais[inicio] != vogais[fim]) {
            engracada = 0;
        
        }
        inicio++;
        fim--;
    }

    if (engracada)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
