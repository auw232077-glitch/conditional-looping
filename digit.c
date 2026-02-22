#include <stdio.h>
#include <cs50.h>

int main()
{
    int num = get_int("Enter a number: ");
    int sum = 0;
    int odd_count = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;   
        sum += digit;

        if (digit % 2 != 0)
        {
            odd_count++;
        }

        num = num / 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Number of odd digits: %d\n", odd_count);
}
