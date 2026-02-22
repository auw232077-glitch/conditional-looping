#include <stdio.h>
#include <cs50.h>

int main()
{
    int seat;
    int booked = 0;
    int empty = 0;
    int total_seats = 40;

    for (int i = 1; i <= total_seats; i++)
    {
        seat = get_int("Enter seat %d status (1=booked, 0=empty): ", i);

        if (seat == 1)
        {
            booked++;
        }
        else if (seat == 0)
        {
            empty++;
        }
        else
        {
            printf("Invalid input, enter 1 or 0\n");
            i--;
            continue;
        }
        if (booked == total_seats)
        {
            printf("All seats are booked!\n");
            break;
        }
    }

    printf("Total booked seats: %d\n", booked);
    printf("Total empty seats: %d\n", empty);
}
