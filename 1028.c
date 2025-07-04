#include <stdio.h>

int mdc(int F1, int F2){ //F1 e F2 são os números de figurinhas
    if (F2 == 0){
        return F1;
    }
    else{
        return mdc(F2, F1 % F2);
    }
}

int main()
{
    int N,i, F1,F2; 
    scanf("%d", &N);
    for(i=0;i<N; i++){
        scanf("%d %d", &F1, &F2);
        int resultado = mdc(F1,F2);
        printf("%d\n", mdc(F1, F2));
    }
    return 0;
}
