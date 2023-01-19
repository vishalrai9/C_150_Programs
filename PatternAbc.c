#include<stdio.h>

void main(){
    char ch = 'A';
    for(int i = 1; i<=5; i++){
        for(int j = 0; j<=i-1; j++){
            printf("%c", ch+j);
        }
        printf("\n");
    }
}