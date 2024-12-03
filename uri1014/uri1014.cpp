#include <iostream>

int x;
float y, consumoMedio; 

int main() 
{
    scanf("%d", &x);
    scanf("%f", &y);

    consumoMedio = x / y;

    printf("%.3f km/l\n", consumoMedio);

    return 0;
}