#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *start=NULL;

// CREATE A NODE
struct  node* createNode(){
    struct node *n;
    n= (struct node*)malloc(sizeof(struct node));
    return (n);
}

//INSERTION IN LAST
void insertNode(char position){
    struct node* temp,*t;
    temp= createNode();

    printf("Enter a value :");
    fflush(stdin);
    scanf("%d",&temp->info);

    temp->link=NULL;

        if(start==NULL){
             start=temp;
              printf("start null :");
        }else{
            t=start;
            if(position=='F'){
                printf("first insert :");
                start=temp;
                start->link=t;
            } if(position=='L'){
                while(t->link!=NULL){
                    t=t->link;
                }
                t->link=temp;
            }
            
        }
}

void deleteNode(char position){
    struct node *d;
    if(start==NULL)
        printf("List is Empty");
    else{
    d=start;
    if(position=='F'){
        
        start =start->link;
    }
    else{
         while(d->link!=NULL)
            d=d->link;
    }  
    free(d);  
    }
}

void viewNode(){
    struct node *t= start;
    if(start==NULL)
        printf("List is Empty");
    else{
        do{
            printf("%d  ",t->info);
            t=t->link;
        }while(t);
    }
}
int menu()
{
    int ch;
    printf("\n 1.  Add value in list at first.");
    printf("\n 2.  Add value in list at last.");
    printf("\n 3.  Delete value in list at first.");
    printf("\n 4.  Delete in list at last.");
    printf("\n 5.  View All list .");
    printf("\n 6.  Exit.");    
    printf("\n 7.  Enter your choice :");
    scanf("%d",&ch);    
    return(ch);
}
int main(){
     int choice;
    while(1){
        choice=menu();
       
        switch(choice){
            case 1: 
               insertNode('F');
               break;
            case 2:
                insertNode('L');
                break;
            case 3: 
                deleteNode('F');
                break;
            case 4:
                deleteNode('L');
                break;
            case 5: 
                viewNode();
                break;
            case 6:
                exit(1); 
            default :
                printf("Please enter a valid choice.");
                //choice=menu();
        }   
    }
    return 0;
}
