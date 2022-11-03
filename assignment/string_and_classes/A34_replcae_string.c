/*
Name: Sachin Kumar Dash
Date: 30 September 2022
Description: A Program to replace each string of one or more blanks by a single blank
Sample Input:  Pointers         are      sharp           knives.
Sample Output: Pointers are sharp knives.

*/
#include <stdio.h>                                       /*header files*/
#include <stdlib.h>

int main()                                               /*main function*/
{
    int c, last_char;
    
    last_char = 'a';                                     /* initially let the last character be non space value */
    
    
    while ((c = getchar()) != EOF)                       /* Read a character till EOF is recieved */
    {
        if (c == ' ')                                    /* if the character is space */
        {
            
            if (last_char != ' ')                        /* check if last character was not space */
            {
                
                putchar(c);                              /* if so then print */
            }
        }
         
        else                                             /* if the character is not space then print */
        {
            putchar(c);
        }
                                                         /* update the lastcharacter with curent c */
        last_char = c;
    }
    
    return 0;
    
}
