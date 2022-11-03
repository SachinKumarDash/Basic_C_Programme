/*
Name: Sachin Kumar Dash
Date: 21 October 2022
Description: A Program to check given string is Pangram or not
Sample Input:  Enter the string: The quick brown fox jumps over the lazy dog
Sample Output: The Entered String is a Pangram String
*/

/* header files */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int findpan(char arr[])                         //function declaration
{
    int i,j;                                    //int i,j variable declaration
    for (i = 'a'; i < 'z'; ++i)                // check through the alphabet
    { 
        for (j = strlen(arr); j > 0; j--)      // goes through the arr[] 
            if (tolower(arr[j]) == i)          // checks if the letter exists
                break;                         // breaks the inner for-loop if letter found
          
        if (j == 0)                            // if letter not found
            return 0;  
    }
    return 1;
}

//main function that returns some integer at the end of execution
int main() 
{
    int isPangram;                              //declaring variable isPangram
    char str[60];
    
    printf("Enter the string: ");    
    fgets(str, 60, stdin);                      //reading input from the user
    isPangram = findpan(str);
    
    if (isPangram)                              //if cond to check the string is pangram or not
        printf("The Entered String is a Pangram String\n");
    else
        printf("The Entered String is not a Pangram String\n");
    return 0;
}
