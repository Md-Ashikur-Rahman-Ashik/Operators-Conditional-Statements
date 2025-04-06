#include <stdio.h>

int main()
{
    int money;

    printf("Please enter an amount of money : ");
    scanf("%d", &money);

    if (money >= 100)
    {
        printf("As the amount of money is %d BDT, I will buy a burger.", money);
    }
    else if (money >= 50)
    {
        printf("As the amount of money is %d BDT, I will buy Tomato.", money);
    }
    else if (money >= 20)
    {
        printf("As the amount of money is %d BDT, I will buy Chips.", money);
    }
    else
    {
        printf("As the amount of money is %d BDT, I won't buy a burger", money);
    }

    return 0;
}