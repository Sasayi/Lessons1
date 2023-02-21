#include <stdio.h>

int main(int argc, char* argv[])
{
    int N;
    int i=1;
    scanf ("%d", &N);
     while (i*i < N)
    {
    printf(" %d", i*i);
    i=i+1;
       //i=i+1; ++i; i++
    }
    return 0;
}
