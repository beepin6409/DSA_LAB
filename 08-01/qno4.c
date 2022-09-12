//  Let one student structure is having following data members.
// a. Roll number (int)
// b. Name (string)
// c. Marks of 5 subjects (array of int)
// d. Percentage of mark (float)
// e. Grade (Char)
// WAP to do the following work (use function)
// i. Take students information (User will give the input for members like roll number,
// name &amp; marks of 5 subjects)
// ii. Find the percentage of mark and grade from the percentage for each student and
// store the value in appropriate student’s data member’s entry.
// iii. Sort


#include <stdio.h>
struct student{
    int roll;
    char name[20];
    int marks[5];
    float percentage;
    char grade;
};


struct student input(struct student s){
    printf("Enter the following inputs \nName:");
    scanf("%s",s.name);
    printf("\nRoll : ");
    scanf("%d",&s.roll);
    printf("\n5 subjects marks : ");
    for(int i=0;i<5;i++){
        scanf("%d",&s.marks[i]);
    }

    return s;
}
struct student calculate(struct student s){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=s.marks[i];
    }
    s.percentage=sum/5.0;
    if(s.percentage>=90){
        s.grade='O';
    }
    else if (s.percentage>=80){
        s.grade='E';
    }
    else if (s.percentage>=70){
        s.grade='A';
    }
    else{
        s.grade='B';
    }

    return s;
    

}
void sort(int n,struct student *s){
    int iteration =1;
    while(iteration<n){
        for(int i=0;i<(n-iteration);i++){
            if(s[i].percentage>s[i+1].percentage){
                struct student temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }

        }
        iteration++;
    }
}


int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        s[i]=input(s[i]);
        s[i]=calculate(s[i]);
    }

    sort(n,s);

    for(int i=0;i<n;i++){
        printf("Name : %s",s[i].name);
        printf("\nRoll : ");
        printf("%d",s[i].roll);
        printf("\n5 subjects marks : ");
        for(int j=0;j<5;j++){
            printf("%d  ",s[i].marks[j]);
        }
        printf("\nPercentage : %.2f ",s[i].percentage);
        printf("\nGrade : %c",s[i].grade);
    


    }

    return 0;
}