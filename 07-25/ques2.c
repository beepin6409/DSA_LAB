// Write a program to find the maximum number of consecutive elements present in
// ascending order.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int consecutive =1;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            consecutive++;
        }
        else{
            consecutive=0;
        }

        if(consecutive>max){
            max=consecutive;
        }
    }
    printf("the maximum number of consecutive elements present in ascending order is %d",max);


    return 0;
}