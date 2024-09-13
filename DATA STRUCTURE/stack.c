#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int capacity;
    int *array;
};
 int flag=0;

 
 // create size
 struct stack * createStack(int cap){
    struct stack *q= (struct stack *)malloc(sizeof(struct stack));
    q->top=-1;
    q->capacity=cap;
    q->array=(int*)malloc(sizeof(int)*cap);
    return q;
 };
    // CHECK STACK IS FULL
    int isFullStack(struct stack *q){
        if(q->top==q->capacity-1)
        return 1;
        return 0;
    }
    // CHECK STACK IS FULL
 int isEmptyStack(struct stack *q){
        if(q->top==-1)
        return 1;
        return 0;
    }
    // PUSH IN STACK
 void push(struct stack *q){
    int data;
    if(isFullStack(q)){
        printf("\nstack is overflow.\n");
    }else{
        printf("\n\tplease enter a value : ");
        scanf("%d",&data);
        q->top=q->top+1;
        q->array[q->top]=data;
    }
 }

  int pop(struct stack *q){
    int data;
    if(isEmptyStack(q)){
        printf("\nstack is empty.\n");
        flag = 0;
        return (0);
    }else{
        //q->top=q->top-1;
       data=q->array[q->top--];
       flag=1;
       return data;
    }

 }

int menu()
{
    int ch;
    printf("\n 1.  Push value in stack.");
    printf("\n 2.  Pop value in stack.");
    printf("\n 3.  exit.");
    printf("\n Please enter your choice : ");
    scanf("%d",&ch);    
    return(ch);
}
int main(){
     int choice,data,size;
     struct stack *q;
     printf("please enter a size of stack : ");
     scanf("%d",&size);
     q=createStack(size);
    
    while(1){
        choice=menu();
       
        switch(choice){
            case 1: 
                push(q);
                break;
            case 2:
                data=pop(q);
                if(flag)
                printf("\n\tpop  value is %d : ",data);
                break;
            case 3:
                exit(1); 
            default :
                printf("\n\tPlease enter a valid choice.");
                //choice=menu();
        }   
    }
    return 0;
}