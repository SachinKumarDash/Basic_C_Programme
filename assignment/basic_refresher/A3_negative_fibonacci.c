/*
Name: Sachin Kumar Dash
Date: 20 August 2022
Description: A Program generate negative Fibonacci numbers
Sample Input: Enter a number: -8
Sample Output: 0 1 -1 2 -3 5 -8
*/
#include<stdio.h>                          //header

int main()                                 //main function
{
    int num, var1, var2, res;              //taking variable for user input, result storing and initialisation

    //printf("Enter a number: ");            //asking user for input
    scanf("%d", &num);                     //scanning the address where user entered value to be stored
    if(num <= 0)                           //checking if entered number is negative or not
    {   

    var1 = 0;                             // initialising two variable for initial print and sum
    var2 = 1;
    printf("%d %d ", var1, var2);          //printing the initialised variable
    for(res = 0; res >= num; res-- )        //starting a loop which will be run till the user input value
    {   

        res = var1 - var2;                 //storing diff in one variable
        var1 = var2;                       //updating the initial two variable
        var2 = res;
        if(var2>=num && var2<=(-num))
        {
        printf("%d ", var2);                //printing the output after every iteration
    
        }
        }   
    printf("\n");
    }   
    else
    {   
        printf("Invalid input\n");         //in case user entering a positive number
    }
    return 0;
}
