#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    int x;

    x = (-1 > 1) + (1 <= -1);

    printf("x = %d\n", x);

    return 0;
}
