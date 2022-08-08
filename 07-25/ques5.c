#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a,b;
    printf("Enter the index element that you wanna find surrounding sum of : ");
    scanf("%d%d",&a,&b);
    int sum=0;
    for(int i=a-1;i<=a+1;i++){
        for(int j=b-1;j<=b+1;j++){
            if(i<0 || i>=m || j<0 || j>=n ||(i==a && j==b)){
                sum+=0;
            }
            else{
                sum+=arr[i][j];
            }
        }
    }
    printf("\n\n");
    printf("Sum is %d",sum);
    return 0;
}