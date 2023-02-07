#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
int main(int argc, char* argv[])
{
    printf("x?\n");
    int x[10];
    scanf("%d", x);
    printf("y?\n");
    int y[10];
    scanf("%d", y);
    int z = *x+*y;
    printf("z = %d\n", z);
    return 0;
}


