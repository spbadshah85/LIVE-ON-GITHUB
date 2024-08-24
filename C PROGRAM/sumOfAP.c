#include<stdio.h>
int main()
{
    // series = 1+4+7+10+13
    int d =3,term=4 ,sum;
    int a= 1;
    sum = (term/2)*(2*a +(term-1)*d);
    printf("Sum : %d",sum);

    return 0;
}