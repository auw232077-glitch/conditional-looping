#include<stdio.h>
#include<cs50.h>
int main()
{
    int age = get_int("Enter your age: ");
    int day = get_int("Enter day type (1 = weekend, 0 = weekday): ");
    if (age < 10)
    {
        printf("Ticket price: 60\n");
    }
    else
    { if (age >= 10 && age <= 25)
        {
            if (day == 0)
            {
                printf("Ticket price: 100\n");
            }
             else
            {
                printf("Ticket price: 120\n");
            }
        }
        else
        {
            if (age > 25)
               {
                if (day == 0)
                {
                    printf("Ticket price: 140\n");
                }
                else
                {
                    printf("Ticket price: 160\n");
                }
            }
        }
    }
}

