// #include <stdio.h>

// int main()
// {
//     double num1 = 15 / 4;
//     printf("%lf", num1);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num1 = 6;

//     if (num1 > 5)
//     {
//         printf("Hi");
//     }
//     else if (num1 > 3)
//     {
//         printf("Bye");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     if (num <= 1)
//     {
//         printf("Please enter a number starting from 2");
//     }
//     else if (num % 2 == 0)
//     {
//         printf("%d is an even number", num);
//     }
//     else
//     {
//         printf("%d is an odd number", num);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is a negative number", num);
    }
    else if (num > 0)
    {
        printf("%d is a positive number", num);
    }
    else
    {
        printf("%d is neither a positive nor a negative number", num);
    }
    return 0;
}