#include<stdio.h>
long factorial (int n){
    if(n>0){
        return (n * factorial(n-1));

    }else
    return 1;
}

int main(){
    int n;
    printf("please enter a number :");
    scanf("%d",&n);
    printf("factorial  : %ld",factorial(n));

    return 0;
}