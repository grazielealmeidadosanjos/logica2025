#include <stdio.h>
int main(){
    char O; // S ou M
    double Matriz[12][12];
    double soma, media; 
    int i, j, g, h;
    soma = 0;
   
    scanf(" %c", &O);

    for(j = 0; j < 12; j++) {
        for(g = 0; g < 12; g++) {
            scanf("%lf", &Matriz[j][g]);
        }
    }

    if(O == 'M') {
        for(i = 0; i < 12; i++) {
            for(h = i + 1; h < 12; h++) {
                soma = soma + Matriz[i][h];
            }
        }
        media = soma / 66; // são 66 elementos acima da diagonal
        printf("%.1lf\n", media);
    }

    if(O == 'S') {
        for(i = 0; i < 12; i++) {
            for(h = i + 1; h < 12; h++) {
                soma = soma + Matriz[i][h];
            }
        }
        printf("%.1lf\n", soma);
    }

    return 0;
}
