#include <stdio.h>
#define pi 3.14159

void triangulo(double A, double C){
    double area;
    area = (A*C)/2;
    printf("TRIANGULO: %.3lf\n", area);
}

void circulo(double C){
    double area; 
    area = pi * (C*C);
    printf("CIRCULO: %.3lf\n", area);
    
}

void trapezio(double A, double B, double C){
    double area;
    area = ((A + B)*C)/2;
    printf("TRAPEZIO: %.3lf\n", area);
}

void quadrado(double B){
    double area;
    area = B*B;
    printf("QUADRADO: %.3lf\n", area);
}

void retangulo(double A, double B){
    double area;
    area = A*B;
    printf("RETANGULO: %.3lf\n", area);
    
}

int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangulo(A,C);
    circulo(C);
    trapezio(A,B,C);
    quadrado(B);
    retangulo(A,B);
    return 0;
}
