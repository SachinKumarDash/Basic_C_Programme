/*
Name: Sachin Kumar Dash
Date: 04 September 2022
Description: A Program to check N th bit is set or not, If yes, clear the M th bit
Sample Input: Enter the number: 19
              Enter 'N': 2
              Enter 'M': 4
Sample Output: Updated value of num is 3 
*/



#include <stdio.h>                                            //header file

int main()                                                    //main function
{
    int num, nth_bit, getBit, mth_bit, updated;               //declaring variable

    
    printf("Enter the number: ");                             //asking user to enter a number
    scanf("%d", &num);                                        //storing the user entered number

    
    printf("Enter 'N': ");                                    //asking user to enter which bit to check for set
    scanf("%d", &nth_bit);                                    //storing the user entered value

    
    getBit = (num >> nth_bit) & 1;                            //performing bitwise & with 1 after shifting the num to user entered times

    //printf("The %d bit is set to %d\n", nth_bit, getBit);
    printf("Enter 'M': ");                                    //asking the user to enter which bit to clear
    scanf("%d", &mth_bit);                                    //storing the user entered value
    
    if(getBit == 1)                                           //checking if nthBit is set
    {   
    updated = num & (~(1 << mth_bit));                        //clearing the user entered bit
    
    printf("Updated value of num is %d\n", updated);          //printing the updated value
    }   
    else
    {   
        printf("Updated value of num is %d\n", num);          //else printing the unchanged value
    }   

    return 0;
}
