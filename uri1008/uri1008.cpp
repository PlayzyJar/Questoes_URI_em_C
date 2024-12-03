#include <iostream>

int n, qtdH;
float hT;

int main()
{
    scanf("%d", &n);
    scanf("%d", &qtdH);
    scanf("%f", &hT);

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", qtdH*hT);

    return 0;
}