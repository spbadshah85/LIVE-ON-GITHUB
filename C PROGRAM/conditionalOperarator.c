#include<stdio.h>
int main(){
    int age;
    printf("Please enter your age :");
    scanf("%d",&age);
    (age>=18)? printf("your are eligible for voting"):printf("your are not eligible for voting");
    return 0;
}