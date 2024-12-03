#include <iostream>

double total;
int cedulas, pennies, newPen, newCed;

int main() 
{
    scanf("%lf", &total);

    cedulas = total;
    pennies = (total - cedulas) * 100;

    /*Cedulas*/
    
    printf("NOTAS:\n");
    
    printf("%d nota(s) de R$ 100.00\n", cedulas / 100);
    newCed = cedulas - cedulas / 100 * 100;
    
    printf("%d nota(s) de R$ 50.00\n", newCed / 50);
    newCed -= newCed / 50 * 50;
    
    printf("%d nota(s) de R$ 20.00\n", newCed / 20);
    newCed -= newCed / 20 * 20;
    
    printf("%d nota(s) de R$ 10.00\n", newCed / 10);
    newCed -= newCed / 10 * 10;
    
    printf("%d nota(s) de R$ 5.00\n", newCed / 5);
    newCed -= newCed / 5 * 5;

    printf("%d nota(s) de R$ 2.00\n", newCed / 2);
    newCed -= newCed / 2 * 2;

    /*Pennies*/
    
    printf("MOEDAS:\n");
    
    printf("%d moeda(s) de R$ 1.00\n", newCed);
    
    printf("%d moeda(s) de R$ 0.50\n", pennies / 50);
    newPen = pennies - pennies / 50 * 50;
    
    printf("%d moeda(s) de R$ 0.25\n", newPen / 25);
    newPen -= newPen / 25 * 25;

    printf("%d moeda(s) de R$ 0.10\n", newPen / 10);
    newPen -= newPen / 10 * 10;
    
    printf("%d moeda(s) de R$ 0.05\n", newPen / 5);
    newPen -= newPen / 5 * 5;

    printf("%d moeda(s) de R$ 0.01\n", newPen / 1);
}