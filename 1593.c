#include <stdio.h>
#include <string.h>
int main()
{
    int t;    
    int i;
    int total;
    char x [1024];
    char resultado [1024];
    int resto;
    scanf("%d", &t);
    for(i=t; i>=1; i--)
    {
      scanf("%s", x);
      total = 0;
      do 
      {
        int ni, nlen = strlen(x);
        int resto = 0;
        int valor;
        for (ni = 0; ni < nlen; ni++) {
            valor = resto * 10 + (x[ni] - '0');
            resultado[ni] = (valor / 2) + '0';
            resto = valor % 2;
        }
        resultado[ni] = '\0';
        ni = 0;
        while (resultado[ni] == '0' && resultado[ni + 1] != '\0') ni++;
            if (ni > 0) memmove(resultado, resultado + ni, strlen(resultado) - ni + 1);
            strcpy(x,resultado);
        if (resto == 1)
        {
            total = total + 1;
        }
      }
      while (atoi(x) != 0);
      printf("%d\n", total);
    }  
    return 0;
}
