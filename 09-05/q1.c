// Wap to take your name character wise where each character should be of one node of the linked list
// Implement the following function :
//   Return the number of vowels
//   Return the number of words
//   Display the odd position character only 

#include <stdio.h>
#include <stdlib.h>

struct node {
    char name;
    struct node *next;
};

void checkVowel(struct node *start){
    struct node *q=start;
    int count=0;
    while(q!=NULL){
        if(q->name=='a' || q->name=='e' ||q->name=='i' ||q->name=='o' ||q->name=='u' ){
            count++;
        }
        q=q->next;
    }

    printf("\nNumber of vowels : %d \n",count);
}
void countWord(struct node *start){
    struct node *q=start;
    int count=0;
    while(q!=NULL){
        if(q->name==' '){
            count++;
        }
        q=q->next;
    }

    printf("Number of word : %d ",count+1);
}
void printOdd(struct node *start){
    struct node *q=start;
    int i=0;
    printf("\nOdd Position Characters are : ");
    while(q!=NULL){
        if(i%2==1){
            printf("%c ",q->name);
        }
        i++;
        q=q->next;
    }
}

int main(){
    struct node *start;
    start=(struct node *)malloc(sizeof(struct node));

    int n;
    printf("Enter the number of character including spaces that you have in your name : ");
    scanf("%d",&n);

    printf("Enter the character of your name :");
    scanf("%c",&(start->name));
    start->next=NULL;
    struct node *ptr;
    ptr=start;

    for(int i=0;i<n;i++){
       struct node*  abc=(struct node *)malloc(sizeof(struct node));
       scanf("%c",&(abc->name));
       abc->next=NULL;
       ptr->next=abc;
       ptr=abc;
    }

    checkVowel(start);
    countWord(start);
    printOdd(start); 

    return 0;
}
    
