#include <stdio.h>

int main(int argc, char* argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);
if(x > y)
printf("y = %d\n", y);
else
  printf("x = %d\n", x);
  if(x < y)
   printf("y = %d\n", y);
else
  printf("x = %d\n", x);
   if(x == y)
   printf("x == y%d\n");
else
  printf("%d\n",0);
  return 0;
    }
