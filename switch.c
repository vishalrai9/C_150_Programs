#include <stdio.h>

void main()
{
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = num > 0;
    switch (res)
    {
    case 1:
        printf("Game Start");
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("Sorry Number is Negative");
            break;
        case 0:
            printf("Please try again.");
            break;
        }
        break;
    default:
        break;
    }
}