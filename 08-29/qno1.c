// 1. WAP to create the LL where the user will give the option for insertion for each element . 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;

};

struct node * insert_beg(struct node *p,int item){
    struct node*  abc=(struct node *)malloc(sizeof(struct node));
    abc->data=item;
    abc->next=p;
    return abc;
}

struct node * insert_end(struct node *p,int item){
    struct node *a=p;
    while(a->next!=NULL){
        a=a->next;

    }
    struct node*  abc=(struct node *)malloc(sizeof(struct node));
    abc->data=item;
    abc->next=NULL;
    a->next=abc;

    return p;

}

struct node * insertAtIndex(struct node *head, int data, int index){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


int main(){
    struct node *start;
    start=(struct node *)malloc(sizeof(struct node));

    int n;
    printf("Enter the number of nodes that you want in a linked list : ");
    scanf("%d",&n);

    printf("Enter the elements of linked list : ");
    scanf("%d",&(start->data));
    start->next=NULL;
    struct node *ptr;
    ptr=start;

    for(int i=0;i<n-1;i++){
       struct node*  abc=(struct node *)malloc(sizeof(struct node));
       scanf("%d",&(abc->data));
       abc->next=NULL;
       ptr->next=abc;
       ptr=abc;
    }

    int m;
    printf("\nHow many times you want to insert the element : ");
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        n++;
        int opt,data;
        printf("\nEnter the index where you wanna insert the element : ");
        printf("\n 1 for beginning \n %d for end\n",n);
        scanf("%d",&opt);
        printf("\nEnter the data you want to insert : ");
        scanf("%d",&data);

            if(opt==1){
            start=insert_beg(start,data);
            }
            else if(opt==n){
                start=insert_end(start,data);
            }
            else if(0<opt && opt< n-1){
                start=insertAtIndex(start,data,opt-1);
            }
    }



    struct node *a=start;
    printf("\n\n\nFinal LL is : \n\n");
    while(a!=NULL){
        printf("%d ",a->data);
        a=a->next;

    }
    printf("\n\n");

    return 0;
}
