#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,search, m=0,h=10;
    printf("Enter the search value :");
    scanf("%d",&search);
    for ( i = 0; i < h;i++ )
    {
        /* code */
        /*if(arr[m]>search){
        h=m-1;
        }else if (arr[m]<search)
        {
            i=m+1;           
        }else*/ if (arr[i]==search)
        {
            printf("searching successfully , found value : %d \n squre of %d : %d\n",search,search,search*search);
        }else{
        //printf("the value is not found %d\n",search);
        }
        //printf("the value is not found %d",search);
        // m=((i+h)/2);
    }
    
    return 0;
}
