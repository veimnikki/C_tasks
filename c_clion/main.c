#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    srand(time(NULL));
    d = rand() % 900 + 100;
    printf("%d\n", d);
    a = d / 100;
    b = (d % 100 -  d % 10) / 10;
    c = d % 10;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", a + b + c);
    printf("%d", a * b * c);
    return 0;
}
