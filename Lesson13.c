#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    int x;

    x = (-1 > 1) + (1 <= -1);

    printf("x = %d\n", x);
    int y;

    y = (10 > -3) + (-3 <= 10);

    printf("y = %d\n", y);
    return 0;
}
