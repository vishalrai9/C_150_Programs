#include<stdio.h>

void main(){
    int arr[100][100], r, c;
    printf("Enter rows and colums");
    scanf("%d%d", &r, &c);
    for(int i = 0; i<r;i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i<r;i++){
        for(int j=0; j<c; j++){
            if(i==j){
                printf("%d\n", arr[i][j]);
            }
        }
    }
}



