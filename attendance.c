#include<stdio.h>
#include<cs50.h>
int main()
{
    int total= get_int("Enter total number of classes: ");
    int attended = get_int("Enter your addended classes number: ");
    float attendance = (attended * 100.0) / total;

    if (attendance >= 75)
    {
        printf("Allowed to sit in exam\n");
    }
    else
    {
        printf("Not allowed\n");
        int required = (0.75 * total);
        if ((0.75 * total) > required)
        {
            required++;
        }

        int more_needed = required - attended;

        printf("You needed to attend %d more classes to reach 75%%\n", more_needed);
    }
}

