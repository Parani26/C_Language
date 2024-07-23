#include <cs50.h>
#include <stdio.h>


int get_initial(void);
int get_final(int x);
int get_years(int x, int y);

int main(void)
{
    // TODO: Prompt for start size
    int x = get_initial();

    // TODO: Prompt for end size
    int y = get_final(x);

    // TODO: Calculate number of years until we reach threshold
    int n = get_years(x, y);

    // TODO: Print number of years
    printf("Years: %i\n", n);
}

int get_initial(void)
{
    int x;
    do
    {
        x = get_int("Start size: ");
    }
    while (x < 9);
    return x;
}

int get_final(int x)
{
    int y;
    do
    {
        y = get_int("End size: ");
    }
    while (y < x);
    return y;

}

int get_years(int x, int y)
{
    if (x == y)
    {
         return 0;
    }

    else
    {
        int n = 0;
        do
        {
            x = x + (x / 3) - (x / 4);
            n = n + 1;
        }
        while (x < y);
        return n;
    }
}


