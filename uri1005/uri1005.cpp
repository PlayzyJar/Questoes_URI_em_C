#include <iostream>

static float A, B, M;

int main() 
{
    scanf("%f", &A);
    scanf("%f", &B);

    M = (A*3.5 + B*7.5) / 11;

    printf("MEDIA = %.5f\n", M);

    return 0;
}