#include<stdio.h>
int main (){
    int matrix1 [4][4];
    int matrix2 [4][4];
    int result [4][4];
    int i,j,k;
    // inputs elements of  the first matrix
    printf("Enter first matrix elements :");
    for (i=0; i<4;i++){
        for (j=0;j<4;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
     // inputs elements of  the secomd matrix
    printf("Enter second matrix elements :");
    for (i=0; i<4;i++){
        for (j=0;j<4;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
     // multiplication the two matrices
    
    for (i=0; i<4;i++){
        for (j=0;j<4;j++){
            result[i][j];
            for(k=0; k<4;k++){
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }


     // Display the resulting matrix
      printf("Results matrix elements :");
    for (i=0; i<4;i++){
        for (j=0;j<4;j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
        return 0;
}