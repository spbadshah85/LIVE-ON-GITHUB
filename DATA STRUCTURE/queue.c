#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int front,rear;
    int capacity;
    int * array;
};

struct queue * createQueue( int cap)
{
    struct queue * q=(struct queue*)malloc(sizeof(struct queue ));
    if(!q) return (NULL);
    q->array = (int*)malloc(sizeof(int)*cap);

    q->capacity= cap;
    q->front=q->rear=-1;
    if(!q->array) return (NULL);
    return (q);
}
int isFullQueue(struct queue * q){
    return ((q->rear +1)%q->capacity== q->front);
}

int isEmptyQueue(struct queue * q){
    return (q->front==-1);
}
void enQueue (struct queue * q ){
    int data;
    if(isFullQueue(q))
        printf("\n\tOverflow.");
    else{
        q->rear =(q->rear+1)%q->capacity;
       
        printf("\n\tplease enter a number : ");
        scanf("%d",&data);
         q->array[q->rear]=data;
        if(q->front==-1)
        q->front=q->rear;
    }
}
int flag=0;
int deQueue(struct queue * q){
    int data = -1;
     if(isEmptyQueue(q)){
        printf("\n\tQueue is empty.");
        flag=0;
        return (-1);
    }else{
        flag=1;
        data=q->array[q->front];
        if(q->front==q->rear)
        q->front= q->rear= -1;
        else
        {
            q->front=(q->front+1)%q->capacity;
        }
        
        return data;
    }
}

void deleteQueue(struct queue *q){
    if(q)
    {
        if(q->array){
        free(q->array);
        }
    }
    free(q);
}

int menu()
{
    int ch;
    printf("\n 1.  add value in queue.");
    printf("\n 2.  delete value in queue.");
    printf("\n 3.  delete queue.");
    printf("\n 4.  exit.");
    printf("\n Please enter your choice : ");
    scanf("%d",&ch);    
    return(ch);
}
int main(){
     int choice,data,size;
     struct queue *q;
     printf("please enter a size of queue : ");
     scanf("%d",&size);
     q=createQueue(size);
    
    while(1){
        choice=menu();
       
        switch(choice){
            case 1: 
                enQueue(q);
                break;
            case 2:
                data=deQueue(q);
                if(flag)
                printf("\n\textract  value is %d : ",data);
                break;
            case 3:
                deleteQueue(q);
                break;
            case 4:
                exit(1); 
            default :
                printf("\n\tPlease enter a valid choice.");
                //choice=menu();
        }   
    }
    return 0;
}