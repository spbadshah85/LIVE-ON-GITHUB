#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 FILE * file;
// structure to represent a record
struct record{
    int rollNumber;
    char name[50];
    float marks;

};
struct record student;
// function to search and update a record in the file 


void searchAndUpdateRecord(int targetRollNumber,float newMarks){
   

    int recordFound=0;
    // READ each record from the file 
    while(fscanf(file,"%d %s %f",&student.rollNumber,student.name,&student.marks) != EOF ){
        // check if current record match the target roll number 

        if(student.rollNumber==targetRollNumber){

            // update the marks for the match record

            fseek(file,-1* sizeof(struct record),SEEK_CUR);

            // move the file pointer bacck to the start of the record 
            printf("%d %s %.2f\n",student.rollNumber,student.name,student.marks);
            student.marks= newMarks;
            fprintf(file,"%d %s %.2f\n",student.rollNumber,student.name,student.marks);

            recordFound=1;
             
             break;  //  no need to contiue searching
        }
    }

    // close the file 
     
    

     //  if the record was not found , display a message

     if(!recordFound){
        printf("record with roll number %d not found \n",targetRollNumber);
        exit(EXIT_SUCCESS);
     }

     printf("RECORD with roll number %d updated successfully. \n ", targetRollNumber);

    }
    void addStudentRecord(int rollNumber ,char name[50],float marks){
         int flag=0;
          while(fscanf(file,"%d %s %f",&student.rollNumber,student.name,&student.marks) != EOF ){
        // check if current record match the target roll number 
            flag=1;
        if(student.rollNumber==rollNumber){ 

            printf("these roll no. %d is already exist.",student.rollNumber);
            
        }
        else{

            fseek(file,-1* sizeof(struct record),SEEK_CUR);

            // move the file pointer bacck to the start of the record 
            student.rollNumber= rollNumber;
            strcpy(student.name,name);
            student.marks= marks;

            fprintf(file,"%d %s %.2f\n",student.rollNumber,student.name,student.marks);

             printf("RECORDs with roll number %d added successfully. \n ", rollNumber);
             fflush(stdin);
             break;
        }
          }
           /* if(flag==0){
           fseek(file,-1* sizeof(struct record),SEEK_CUR);

            // move the file pointer bacck to the start of the record 
            student.rollNumber= rollNumber;
            strcpy(student.name,name);
            student.marks= marks;

            fprintf(file,"%d %s %.2f\n",student.rollNumber,student.name,student.marks);

             printf("RECORD with roll number %d added successfully. \n ", rollNumber);
            }*/
    }
    int main ()
    {
        int targetRollNumber;
        char name[50];
        float newMarks;
        int choice;
        
        

        // open the file read and write mode 

        file = fopen("student_record.txt","a+");
        
        if(file==NULL){
            perror("Error open the file for reading and writing");
            exit(EXIT_FAILURE);


       }

       printf("1. Add student record. \n2. Update student record \n\n\nchoose your option  : ");
                  top :
                  scanf("%d",&choice);

        switch(choice){

            case 1: 
                printf("enter roll number to add : ");
                scanf("%d",&targetRollNumber);
                printf("enter the name : ");
                fflush(stdin);
                gets(name);
                //scanf("%s",name);
                printf("enter the  marks :");
                scanf("%f",&newMarks);

                addStudentRecord(targetRollNumber,name,newMarks);
                break;

            case 2 :    
            // get user input for the target roll number and new marks

                printf("enter roll number to update : ");
                scanf("%d",&targetRollNumber);
                printf("enter the new marks :");
                scanf("%f",&newMarks);

                // search and update the record

                searchAndUpdateRecord(targetRollNumber,newMarks);
                break;

            default :
            printf("please inter the right option . : "); 
            goto top ;   
        }


        

         fclose(file);
         return 0 ;
    }







