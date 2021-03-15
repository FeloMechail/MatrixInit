/* CS2211b 2021 */
/* Assignment 03 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 2/3/2021 */ 

#include "headers.h"
//SortMatrix function to sort it into ascending order
//param: Matrix and Matrix size
void SortMatrix(int *Matrix, int size){
    int temp; //temp to hold matrix matrix value
    for(int i = 0; i < size; i++){ //loop through matrix and get their value
        for(int j = i + 1; j < size; j++){//loop through matrix and get their next value
            if(*(Matrix + i) > *(Matrix + j)){ //compare if first value is bigger than second
                temp = *(Matrix + i); //place larger value in temp
                *(Matrix + i) = *(Matrix + j); //switch both values to place the smaller first
                *(Matrix + j) = temp; //put back the larger value into the matrix
            }
        }
    }
}