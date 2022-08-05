#include <stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Diagnol elements are ");
    int count=0;
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0){
                count++;
            }
            if(i<j){
                sum+=arr[i][j];

            }
            if(i==j){
                printf("%d ",arr[i][j]);
            }
        }
    }

    printf("\nThe number of zero in matrix is %d",count);
    printf("\nThe sum of number above diagnol in matrix is %d\n",sum);


    // Row major form 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // Column major form 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }




    return 0;
}