/*
Name: Sachin Kumar Dash
Date: 30 September 2022
Description: A Program to count no. of characters, words and lines, entered through stdin
Sample Input:  Hello world
               Dennis Ritchie
               Linux
Sample Output: Character count : 33
               Line count : 3
               Word count : 5
*/

#include <stdio.h>                                           /*header files*/
#include <stdlib.h>

int main()                                                  /*main function*/
{
    int lines = 0, words = 0, characters = 0;               /*variable declaration*/
    int c;

    do
    {
        c = getchar();                                      /*Read a character*/
        
        characters++;                                       /*Increment the character count*/
        
        
        if (c == '\n')                                      /*If newline increment the line count*/
        {
            lines++;
        }
        
        
        if (c == ' ' || c == '\n' || c == '\t')             /*If newline or space or tab increment the word count*/
        {
            ++words;
            
            c = getchar();                                  /*read next character*/
            
           
            if (c == ' ' || c == '\n' || c == '\t')   /*If next character is newline or space or tab decrement the word count*/
            {
                words--;
                
            }
            
            ungetc(c,stdin);                                /*unget the character from input stream*/
        }
    
        
        else if (c == EOF)                                  /*if EOF [ctrl+D] break the loop*/
        {
            ungetc(c,stdin);
            
            characters--;                                   /*decrement one character count for EOF*/
            break;
        }
        
    } while (1);                                           /*print the character count, word count and line count*/
    
    printf("\n");
    printf("Character count : %d\nLine count : %d\nWord count : %d\n", characters, lines, words );
    
    return 0;
    
}
