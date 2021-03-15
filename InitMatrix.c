/* CS2211b 2021 */
/* Assignment 03 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 2/3/2021 */ 


#include "headers.h"
//InitMatrix function to initialize the matrix with random unique integers
//paramters are the Matrix, layers, Rows and columns

void InitMatrix(int *Matrix, int layers, int rows, int columns){ 
    int x, m = layers*rows*columns; //variable init
    time_t t;
    srand((unsigned) time(&t));

    for(int i = 0; i < rows*layers*columns; i++){  //for loop to iterate the matrix
        x = (rand() % m)+1; //first random integer
        int j = 0;
        while(j < i){ //while loop to loop around only the populated part of the matrix
            if(*(Matrix + j) == x){ //condition to check if the integer is in the matrix and resets the loop to search from the top
                x = (rand() % m)+1; 
                j = 0;
            } else {
                j++;
            }
        }
        *(Matrix + i) = x; //add the unique integer to the matrix 
    }
}  