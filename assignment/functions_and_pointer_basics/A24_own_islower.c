/*
Name: Sachin Kumar Dash
Date: 15 September 2022
Description: A Program to implement your own islower() function
Sample Input:  Enter the character: a
Sample Output: Entered character is lower case alphabet
*/


#include <stdio.h>                                                 //header file

int my_islower(char);                                            //function prototype

int main()                                                        //main function
{
    char ch;                                                      //taking variable
    int ret;
    
    //printf("Enter the character:");                               //asking user to enter a character
    scanf("%c", &ch);                                             //storing user input
    
    ret = my_islower(ch);                                        //calling the function

    if(ret == 0)                                                   //checking condition
        printf("Entered character is not lower case alphabet\n"); //output if condition true
    else
        printf("Entered character is lower case alphabet\n");     //output if condition false
    return 0;
}

int my_islower(char ch)                                                  //defining function
{
    if(ch<=122 && ch>=97)                                               //checking condition for lowercase
        return 1;
    else
        return 0;
    
}
