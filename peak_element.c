#include <stdio.h>

int findPeak(int arr[], int n)
{
    int peak = arr[0];
    int index = 0;

    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
        {
            peak = arr[i];
            index = i;
            break;
        }
    }

    return index;
}

int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeak(arr, n);
    printf("The peak element is: %d\n", arr[peakIndex]);

    return 0;
}
