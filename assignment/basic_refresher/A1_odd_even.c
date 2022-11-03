/*
Name: Sachin Kumar Dash
Date: 19 August 2022
Description: A Program to check if the entered number is odd or even
Sample Input: Enter the value of 'n' : -2
Sample Output: -2 is negative even number
*/

#include<stdio.h>
int main()
{
    int num;                                                          // taking a variable of integer datatype
    printf("Enter the value of 'n' : ");                              //asking the user for input
    scanf("%d", &num);                                                //scanning input from user

    if(num > 0)                                                       //condition for postive number
    {
        if(num % 2 == 0)                                             //condition to check if the entered number is even
        {
            printf("%d is positive even number\n", num);
        }
        else
        {   
            printf("%d is positive odd number\n", num);
        }   
    }
    else
    {
        if(num < 0)                                                   //condition to check if entered number is negative
        {   
            if(num % 2 == 0)                                         //to check if entered number is even
            {   
                printf("%d is negative even number\n", num);
            }   
            else
            {   
                printf("%d is negative odd number\n", num);
            }   
        }   
        else
        {   
            printf("%d is neither odd nor even\n", num);
        }
    }
    return 0;
}

