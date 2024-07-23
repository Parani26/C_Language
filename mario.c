#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_grid(int height);

int main(void)
{
    int height = get_height();
    print_grid(height);
}

int get_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height >= 9 || height <= 0);
    return height;
}

void print_grid(int height)
{
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < (height - j - 1); i++)
        {
            printf(" ");
        }

        for (int k = 0; k < j + 1; k++)
        {
            printf("#");
        }

        {
            printf("  ");
        }

        for (int m = 0; m < j + 1; m++)
        {
            printf("#");
        }

        printf("\n");
    }
    printf("\n");
}