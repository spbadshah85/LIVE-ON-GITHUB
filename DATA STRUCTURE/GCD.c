#include<stdio.h>
int gcd(int a ,int b){  //GCD= Greatest Common Devider
    if(a==b)
        return a;
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(a,b%a);
}
int main()
{
    int a,b ;
    printf("please enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf(" GCD of %d and %d is  %d ",a,b,gcd(a,b));
    return 0;
}