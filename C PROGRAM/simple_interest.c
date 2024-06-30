#include<stdio.h>
int main(){
    float si,p,t,r;
    printf("enter principle amount : ");
    scanf("%f",&p);
    printf("\nenter loan duration in months : ");
    scanf("%f",&t);
    printf("\nenter rate of  interest in monthly : ");
    scanf("%f",&r);
    si= (p*t*r)/100;
    printf("\nthe simple interest : %f ",si);

    return 0;
}