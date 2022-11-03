/*
Name: Sachin Kumar Dash
Date: 31 August 2022
Description: A Program to count number of set bits in a given number and print parity
Sample Input: Enter the number : 7
Sample Output: Number of set bits = 3
               Bit parity is Odd
*/

#include<stdio.h>                                                        //header file

int main()                                                               //main function
{
    int bit, num;                                                        //declaring variable type
    printf("Enter the number : ");                                       //asking user to enter a number
        scanf("%d", &num);                                               //storing the user entered number in num
        int count = 0;                                                   //initialising one variable to count no. of set bits
    for( bit = 0; bit < 32; bit++ )                                      //running a loop for 32 bit system
    {   
        if ( num & ( 1 << 31 - bit ))                                     //comparing with and operator after doing left shift of 1
        {
            count = count + 1;                                            //incrementing count value for every 1
        }   
        
    }
    
    printf("Number of set bits = %d\n", count);                           //printing the no. of set bits
                
            if( count % 2 == 0 )                                          //checking if count mod 2 gives zero or not
            {   
                printf("Bit parity is Even\n");                           //printing output for if condition 
            }   
            else
            {   
                printf("Bit parity is Odd\n");                            //output if condition don't satifies
            }   
            
   
    return 0;
}

