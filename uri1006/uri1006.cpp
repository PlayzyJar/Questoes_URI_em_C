#include <iostream>

static float A, B, C, M;

int main() 
{
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    M = (A*2 + B*3 + C*5) / 10;

    printf("MEDIA = %.1f\n", M);

    return 0;
}