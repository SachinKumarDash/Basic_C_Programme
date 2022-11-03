/*
Name: Sachin Kumar Dash
Date: 15 October 2022
Description: A Program to reverse the given string using iterative method
Sample Input:  Enter a string : EMERTXE
Sample Output: Reverse string is : EXTREME
*/  

#include <stdio.h>                        //header file
                                          //declaring functions 'reverse_string_iterative' with argument '*str' of char datatype.
void reverse_string_iterative(char *str);
int my_strlen(char *str);

                                          //main function that returns some integer at the end of execution
int main()
{
   
        char str[30];                     //declaraing string 'str' of size 30 of datatype char
    
                                          //reading the string from user using selective scanf
        printf("Enter a string : ");   
        scanf("%29[^\n]", str);      

                                          //printing the reversed string by calling 'reverse_string_iterative' by passing base address of 'str' as an argument
                reverse_string_iterative(str);    
                printf("Reversed string is : %s\n", str);

    return 0;                             //after successfull compilation and run, returning program
}


                                         //defining function 'my_strlen' returning value of datatype int 
                                         //with argument *str of char datatype used to find length of the string
int my_strlen(char *str)
{
    char *length = str;                  //declaring pointer variable *length of data type char and initializing to the base address of 'str'
    while (*str++);                      //passing all the string elements through while loop till '\0'.
    return str - length - 1;             //at last returning the string length
}

//defining function 'reverse_string_iterative' with argument '*str' of char datatype to reverse string using iterative method
void reverse_string_iterative(char *str)
{
    int temp, i;                         //declaring variables 'temp' and 'i' of datatype int
    int length = my_strlen(str);         //declaring variable 'len' of datatype int and initializing it to length of string by calling 'my_strlen(str)' function

                                         //running for loop from 0 to length/2 to reverse and store either side of middle element
    for (i = 0 ; i < (length)/2 ; i++)
    {
        temp = *(str + i);                            //temp is assigned with element at the minimum address of str+i each time the loop runs
        *(str + i) = *(str + ((length) - (i + 1)));   //assigning the element at maximum address to the element at the address of str+i each time the loop runs
        *(str + ((length) - (i + 1))) = temp;         //element stored in temp is assigned to the element at the maximum address
    }
}
