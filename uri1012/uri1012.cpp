#include <iostream>
#include <math.h>

float A, B, C;
double pi;

int main() 
{
    pi = 3.14159;
    scanf("%f %f %f", &A, &B, &C);
    
    printf("TRIANGULO: %.3lf\n", (A * C) / 2);
    printf("CIRCULO: %.3lf\n", pi * pow(C, 2));
    printf("TRAPEZIO: %.3lf\n", (A + B) * C / 2);
    printf("QUADRADO: %.3lf\n", pow(B, 2));
    printf("RETANGULO: %.3lf\n", A * B);

    return 0;
}