/*
Name: Sachin Kumar Dash
Date: 15 September 2022
Description: A Program to implement your own ispunct() function
Sample Input:  Enter the character: a
Sample Output: Entered character is not punctuation character
*/


#include <stdio.h>                                                   //header file

int my_ispunct(char);                                                //function prototype

int main()                                                           //main function
{
    char ch;                                                         //taking variable
    int ret;
    
    printf("Enter the character:");                                  //asking user to enter a character
    scanf("%c", &ch);                                                //storing the user input
    
    ret = my_ispunct(ch);                                            //calling the function and storing it's return in a variable

    if(ret == 0)                                                      //checking if return is false
        printf("Entered character is not punctuation character\n"); //output for condition true
    else
        printf("Entered character is punctuation character\n");     //output if condition false
    return 0;
}

int my_ispunct(char ch)                                                //defining called function
{
    if((ch<=122 && ch>=97) || (ch>=65 && ch<=90) || (ch>=48 && ch<=57) || (ch == 32 )) //setting condition for true value
        return 0;
    else
        return 1;

}
