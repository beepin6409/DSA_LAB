// In a one dimensional array, user gives a certain range of index with shifting
// value. You need to right shift and rotate those range of values based on the given
// shifting value.
// Given array: 2,9,6,3,5,8,11,3,6,7,13,5
// Given range: 4th index to 9th index(consider the starting index is 0) and shifting
// value is 2
// Output: 2,9,6,3,6,7,5,8,11,3,13,5

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
    int a,b,c;
    printf("Enter thr range and shifting value");
    scanf("%d %d %d",&a,&b,&c);
    int newarr[n];
    for(int i=0;i<n;i++){
        if(i<a || i>b){
            newarr[i]=arr[i];
        }
        else{
            int x=i+c;
            if(x>b){
                x=x-b+a-1;
            }
            newarr[x]=arr[i];


        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",newarr[i]);
    }

    

    return 0;
}
