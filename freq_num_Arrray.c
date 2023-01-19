// WAP to count frequency of each element of array.

#include <stdio.h>

void main() {
    int n, i, j, count=0, num;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to count: ");
    scanf("%d", &num);


    for (i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    printf("%d appears %d times in this array.", num, count);
}
