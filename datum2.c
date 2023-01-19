#include<stdio.h>
void main(){
    int n =12;
    int d, count=0, num = n, len=0;
    while(n!=0){
        len++;
        n=n/10;
    }
    n=num;
    for(int i=1; i<=len; i++){
        d = n%10;
        if(num%d==0){
            count++;
        }
        n=n/10;
    }
    printf("%d", count);
}