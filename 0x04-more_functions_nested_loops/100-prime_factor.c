#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
    long factor, largest_factor;

    factor = 2;
    largest_factor = 0;

    while (n > 1)
    {
        if (n % factor == 0)
        {
            n /= factor;
            largest_factor = factor;
        }
        else
        {
            factor++;
        }
    }

    return largest_factor;
}

int main(void)
{
    long number = 612852475143;
    long largest_prime = largest_prime_factor(number);

    printf("%ld\n", largest_prime);

    return 0;
}
