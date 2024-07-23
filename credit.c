#include <cs50.h>
#include <stdio.h>
#include <math.h>

long get_number(void);
int get_num_digits(long number);
void check_digits(long number);
int digit;
int num_digits = 1;


int main(void)
{
    long number = get_number();
    int numDigits = get_num_digits(number);
    check_digits(number);
}

long get_number(void)
{
    long number = get_long("Number: ");
    return number;
}

int get_num_digits(long number)
{
    do
    {
        number /= 10;
        num_digits += 1;
    }
    while (number > 10);
    return num_digits;
}

void check_digits(long number)
{
    for (int i = 1; i < num_digits; i++)
    {
        printf("%i\n", num_digits);

        int power = i;
        if (power == 1)
        {
            digit = number % 10;
        }
        else
        {
            digit = ( (number % (long)(pow(10, power))) - (long)(number % (pow(10, (power - 1)))) ) / (long)(pow(10, power)) ;
        }
        printf("Digit %i: %i\n", power, digit);
    }
}