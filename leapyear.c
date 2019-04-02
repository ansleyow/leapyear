#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int year = get_int("Enter a year: \n");

    if (year == 0)
    {
        return 1;
    }
    else
    {
         if (year % 4 == 0 )
            {
                printf("Year is a leap year\n");
            }
            else
            {
                if(year % 100 == 0)
                {
                    if (year % 400 == 0)
                    {
                        printf("Year is a leap year\n");
                    }
                    else
                    {
                        printf("Not a leap year\n");
                    }
                }
            }
        }
    return 0;
}