// WAP to remove the repeated element of an array 

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
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    
    int newarr[n-count];
    int a=0;
    for(int i=0;i<n;i++){
        int b=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                b=1;
            }

        }
        if(b==0){
            newarr[a]=arr[i];
            a++;
        }
    }

    for(int i=0;i<a;i++){
        printf("%d ",newarr[i]);
    }

    return 0;


    
}