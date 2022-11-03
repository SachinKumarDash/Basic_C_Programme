/*
Name: Sachin Kumar Dash
Date: 14 September 2022
Description: A Program to get 'n' bits of a given number
Sample Input:  Enter the number: 10
               Enter number of bits: 3
Sample Output: Result = 2
*/

#include<stdio.h>                                       //header file

int getbits(int num, int n)                            //declaring a function to get bits
{
    return ( num & (( 1 << n ) - 1 ));                 //returning the bitwise & operation of num and mask
}

int main()                                             //main function
{
    int num, n, result;                                //taking variable
    printf("Enter the number: ");                      //asking user to enter a number
    scanf("%d",&num);                                  //storing the user enter number
    printf("Enter number of bits: ");                  //asking user to enter the no of bits
    scanf("%d", &n);                                   //storing user enterd bits
    
    result = getbits( num, n) ;                        //storing the returning value of called function in a variable
    printf("Result = %d\n", result);                   //printing the output of called function
    return 0;
}
