/*
Name: Sachin Kumar Dash
Date: 30 September 2022
Description: A Program to find factorial of given number using recursion
Sample Input:  Enter the value of N : 7
Sample Output: Factorial of the given number is 5040
*/

#include <stdio.h>                                                       //header files
#include <stdlib.h>


int main()                                                               //main function
{
    static int num, flag = 1;                                            //variable declarartion
    static unsigned long long int fact =1; 
            
            
        if(flag)                                                         //asking user to enter a number
        {   
            printf("Enter the value of N : ");
            scanf("%d", &num);
            if( num < 0 )
            {
                printf("Invalid Input\n");
                return 1;
            }
            if( num == 0 )
            {
                printf("Factorial of the given number is 1\n");
                return 1;
            }
                flag = 0;
        }
            
        fact = fact * num--;                                             //doing factorial till number reaches 1

    if (num < 1)                                                         //printing output when all multiplication done
    {   
                printf("Factorial of the given number is %lld \n", fact);
        return 0;
    }   
    else
    {   
                main();                                                   //calling main function recursively
        }
     
}

