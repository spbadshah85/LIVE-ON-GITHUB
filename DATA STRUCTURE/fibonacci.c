#include<stdio.h>
int fib(int n){
    if(n==1)
        return 1;
    if(n==0)
        return 0;

    return (fib(n-1)+fib(n-2));
}

int main(){
    int n;
    printf("Please enter a number of term  : ");
    scanf("%d",&n);
    printf(" fibonacci value : %d ",fib(n));
    return 0;
}