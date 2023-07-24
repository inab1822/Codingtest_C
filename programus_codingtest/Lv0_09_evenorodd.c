#include <stdio.h>

int main_evenorodd(void) {
    int a;
    scanf_s("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }

    return 0;
}