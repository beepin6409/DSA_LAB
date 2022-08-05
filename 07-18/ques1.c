#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int *aptr=arr;
    int min=__INT32_MAX__;
    int max=0;
    for(int a=0;a<10;a++){
        if(*(aptr+a)>max){
            max=*(aptr+a);

        }
        if(*(aptr+a)<min){
            min=*(aptr+a);
        }
    }
    

    printf("The minimum number is %d \nThe maximum number is %d",min,max);
    

    return 0;
}