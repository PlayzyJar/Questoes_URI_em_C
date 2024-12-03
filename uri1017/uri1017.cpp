#include <iostream>

float horas, dist;

int main() 
{
    scanf("%f %f", &horas, &dist);

    printf("%.3f\n", dist / 12 * horas);
}