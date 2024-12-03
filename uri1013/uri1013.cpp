#include <iostream>

int a, b, c, maior1, maiorF;

int main() 
{
    scanf("%d %d %d", &a, &b, &c);

    maior1 = ((a + b) + abs(a - b)) / 2;
    
    maiorF = ((maior1 + c) + abs(maior1 - c)) / 2;

    printf("%d eh o maior\n", maiorF);

    return 0;
}
