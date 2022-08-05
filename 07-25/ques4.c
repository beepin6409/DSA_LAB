// displaying triangular matrices

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>0 && j>0 && i+j>=5){
                printf("%d",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                printf("%d",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<4 && j<4 && i+j<4){
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }


        return 0;
    }