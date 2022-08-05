//  WAP to take all odd numbers to the first part and all even numbers to the secondpart of the array (Use function call)

#include<stdio.h>
void func(int *a){
    int o=0,e=9;
    int temp[10];
    for(int i=0;i<10;i++){
        temp[i]=*(a+i);
    }

    for(int i=0;i<10;i++){
        if(temp[i]%2==1){
            *(a+o)=temp[i];
            o++;
        }
        else{
            *(a+e)=temp[i];
            e--;

        }
    }
}

int main(){
    int arr[10]={2,31,12,45,6,71,29,31,19,25};
    int *aptr=arr;
    func(aptr);

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);

    }



    return 0;
}