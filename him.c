#include <stdio.h>

void main()
{
    int arr[] = {1, 6, 2, 4, 5, 9, 7, 3}, max2, max;
    max2 = max = arr[0];
    for (int i = 1; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        if(arr[i]>max2 && arr[i]< max){
            max2 = arr[i];
        }
    }
    printf("Max = %d\nMax2 = %d", max, max2);
}