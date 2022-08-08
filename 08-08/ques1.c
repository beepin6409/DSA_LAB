// 1. Write a program to store the ’n’ employee information as follows
// i. Name (Name should have fname, mname and lname and use structure within
// structure)
// ii. DoB (Date should have DD, MM, YYYY and use structure within structure)
// iii. Account number
// iv. Balance

#include <stdio.h>

struct employee{
    struct name{
        char fname[20];
        char mname[20];
        char lname[20];

    }n;
    struct dob{
        int dd;
        int mm;
        int yy;
    }d;
    int ac_no;
    int balance;
};
int main(){
    int n;
    printf("Enter the number of employee ");
    scanf("%d",&n);
    struct employee s[n];
    for(int i=0;i<n;i++){
        printf("Enter the first ,middle and last name of the employee ");
        scanf("%s",s[i].n.fname);
        scanf("%s",s[i].n.mname);
        scanf("%s",s[i].n.lname);
        printf("Enter the dob of the employee in dd mm yy ");
        scanf("%d%d%d",&s[i].d.dd,&s[i].d.mm,&s[i].d.yy);
        printf("Enter the account number :");
        scanf("%d",&s[i].ac_no);
        printf("Enter the balance : ");
        scanf("%d",&s[i].balance);
    }

    for(int i=0;i<n;i++){
        printf("\n");
        if(s[i].balance<200){
            printf("Employee with less than 200");
            printf("Employee Name : %s %s %s\n",s[i].n.fname,s[i].n.mname,s[i].n.lname);
            printf("DOB : %d/%d/%d\n",s[i].d.dd,s[i].d.mm,s[i].d.yy);
            printf("A/C NO : %d\n",s[i].ac_no);
            printf("Balance : %d\n",s[i].balance);
            printf("\n\n");
        }
        if(s[i].balance>1000){
            s[i].balance+=100;
            printf("Employee with more than 1000");
            printf("Employee Name : %s %s %s\n",s[i].n.fname,s[i].n.mname,s[i].n.lname);
            printf("DOB : %d/%d/%d\n",s[i].d.dd,s[i].d.mm,s[i].d.yy);
            printf("A/C NO : %d\n",s[i].ac_no);
            printf("Balance : %d\n",s[i].balance);
            printf("\n\n");

        }
    }



}
