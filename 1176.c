#include <stdio.h>
int main()
{
     unsigned long long int T, N, i,b, a2, a1;
     unsigned long long int Fib[61];
     Fib[0]=0;
     Fib[1]=1;
     scanf("%llu", &T);
     for(i=T; i>=1; i--){
          do{
         scanf("%llu", &N);
         } while((N>60)||(N<0));
         if(N == 0){
             printf("Fib(0) = 0\n");
         }
         if(N == 1){
             printf("Fib(1) = 1\n");
         }
         if(N > 1){
             for(b=2;b <=N; b++){
             Fib[b]= Fib[b-1]+Fib[b-2];
             }
         printf("Fib(%llu) = %llu\n",N, Fib[N]);
         }
     }
         return 0;
     }
