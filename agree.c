#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Prompt user to agree
    char C = get_char("Do you agree bro?\n");

    // Check whether agreed
    if (C == 'Y' || C == 'y')
    {
        printf("Agreed.\n");
    }
    if (C == 'N' || C == 'n')
    {
        printf("Not agreed.\n");
    }
}