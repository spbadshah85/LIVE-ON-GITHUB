#include<stdio.h>
#include<string.h>
void swap(char *x,char *y);
void permutation (char *s ,int i, int n){
    static int count;int j;
    if(i==n){
        count++;
        printf("(%d) %s \n",count,s);

    }else {
        for(j=i;j<=n;j++)
        {
            swap((s+i),(s+j));
            permutation(s,i+1,n);
            swap((s+i),(s+j));
        }
    }
}

void swap(char *x,char *y){
    char ch;
    ch =*x;
    *x=*y;
    *y=ch;
}
int main(){
    char *str;
    printf("Enter a strings : ");
    gets(str);
    permutation(str,0,strlen(str)-1);
    return 0;
}