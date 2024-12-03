#include <iostream>
#include <math.h>

float dist, a1, b1, a2, b2;

int main() 
{
    scanf("%f %f", &a1, &b1);
    scanf("%f %f", &a2, &b2);

    dist = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));

    printf("%.4f\n", dist);

    return 0;
}