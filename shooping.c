#include <stdio.h>
#include <cs50.h>

int main()
{
    float price;
    float total = 0;
    while (true)
    {
        price = get_float("Enter product price (0 to stop): ");
        if (price == 0)
        {
            break;
        }
        total += price;
    }

    float discount;
    if (total > 2000)
    {
        discount = total * 0.15;
    }
    else
    {
        discount = total * 0.05;
    }

    float final_total = total - discount;

    printf("Total bill before discount: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final bill after discount: %.2f\n", final_total);
}
