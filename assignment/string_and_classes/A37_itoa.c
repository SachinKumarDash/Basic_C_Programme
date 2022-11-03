/*
Name: Sachin Kumar Dash
Date: 22 October 2022
Description: A Program to implement itoa function
Sample Input:  Enter the number : -1234
Sample Output: Integer to string is -1234

*/

#include <stdio.h>                                  //header file

int itoa(int num, char str[]);                     //function prototype

int main()  //main function
{
     
    int num = 0;                                  //declaring the variable
    
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);                           //read the number from the user
    
    itoa(num, str);                              //call the function
    
    printf("Integer to string is %s", str);      //print the integer string
    
    if(num == 0)
    {
        printf("%d", num);
    }
}

int itoa(int num, char str[])
{
    
    int i = 0, j = 0, temp;                      //declare the variable
    
    if(num < 0)                                  //check the conditon number is less than 0
    {
        
        num = -num;                              //assign number to the negative sign and increment i value and j value
        
        str[0] = '-';
        
        i++;
        j++;
    }
   
    for(; num > 0; i++)                          //run for loop
    {
        
        str[i] = num % 10 + '0';                 //if it is an integer means convert it into ascii value
        
        num = num / 10;
    }
    str[i] = '\0';
    
    for(j, i--; j < i; j++, i--)                 //run for loop for reverse the number
    {
        
        temp = str[i];
        str[i] = str[j];
        str[j]= temp;
        
    }
}
