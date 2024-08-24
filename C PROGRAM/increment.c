#include<stdio.h>
int main(){
    int a=4,b=2,c=0;
    a=c++;
    a=a+b++;
    printf("a= %d",a);
    return 0;
}