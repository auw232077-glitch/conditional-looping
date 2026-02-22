#include <stdio.h>
#include <cs50.h>

int main()
{
    int type = get_int("Enter user type (1=Admin, 2=Teacher, 3=Student): ");
    int password = get_int("Enter password: ");

    if (type == 1)
    {
        if (password == 1234)
        {
            printf("Welcome Admin Panel\n");
        }
        else
        {
            printf("Invalid password\n");
        }
    }
    else
    {
        if (type == 2)
        {
            if (password == 2222)
            {
                printf("Welcome Teacher Panel\n");
            }
            else
            {
                printf("Invalid password\n");
            }
        }
        else
        {
            if (type == 3)
            {
                if (password == 3333)
                {
                    printf("Welcome Student Panel\n");
                }
                else
                {
                    printf("Invalid password\n");
                }
            }
            else
            {
                printf("Invalid user type\n");
            }
        }
    }
}
