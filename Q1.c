#include <stdio.h>

int main()
{
    int n = 0, switcher = 0;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            for (int j = 1; j <= 2; j++)
            {
                if (j == 2)
                {
                    printf("*");
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            if (switcher == 0)
            {
                printf("*");
                printf("\n");
                switcher = 1;
            }
            else
            {
                for (int j = 1; j <= 3; j++)
                {
                    if (j == 3)
                    {
                        printf("*");
                        printf("\n");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                switcher = 0;
            }
        }
    }
}
/*
Pattern looks like this -> where n is the limit (NUMBER OF LINES) till which we need to print the stars.

*
 *
  *
 *
*
 *
  *
 *
*


*/