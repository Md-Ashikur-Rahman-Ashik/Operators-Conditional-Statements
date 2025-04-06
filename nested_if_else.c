#include <stdio.h>

int main()
{
    int money;

    printf("Enter an amount of money : ");
    scanf("%d", &money);

    if (money >= 5000)
    {
        printf("I will go to Cox's Bazar.\n");

        if (money >= 10000)
        {
            printf("I will also go to Saint Martin Island.\n");
        }
        else
        {
            printf("I will return from Cox's Bazar without visiting Saint Martin Island\n");
        }
    }
    else
    {
        printf("I won't go anywhere.\n");
    }

    return 0;
}