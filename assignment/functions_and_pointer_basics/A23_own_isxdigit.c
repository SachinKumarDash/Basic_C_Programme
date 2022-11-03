/*
Name: Sachin Kumar Dash
Date: 15 September 2022
Description: A Program to implement your own isxdigit() function
Sample Input:  Enter the character: a
Sample Output: Entered character is an hexadecimal digit
*/


#include <stdio.h>                                                 //header file

int my_isxdigit(char);                                            //function prototype

int main()                                                        //main function
{
    char ch;                                                      //taking variable
    int ret;
    
    printf("Enter the character:");                               //asking user to enter a character
    scanf("%c", &ch);                                             //storing user input
    
    ret = my_isxdigit(ch);                                        //calling the function

    if(ret == 0)                                                   //checking condition
        printf("Entered character is not an hexadecimal digit\n"); //output if condition true
    else
        printf("Entered character is an hexadecimal digit\n");     //output if condition false
    return 0;
}

int my_isxdigit(char ch)                                                  //defining function
{
    if((ch<=102 && ch>=97) || (ch>=65 && ch<=70) || (ch>=48 && ch<=57))    //checking condition
        return 1;
    else
        return 0;
                
}


