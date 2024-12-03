#include <iostream>

int n, ano, mes, rest;

int main() {
    scanf("%d", &n);

    ano = n / 365;
    rest = n - ano * 365;

    mes = rest / 30;
    rest -= mes * 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", rest);
}