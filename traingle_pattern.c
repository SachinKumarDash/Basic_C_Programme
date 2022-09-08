/*
Name: Sachin Kumar Dash
Date: 31 August 2022
Description: A Program to print triangle pattern as shown below
Sample Input: If n = 5, then,
Sample Output: 
               1 2 3 4 5
               6 _ _ 7
               8 _ 9
              10 11
              12
*/

#include<stdio.h>                                                     //header file

int main()                                                            //main function
{
    int num, row, col;                                                //taking variable with datatype int
    int x=1;                                                          //initialising a variable to print output

    printf("Enter a number: ");                                       //asking user to enter a number
    scanf("%d", &num);                                                //storing user entered number
    for( row = 1 ; row <= num ; row++ )                               //starting a loop for row
    {   
        for( col = 1 ; col <= num ; col++ )                           //starting a loop for col for every iteration of row
        {   
            if( col == 1 || col == num - row + 1|| row == 1 )         //setting condition to print int
            {   
                printf("%d ", x++);                                   //printing number if condition true
            }   
            else
            {   
                printf(" ");                                          //printing space if condition false
            }   
        }   
        printf("\n");
    }   
    return 0;
}

