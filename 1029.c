#include <stdio.h>
int calls=0 ;

int fib(int n){
    calls++;
    if (n==0) return 0;
    if (n==1) return 1;
    return fib(n-1) + fib (n-2);
}

int main() {
    int n, N, i; 
    scanf("%d", &N);
    for(i=N; i>0; i--){
        scanf("%d", &n);
        calls = -1;
        printf("fib(%d) = %d calls = %d", n, calls, fib(n));
    }
    return 0;
}
