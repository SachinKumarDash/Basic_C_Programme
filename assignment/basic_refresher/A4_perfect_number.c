/*
Name: Sachin Kumar Dash
Date: 23 August 2022
Description: A Program to check if number is perfect or not
Sample Input: Enter a number: 6
Sample Output: Yes, entered number is perfect number
*/
#include<stdio.h>                                          //header

int main()                                                 //main function
{
    int num, a, sum;                                       //variable datatype declaration

    printf("Enter a number: ");                            //asking user to enter a number
    scanf("%d ", &num);                                    //scanning the variable address to store the entered number
    sum=0;                                                 //initialisng sum
    for(a = 1 ; a < num ; a++)                             //starting a loop from 1 to enter number
    {   
        if(num % a == 0)                                   //checking if the number divided by a is 0 or not
        {
            sum = sum + a;                                 //adding each qualified value from above iteration
        }
    }   
            if(sum == num)                                // checking if sum is equal to the entered number or not
            {
                printf("Yes, entered number is perfect number\n");        //printing output if result yes
            }
            else
            {
                printf("No, entered number is not a perfect number\n");   //printing output if sum not equal to number            
                
            }

            if(num<0)                                                     //checking if the entered number is negative
            {
                printf("Error : Invalid Input, Enter only positive number\n");
            }
            return 0;
}
  
