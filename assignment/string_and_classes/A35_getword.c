/*
Name: Sachin Kumar Dash
Date: 22 October 2022
Description: A Program to implement getword function
Sample Input:  Enter the string : Welcome to Emertxe
Sample Output: You entered Welcome and the length is 7

*/

#include <stdio.h>                                                 //header file


int my_getword(char *str);                                         //function prototype


int main()                                                         //main function 
{
    int i, word_length;                                            //declaring variables 'i', 'word_length' of data-type int
        char string[100];                                          //declaring 'string' of size 30
    
     printf("Enter the string : ");
		scanf(" %[^\n]", string);
                                                                   //calling the function 'my_getword' by passing string
                                                                   //as argument to calculate the length               
                word_length = my_getword(string);                 //of the string and storing returned value in 'word_length'

                                                                  //print the Entered word in the terminal 
                printf("You Entered ");

                for(i = 0; i < word_length; i++)
                {
                    printf("%c", string[i]);
                }
                printf(" and the length is %d\n", word_length);

                
                return 0;                                   //after successfull compilation and run, returning the program
}

int my_getword(char *str)
{
    int count = 0;                                          //declaring and initializing variable 'count' to 0

                                                            //passing the string in while loop till null (\0)
    while(*str != '\0')
    {
        //checking if there are multiple words passed in string i.e. by checking for spaces 
        if ((*str) == ' ') 
        {
            break;                                          //if there are more than one word passed then ignoring the multiple words using break
        }
        else 
        {
            count++;                                        //counting the number of character in a string
            str++;                                          //incrementing str by 1 each time to check next character
        }
    }
    return count;     //returning count of characters ie.length of string 
}
