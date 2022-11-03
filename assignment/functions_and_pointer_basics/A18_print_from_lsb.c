/*
Name: Sachin Kumar Dash
Date: 19 September 2022
Description: A Program to print 'n' bits from LSB of a number
Sample Input:  Enter the number: 10
               Enter number of bits: 12
Sample Output: Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
*/

#include<stdio.h>                                 //header file

int print_n_bits(int num, int n)                  //defining function to print bits
{
    int i;                                        //taking 1 variable for loop
    printf("Binary form of %d: ",num); 
    for(i = 0 ; i < n ; i++)                      //initiating a loop
    {   
        if(num & ( 1 << ( n - 1) - i ))           //setting condition to print 1
            printf("1 ");
        else                                      //printing 0 if condition fails
            printf("0 ");
    }printf("\n");
}

int main()                                         //main function
{
    int num, bits;                                 //declaring variable
    //printf("Enter the number: ");                  //asking user to enter number
    scanf("%d", &num);                             //storing user entered value
    //printf("Enter number of bits: ");              //asking user to enter number of bits to be printed
    scanf("%d", &bits);                            //storing the user entered value
        
    print_n_bits(num, bits);                       //calling the function 

    return 0;
}
