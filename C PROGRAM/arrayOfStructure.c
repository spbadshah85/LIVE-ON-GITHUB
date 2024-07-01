#include<stdio.h>
struct students{
    char name[50];
    int rollnumber;
    char address[50];
    char course[4];
};
int main(){
    struct students stu[10];
    int i;
    for (i=0;i<10;i++){
        printf("Please enter details of student %d : ",i+1);
        printf("\nEnter student name : ");
        gets(stu->name);
        printf("please enter the roll number : ");
        scanf("%d",stu->rollnumber);
        printf("please enter the address : ");
        fflush(stdin);
        gets(stu->address);
        printf("please enter the course : ");
        gets(stu->course);
    }
    for(i=0;i<10;i++){
        printf("\nDetails of student %d : ",i+1);
        printf("\nStudent name : %s ",stu->name);
        printf("\nRoll number : %d ",stu->rollnumber);
        printf("\nAddress : %s",stu->address);
        printf("\n Course  : %s  ",stu->course);

    }
    return 0;
}