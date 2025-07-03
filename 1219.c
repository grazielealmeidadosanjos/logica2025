#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double rosas, violetas, triangulo, girassois, circulo;
    const double pi = 3.1415926535897;
    double perimetro;

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        perimetro = (a + b + c) / 2.0;
        triangulo = sqrt(perimetro * (perimetro - a) * (perimetro - b) * (perimetro - c));
        rosas = pi * ((triangulo / perimetro) * (triangulo / perimetro));
        violetas = triangulo - rosas;
        circulo = pi * (((a * b * c) / (4.0 * triangulo)) * ((a * b * c) / (4.0 * triangulo)));
        girassois = circulo - triangulo;
        printf("%.4f %.4f %.4f\n", girassois, violetas, rosas);
    }

    return 0;
}
