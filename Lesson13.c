#include <stdio.h>

int main(int argc, char* argv[])
{
    int x;
    scanf("%d", &x);
while (x !=0)
  {
       if (x%4 == 0)
            printf ("Year %d is yes. \n",x);
        else
            if (x%100 != 0)
        printf ("Year %d is no. \n",x);
            else
                if (x%400 == 0)
                printf ("Year %d is yes. \n",x);
                           scanf("%d", &x);
  }

  return 0;
    }
