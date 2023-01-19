#include<stdio.h>

int sum(int *a, int *b){
    printf("%d\n", *a+*b);
   return 0;
}
int diff(int *a, int *b){
    printf("%d", *a-*b);
   return 0;
}
int main()
{
    int x, y;
    printf("Enter two numbers number: ");
    scanf("%d%d", &x, &y);
    sum(&x, &y);
    diff(&x, &y);
    return 0;
}