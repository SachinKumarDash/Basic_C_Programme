/*
Name: Sachin Kumar Dash
Date: 19 September 2022
Description: A Program to toggle 'n' bits from given position of a number
Sample Input:  Enter the number: 10
               Enter number of bits: 3
               Enter the pos: 5
Sample Output: Result = 50
*/

#include <stdio.h>                                                  //header file

int toggle_nbits_from_pos(int, int, int);                           //function prototype

int main()                                                          //main function
{
                                                   
    int num, n, pos, res = 0;                                       //initialising variable
                                                  
    printf("Enter the number:");                                    //asking user to enter a number
    scanf("%d", &num);                                              //storing user input
    printf("Enter number of bits:");                                //asking user for bits
    scanf("%d", &n);                                                //storing user input
    printf("Enter the pos:");                                       //asking user for position
    scanf("%d", &pos);                                              //storing user input
                                                   
    res = toggle_nbits_from_pos(num, n, pos);                       //storing the return of function in a variable
    printf("Result = %d\n", res);                                   //printing the result
}
int toggle_nbits_from_pos(int num, int n, int pos)                  //defining function
{                                                                   // toggle n bits from pos to get the updated  value
    int res= num ^ ~(~0 << n) << (pos - n + 1); 
    
  return res;
}

