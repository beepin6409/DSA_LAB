// WAP to arrange first half of the array in ascending order and second half of the
// array in descending order. (Use function call).

#include <stdio.h>
#include <stdlib.h>

void ascfunc(int b,int *p){
    int iteration=1;
    while(iteration<b){
        for(int i=0;i<b-iteration;i++){
            if(*(p+i)>*(p+i+1)){
                int temp=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=temp;
            }
        }
        iteration++;
    }
}
void desfunc(int n,int *p){
    int iteration=1;
    while(iteration<n){
        for(int i=0;i<n-iteration;i++){
            if(*(p+i)<*(p+i+1)){
                int temp=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=temp;
            }
        }
        iteration++;
    }
}
int main(){
    int n;
    printf("Enter the number of elements in an array ");
    scanf("%d",&n);
    int *aptr=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",(aptr+i));
    }
    int b=n/2;
    ascfunc(b,aptr);
    desfunc(b,aptr+b);



   
    // printf("\nThe array formed after ascending the half of the element and descending the half of the element is : ");
    for(int i=0;i<n;i++){
        printf("%d ",*(aptr+i));
    }
    return 0;




}

