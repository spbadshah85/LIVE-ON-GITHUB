#include<stdio.h>
int main()
{
    int num,a;
    printf("Please enter a number : ");
    scanf("%d",&num);
    int squre = sqrt(num);
    for(a=2;a<squre;a++)
        if(num%a==0);
        break;
    if(squre != a)
     printf("%d is not a prime number.",num);
    else
      printf("%d is  a prime number.",num);
    return 0;
}