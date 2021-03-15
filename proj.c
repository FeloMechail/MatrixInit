/* CS2211b 2021 */
/* Assignment 03 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 2/3/2021 */ 

#include "headers.h"

int main(){
    //init variables
    int rows, columns, layers;
    int *Matrix;

    printf("Enter values for Layers, Rows, Columns (elements in each rows): "); //prompt the user to enter number of layers, rows and columns
    scanf("%d %d %d", &layers, &rows, &columns);

    while(rows != 0 && columns !=0 && layers != 0){
       
        Matrix = (int *) malloc (rows*columns*layers*sizeof(int)); //create a dynamic memory with size of the Matrix
        InitMatrix(Matrix, layers, rows, columns); //calling InitMatrix to create a matrix
        //calling PrintMatrix to print the Matrix and tells the print if the matrix is sorted or not by adding a value, 0 for original and 1 for sorted
        PrintMatrix(Matrix, layers, rows, columns,0);
        SortMatrix(Matrix, layers*rows*columns);//calling SortMatrix to sort the matrix
        PrintMatrix(Matrix, layers, rows, columns,1);//calling PrintMatrix to print the sorted Matrix

        free(Matrix); //freeing the dynamic memory

        printf("Enter values for Layers, Rows, Columns (elements in each rows): "); //prompt the user to enter size of the matrix unless the loop is broken
        scanf("%d %d %d", &layers, &rows, &columns);
      
    }

    printf("FINISHED\n");
    return 0;

}