#include <stdio.h>

int main(int argc, char* argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);
if(x > y)
printf("%d\n", 1);
else
  if(x < y)
printf("%d\n", 2);
  else
  if(x == y)
   printf("%d\n",0);
  return 0;
    }
