#include <iostream>

char name;
double slF, mont;

int main() {
    scanf("%s", &name);
    scanf("%lf", &slF);
    scanf("%lf", &mont);

    printf("TOTAL = R$ %.2lf\n", slF+(mont*0.15));

    return 0;
}