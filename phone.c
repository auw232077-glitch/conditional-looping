#include <stdio.h>
#include <cs50.h>

int main()
{
    int battery_percentage = get_int("Enter your phone battery percentage: ");
    int charger = get_int("Enter if your charger is connected (1 for yes, 0 for no): ");

    if (battery_percentage < 20 && charger == 0)
    {
        printf("Connect charger immediately\n");
    }
    else if (battery_percentage >= 20 && battery_percentage <= 80)
    {
        printf("Battery level normal\n");
    }
    else if (battery_percentage > 80 && charger == 1)
    {
        printf("Unplug charger to save battery health\n");
    }
}
