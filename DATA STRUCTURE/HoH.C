#include<stdio.h>
int TOH (int n, char BEG, char AUX , char END ){
    int static seconds =0;
    
    if(n>=1){
        TOH (n-1, BEG , END , AUX);
        seconds++;    
        printf("%c to %c \n",BEG,END);
        TOH (n-1 , AUX , BEG , END);

    }
    return seconds;
}

int main(){
    int NoOfMove,n;
    printf("Please enter no. of disk :");
    scanf("%d",&n);
    NoOfMove= TOH(n,'A','B','C');
    printf(" No. of moves :  %d",NoOfMove);
    return 0 ; 
}