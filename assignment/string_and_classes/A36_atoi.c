/*
Name: Sachin Kumar Dash
Date: 22 October 2022
Description: A Program to implement atoi function
Sample Input:  Enter a numeric string: 12345
Sample Output: String to integer is 12345

*/

#include <stdio.h>                                                             //header file

int my_atoi(char *str);                                                        //function prototype

                               
int main()                                                                      //main function
{
    int i ,value ;                                                              //declaring variables
        char string[100];                                                       //declaring 'string' of size 30

                printf("Enter a numeric string : ");                            //reading the 'string' from user using fgets function
                scanf("%s", string);

                                                                                //calling the function 'my_atoi' by passing string as argument to calculate 
                value = my_atoi(string);                                        //the integer equivalent of the string & storing returned integer value in 'word_length'

                printf("String to integer is %d\n", value);
                
                return 0;                                                       //after successfull compilation and run, returning the program
}


int my_atoi(char *str)                                                         //defining function 'my_atoi'
{
    int flag = 1, result = 0, i = 0;                                           //declaring and initializing variables 'flag' to 0, 'result' to 0 & 'i' to 0

                                                                               //checking if string is null
    if ( '\0' == *str )
    {
        return 0;   
    }

                                                                               //checking if  - sign is present in 1st digit of string (-ve value)
    if ( str[0] == '-')
    {
                                                                               //If the first digit is - then setting flag to -1 
        i++;                                                                   //and start checking next element by incrementing index i by 1 
        flag = -1;
    }
    else if ( str[0] == '+')                                                   //checking if  + sign is present in 1st digit of string (+ve value)
    {
                                                                               //If the first digit is + then setting flag to 1  
        flag = 1;                                                              //and start checking next element by incrementing index i by 1
        i++;
    }
                                                                               //check for each numeric digits in string by passing string in for loop
    for ( ; str[i] != '\0' ; i++)
    {
                                                                               //checking if the string is not starting with numeric digits (0 to 9)
        if ( str[i] < '0' || str[i] > '9')
        {
            break;                                                             //if it is not a digit then coming out of for loop 
        }
                                                                               //checking if the string is starting with numeric digits (0 to 9)
        if ( str[i] >= '0' && str[i] <= '9')
        {
                                                                                //modifying result by adding previous result by grouping each digits 
            result = result * 10 + str[i] - '0';                                //as single number after finding integer equivalent of each characters
        }
    }
    return (flag * result);                                                     //after finding integer equivalent of numeric string 
                                                                                //returning the integer value 'result' by setting flag
}
