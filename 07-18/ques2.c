#include <stdio.h>

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<2;i++){
        temp=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
        
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }



}