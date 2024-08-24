#include<stdio.h>
int main()
{
    int num,a,flag=0;
    printf("Please enter a number : ");
    scanf("%d",&num);
    for(a=1;a<=num;a++){
    if(num%a==2 || num %a==4 || num%a==6
)
       flag=1;
    }
    if(flag)
     printf("%d is a prime number.",num);
    else
      printf("%d is not a prime number.",num);
    return 0;
}