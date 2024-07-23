#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's X?\n");
    int y = get_int("What's Y?\n");

    if (x < y)
    {
        printf("X is less than Y\n");
    }
    else if (x > y)
    {
        printf("X is more than Y\n");
    }
    else
    {
        printf("X is equals than Y\n");
    }
}