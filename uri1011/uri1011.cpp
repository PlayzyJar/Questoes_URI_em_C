#include <iostream>
#include <math.h>

double r, pi, vol;

int main() 
{
    scanf("%lf", &r);

    pi = 3.14159;
    vol = (4.0/3) * pi * pow(r, 3) ;   

    printf("VOLUME = %.3lf\n", vol);

    return 0;
}