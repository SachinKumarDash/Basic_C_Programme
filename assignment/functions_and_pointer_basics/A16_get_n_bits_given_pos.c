/*
Name: Sachin Kumar Dash
Date: 15 September 2022
Description: A Program to get 'n' bits from given position of a number
Sample Input:  Enter the number: 12
               Enter number of bits: 3
               Enter the pos: 4
Sample Output: Result = 3
*/

#include<stdio.h>                                       //header file

int get_n_bits(int num, int pos, int n)                //declaring a function to get bits
{
    if( n == pos )
    
        return ((( 1 << n) - 1) & ( num >> ( pos - ( pos - 1 ))));
    else
        return (((1 << n) - 1) & (num >> (pos - 1)));
                                                      //returning value from position to number of bits
}

int main()                                             //main function
{
    int num, n, result, pos;                           //taking variable
    printf("Enter the number: ");                      //asking user to enter a number
    scanf("%d",&num);                                  //storing the user enter number
    printf("Enter number of bits: ");                  //asking user to enter the no of bits
    scanf("%d", &n);                                   //storing user enterd bits
    printf("Enter the pos: ");                         //asking user to enter from where to print bits
    scanf("%d", &pos);                                 //storing user input
        
    result = get_n_bits( num, n, pos) ;                //storing the returning value of called function in a variable
    printf("Result = %d\n", result);                   //printing the output of called function
    return 0;
}
