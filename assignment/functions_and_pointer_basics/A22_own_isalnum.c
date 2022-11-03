/*
Name: Sachin Kumar Dash
Date: 15 September 2022
Description: A Program to implement my own isalnum() function
Sample Input:  Enter the character: a
Sample Output: The character 'a' is an alnum character.
*/


#include <stdio.h>                                                   //header file

int my_isalnum(char);                                                //function prototype

int main()                                                           //main function
{
    char ch;                                                         //taking variable
    int ret;
    
    //printf("Enter the character:");                                  //asking user to enter a character
    scanf("%c", &ch);                                                //storing the user input
    
    ret = my_isalnum(ch);                                            //calling the function and storing it's return in a variable

    if(ret == 0)                                                      //checking if return is false
        //printf("The character '%c' is not an alnum character.\n",ch); //output for condition true
        printf("Entered character is not alphanumeric character\n"); //output for condition true
    else
        //printf("The character '%c' is an alnum character.\n",ch);     //output if condition false
        printf("Entered character is alphanumeric character\n");     //output if condition false
    return 0;
}

int my_isalnum(char ch)                                                //defining called function
{
    if((ch<=122 && ch>=97) || (ch>=65 && ch<=90) || (ch>=48 && ch<=57)) //setting condition for true value
        return 1;
    else
        return 0;
            
}
