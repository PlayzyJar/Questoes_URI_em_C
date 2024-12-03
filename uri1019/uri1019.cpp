#include <iostream>

int n, h, m, rest;

int main() 
{
    scanf("%d", &n);

    h = n / 3600;
    rest = n - h * 3600;
    
    m = rest / 60;
    rest -= m * 60;

    printf("%d:%d:%d\n", h, m, rest);

    return 0;
}