/*
Name: Sachin Kumar Dash
Date: 15 October 2022
Description: A Program to reverse the given string using recursive method
Sample Input:  Enter a string : EMERTXE
Sample Output: Reverse string is : EXTREME

*/  

#include <stdio.h>

//declaring functions 'reverse_string_recursive' returning value of data-type int with arguments '*str' of datatype char and 'len' of data-type int, 'my_strlen' returning value of datatype int with argument *str of char datatype.
int reverse_string_recursive(char *str, int len);
int my_strlen(char *str);

//main function that returns some integer at the end of execution
int main()
{
   
        char str[30];    //declaraing string 'str' of size 30 of datatype char
        int len = 0;    //declaring variables 'len' and initializing 'len' to 0

        //reading the string from user using selective scanf
       // printf("Enter a string : ");   
        scanf("%29[^\n]", str);      
    
            //printing the reversed string by calling 'reverse_string_recursive' by passing base address of 'str' and 'len' as an argument
                reverse_string_recursive(str, len);
                printf("Reversed string is %s\n", str);

    return 0;                           //after successfull compilation and run, returning program
}


//defining function 'my_strlen' returning value of datatype int with argument *str of char datatype used to find length of the string
int my_strlen(char *str)
{
    char *length = str;           //declaring pointer variable *length of data type char and initializing to the base address of 'str'
    while (*str++);               //passing all the string elements through while loop till '\0'.
    return str - length - 1;      //at last returning the string length
}

//declaring functions 'reverse_string_recursive' returning value of data-type int with arguments '*str' of datatype char and 'len' of data-type int to reverse string using recursive method
int reverse_string_recursive(char *str, int len)
{
    int length = my_strlen(str);   //declaring variable 'len' of datatype int and initializing it to length of string by calling 'my_strlen(str)' function
    int temp;    //declaring variables 'temp' of datatype int

    //checking if the value 'len' passed through argument is length/2 to reverse and store either side of middle element 
    if ( len != length/2)
    {
        temp = *(str + len);                             //temp is assigned with element at the minimum address of str+len each time 
        *(str + len) = *(str + ((length) - (len + 1)));  //assigning the element at maximum address to the element at the address of str+len each time 
        *(str + ((length) - (len + 1))) = temp;          //element stored in temp is assigned to the element at the maximum address 
        len++;    //incrementing 'len'  
        reverse_string_recursive(str, len);              //calling function 'reverse_string_recursive' recursively to reverse and store next elements   
    }
}
