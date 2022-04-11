#include <stdio.h>

int main()
{
    int a, b, c;

    a = b + c;
    b = 1;
    c = b + 1;

    printf("tera um valor aleatorio%d\t", a);

    /**/

    int z = 1;
    char ch = 'A';
    ch = ch + z;
    printf("%d", ch);

    /**/

    int t, y, u;
    u = t-y;
    printf("Entre com dois inteiros:∖n");
    scanf("%d %d", &t, &y);
    printf("A diferença entre %d e %d vale %d∖n", t, y, u);
}