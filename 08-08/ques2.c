// WAP to create one array dynamically (user will tell the size of the array at run
// time) and do the following operations. (use functions and switch case)
// i. Input the element to the array
// ii. Insert the element at a specified position (User will give the element and
// position)
// iii. Insert at beginning (User will give the element)
// iv. Insert at end (User will give the element use realloc() to increase the size)

#include <stdio.h>
#include <stdlib.h>
void insertbeg(int n,int *arr,int num){
    arr=realloc(arr,n+1*sizeof(int));
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=num;

}
void insertend(int n,int *arr,int num){
    arr=realloc(arr,n+1*sizeof(int));
    arr[n]=num;

}
void insertpos(int n,int *arr,int pos,int num){
    arr=realloc(arr,n+1*sizeof(int));
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;

}


int main(){
    int n;
    printf("Enter the size of the  array : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter  the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    
    int pos,num;
    printf("Enter the index and the element you want to insert : ");
    scanf("%d%d",&pos,&num);
    insertpos(n,p,pos,num);
    n++;
    
    //inserting at the beginning;
    int num2;
    printf("Enter the number that you wanna insert at the beginning ");
    scanf("%d",&num2);
    insertbeg(n,p,num2);
    n++;
    // inserting at the end;
    int num3;
    printf("Enter the number that you wanna insert at the end ");
    scanf("%d",&num3);
    insertend(n,p,num3);
    n++;


    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}