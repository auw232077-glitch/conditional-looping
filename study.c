#include <stdio.h>
#include <cs50.h>

int main()
{
    float hours;
    float total = 0;
    int below_count = 0;
    for (int i = 1; i <= 7; i++)
    {
        hours = get_float("Enter study hours for day %d: ", i);
        total = total + hours;

        if (hours < 2)
        {
            below_count++;
        }
    }

    float average = total / 7;
    printf("Total hours: %.2f\n", total);
    printf("Average hours: %.2f\n", average);
    printf("Days below 2 hours: %d\n", below_count);
}
