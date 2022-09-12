//  WAP to create one array dynamically and do the following operations. (use
// functions and switch case)
// i. Input the element to the array
// ii. Delete the element at a specified position (User will give the position)
// iii. Delete the specified element (User will give the element, consider the array
// may have similar elements)
// [Note: let specified element is 5 &amp; element 5 is present 3 times, then delete all the
// occurrence of 5 &amp; reduce the size of array by 3.]
// iv. Delete from the beginning

#include <stdio.h>
#include<stdlib.h>

void delete_beg(int n,int *p){
    for(int i=0;i<n;i++){
        p[i]=p[i+1];
    }
    p=realloc(p,(n-1)*sizeof(int));
}


void delete_pos(int n,int *p,int pos){
    for(int i=pos-1;i<n;i++){
        p[i]=p[i+1];
    }
    p=realloc(p,(n-1)*sizeof(int));
}


void delete_ele(int n,int *p,int ele,int index){
    for(int i=index;i<n;i++){
        p[i]=p[i+1];
    }
    p=realloc(p,(n-1)*sizeof(int));
}


int main(){
    int n;
    printf("Enter the number of elements in an array : ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of an array :"); 
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    int pos;
    printf("Enter the position where you want to delete ");
    scanf("%d",&pos);

    delete_pos(n,arr,pos);
    n--;

    int element;
    printf("Enter the element you want to delete : ");
    scanf("%d",&element);
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            delete_ele(n,arr,element,i);
            i--;
            count++;

        }
    }
    n=n-count;

    delete_beg(n,arr);
    n--;

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;

}