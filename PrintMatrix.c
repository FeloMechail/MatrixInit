/* CS2211b 2021 */
/* Assignment 03 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 2/3/2021 */ 

#include "headers.h"
//PrintMatrixLinear to print the values in a linear form
//param: Matrix, Layers, rows and columns
void PrintMatrixLinear(int *Matrix, int layers, int rows, int columns){
    //init variables
    int j = 0, k = -1;

    printf("\nSorted Matrix (Linear Output)\n");
    printf("\n");
    
    //for loop to go through the values of the matrix
    for(int i = 0; i < layers*rows*columns; i++){
        k++;
        printf("[%d][%d][%d] - x %d\n", j , k/columns, i%columns,*(Matrix + i)); //print the values and its position
    
        if((i+1)%(rows*columns) == 0){  //resets the position of the values on new layers
            j++;
            k = -1;
        }
    }
    printf("\n\n-------------------------------\n\n");
    
}
//PrintMatrix to print the values of DM into a matrix
//Param: Matrix, Layers, Rows, columns and sorted  to check if the matrix printed is sorted or original
void PrintMatrix(int *Matrix, int layers, int rows, int columns, int sorted){
   //init variables
   int size = layers*rows*columns;
   int j = 1, k = 1;
    //Print Label original matrix or sorted matrix depending on the parameter
   (sorted == 0) ? printf("\nOriginal Matrix") : printf("\nSorted Matrix");
   
   
    //for loop to go through the matrix values
    for(int i = 0; i < size; i++){
    
        if((i)%(rows*columns) == 0){ //Divide the matrix into layers when it reaches rows*columns and adding a space
            printf("\n\n\tlayer %d", j);
            j++;
            k = 1;
        }
        
        if(((i)%(columns) == 0)){ //Divide the matrix for each rows and adding row label
            printf("\n");
            printf("( %d )", k);
            k++;
        }
    
    printf("%3d ",*(Matrix + i)); //print matrix values
    }

printf("\n\n-------------------------------\n\n");

    if(sorted == 1){PrintMatrixLinear(Matrix, layers, rows, columns);} //call PrintedMatrixLinear if the Matrix is sorted

} 