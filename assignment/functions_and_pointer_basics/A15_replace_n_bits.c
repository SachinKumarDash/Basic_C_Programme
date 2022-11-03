/*
Name: Sachin Kumar Dash
Date: 15 September 2022
Description: A Program to replace 'n' bits of a given number
Sample Input:  Enter the number: 10
               Enter number of bits: 3
               Enter the value: 12
Sample Output: Result = 12
*/

#include <stdio.h>                                                    //header file

int replace_nbits(int, int, int);                                     //function prototype

int main()                                                            //main function
{
    int num, n, val, res;                                             //taking variable
    
    printf("Enter num, n and val:");                                  //Prompting user to enter the values
    scanf("%d %d %d", &num, &n, &val);                                //storing user entered values
    
    res = replace_nbits(num, n, val);                                 //storing returned value of called function in a variable
    
    printf("Result = %d\n", res);                                     //prnting the value in variable result
}

int replace_nbits(int num, int n, int val)                            //defining function
{
    return (num & (~(( 1 << n) - 1))) | (val & (( 1 << n) - 1 ));     //returning the executed result
}
