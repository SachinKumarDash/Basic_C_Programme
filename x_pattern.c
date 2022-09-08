/*
Name: Sachin Kumar Dash
Date: 31 August 2022
Description: A Program to print the numbers in X format as shown below
Sample Input: If n = 5, then,
Sample Output: 
               1___5
               _2_4_
               __3__
               _2_4_
               1___5

*/



#include<stdio.h>                                               //header file

int main()                                                      //main function
{
    int row, col, num;                                          //declaring variable datatype
    printf("Enter the number: ");                               //asking the user an input
    scanf("%d", &num);                                          //storing the user given input
    
        for( row = 1 ; row <= num ; row++ )                     //doing a loop till user entered number
        {   
            for( col = 1 ; col <= num ; col++)                    //starting another inner loop for every iteration of the outer loop
            {   
                if(( row == col ) || ( col == ( num + 1 - row )))    //comparing with or operator
                    printf("%d", col);                            //on condition true printing the value of j
                else
                    printf(" ");                                //on condition false printing a space
            }   
            printf("\n");                                       //starting a new line after every iteration
        }   
            
        
}
