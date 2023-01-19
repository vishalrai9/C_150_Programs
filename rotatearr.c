#include <stdio.h>

void main()
{
    int nums[] = {1, 2, 3, 4, 5}, len = 7, k = 3;
    while (k--)
    {
        nums[len-1] = nums[0];
        for (int i = 1; i < len; i++)
        {
            int t = nums[len - i - 1];
            nums[len - i - 1] = nums[i+1];
            nums[i+1] = t;
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", nums[i]);
    }
}