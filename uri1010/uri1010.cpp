#include <iostream>

int qtd1, qtd2, cod1, cod2;
float val1, val2, tot1, tot2;

int main()
{
    scanf("%d %d %f", &cod1, &qtd1, &val1);
    scanf("%d %d %f", &cod2, &qtd2, &val2);

    tot1 = qtd1 * val1;
    tot2 = qtd2 * val2;

    printf("VALOR A PAGAR: R$ %.2f\n", tot1 + tot2);

    return 0;
}