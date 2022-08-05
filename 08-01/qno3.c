// Write a program to store employee’s information as name, gender, department,
// basic pay, gross pay using one array of structure where gross pay is not the user
// input. Calculate the gross pay using the following formula &amp; assign the value in
// the individual employee’s gross pay entry.
// Gross Pay = basic pay + HR + DA
// Where HR=25% of basic
// DA= 75% of basic
#include <stdio.h>
struct employee{
    char name[20];
    char gender[6];
    char department[20];
    int basic_pay;
    int gross_pay;
};

int main(){
    int n;
    printf("Enter the number of employee");
    scanf("%d",&n);
    struct employee s[n];
    for(int i=0;i<n;i++){
        printf("Enter the name of the employee:");
        scanf("%s",s[i].name);
        printf("Enter the gender of the employee:");
        scanf("%s",s[i].gender);
        printf("Enter the department of the employe:");
        scanf("%s",s[i].department);
        printf("Enter the basicpay of the employee:");
        scanf("%d",&s[i].basic_pay);
        int hr=0.25*s[i].basic_pay;
        int da=0.75*s[i].basic_pay;
        s[i].gross_pay=s[i].basic_pay+hr+da;
        printf("The gross pay of the employee is %d",s[i].gross_pay);



    }

    

}