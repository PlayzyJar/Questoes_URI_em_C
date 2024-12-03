#include <iostream>

int total, newTotal;

int main() 
{
    scanf("%d", &total);

    printf("%d\n", total);
    
    printf("%d nota(s) de R$ 100,00\n", total / 100);
    newTotal = total - (total / 100) * 100;

    printf("%d nota(s) de R$ 50,00\n", newTotal / 50);
    newTotal -= (newTotal / 50) * 50;

    printf("%d nota(s) de R$ 20,00\n", newTotal / 20);
    newTotal -= (newTotal / 20) * 20;

    printf("%d nota(s) de R$ 10,00\n", newTotal / 10);
    newTotal -= (newTotal / 10) * 10;

    printf("%d nota(s) de R$ 5,00\n", newTotal / 5);
    newTotal -= (newTotal / 5) * 5;

    printf("%d nota(s) de R$ 2,00\n", newTotal / 2);
    newTotal -= (newTotal / 2) * 2;

    printf("%d nota(s) de R$ 1,00\n", newTotal / 1);

    return 0;
}