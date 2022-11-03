/*
Name: Sachin Kumar Dash
Date: 31 August 2022
Description: A Program to print pyramid pattern as shown below
Sample Input: Enter the number: 4
Sample Output: 4
               3 4
               2 3 4
               1 2 3 4
               2 3 4
               3 4
               4
*/

#include<stdio.h>                                            //header file

int main()                                                   //main function
{
    int row, col, num;                                       //taking variable of int datatype

    printf("Enter the number: ");                            //asking user to enter a value
    scanf("%d ", &num);                                      //storing user entered value

    for( row = num ; row >= 1 ; row-- )                      //starting a loop for row
    {   
        for( col = row ; col <= num ; col++ )                //doing another loop for every iteration of for loop
        {
                printf("%d ", col);                          //printing column for every iteration
        }
        printf("\n");                                        //printing in new line after every iteration
    }   
    for( row = 2 ; row <= num ; row++ )                      //starting a loop again for reverse printing
    {   
        for( col = row ; col <= num ; col++ )                //doing an inner loop for every iteration of outer loop
        {
                                                  //checking a condition if row less then col or not
           printf("%d ", col );                              //if condition true printing col
        }
       printf("\n");                                         //printing new line after every iteration
    }   
        return 0;
}

