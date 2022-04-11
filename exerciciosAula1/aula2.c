#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = 10;
    b = a + 1;
    c = b + 1;
    d = c + 1;
    a = b = c = d = 20;
    printf("\nQual o sera o valor das variaveis: %d\t", a);

    /**/

    char escolha;
    escolha = a;
    escolha = escolha + 1;
    printf("\nvalor do ANSI do A: %d\t", escolha);
}