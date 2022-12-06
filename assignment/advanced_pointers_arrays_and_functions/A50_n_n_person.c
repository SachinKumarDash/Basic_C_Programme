/*
Name: Sachin Kumar Dash
Date: 05 November 2022
Description:   A Program to Read n & n person names of maxlen 20. Sort and print the names
Sample Input:  Enter the size: 5

               Enter the 5 names of length max 20 characters in each
               [0] -> Delhi
               [1] -> Agra
               [2] -> Kolkata
               [3] -> Bengaluru
               [4] -> Chennai
Sample Output: The sorted names are:
               Agra
               Bengaluru
               Chennai
               Delhi
               Kolkata

*/

#include <stdio.h>                             //header file
#include <stdlib.h>


int my_strlen(char *str);                     //function prototype to find the length of string
 
void my_strcpy(char *str1, char *str2);       //function prototype to copy string 'str2' to 'str1'

int my_strcmp(char *str1, char *str2);        //function prototype to to compare string 'str1' with 'str2'

void sorting(char (*str)[40], int n);         //function prototype to sort the array of strings

int main()
{
   
        int n, i, flag = 0;                    //declaring variables 

                                               //Reading the number of person names from user
        printf("\nEnter the size: ");
        scanf("%d", &n);

                                               //Declaring 2d-array of strings with column as constant of size 40
        char (*str)[40];

                                                //Allocating memory dynamically for array of strings 'str' using malloc()
        str = malloc(n * sizeof(char[50]));


                                                //reading 'n' strings from user one by one and storing using for loop
        printf("\nEnter the %d names of length max 20 characters each\n", n);
        for(i = 0; i < n; i++)
        {
            printf("[%d] -> ", i);
            scanf("%s", *(str + i));
                                                 //validation : checking if each user name exceeds max.length 20 or not
            if(my_strlen(str[i]) > 20)
            {
                printf("Error : Name length of each person should be <= 20 characters\n");   //printing error if any of person's name exceeds 32 characters
                flag++;                          //setting flag
                break;
            }
        }

                                                  //if flag is not-set then proceeding further to sort the names
        if(flag == 0)
        {
            //Calling sorting function to sort the entered names in an order by passing 'str' and 'n' as arguments
            sorting(str, n);

                                                    //Printing the sorted person names using for loop
            printf("\nThe sorted names are :\n");
            for(i = 0; i < n; i++)
            {
                printf("%s\n", *(str + i));           //each person names printed one after other in sorted manner
            }
        }

        //after the sorted names printed de-allocating memory
        free(str);

}

                                                        //Defining function 'my_strlen'
int my_strlen(char *str)
{
    char *length = str;           //declaring pointer variable *length of data type char and initializing to the base address of 'str'
    while (*str++);               //passing all the string elements through while loop till '\0'.
    return str - length - 1;      //at last returning the string length
}

                                 //Defining function 'my_strcpy'
void my_strcpy(char *str1, char *str2)
{
    while(*str1++ = *str2++);     //string 'str2' is copied to string 'str1' using while loop
}

                                   //Defining function 'my_strcpy'
int my_strcmp(char *str1, char *str2)
{
    while( (*str1 != '\0' && *str2 != '\0' ) && *str1 == *str2)    //checking each strings excluding null and whether strings are equal or not
    {
        //incrementing strings 
        str1++;
        str2++;
    }

    if(*str1 == *str2)
        return 0; // if strings are same then integer 0 is returned
    else
        return *str1 - *str2;    //if strings are not same then either -ve integer(str1 < str2) or +ve integer(str2 < str1) is returned
}

//Defining function 'sorting' with arguments 2d- array 'str' of char * datatype to sort the array of strings
void sorting(char (*str)[40], int n)
{
    int i, j;         //declaring variables 'i', 'j' of data-type int
    char temp[40];    //declaring array 'temp' of size 40

    //using 2 for loops to swap values and to rearrange the names in sorted asscending order
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            //Comapring strings with one another to check if it is greater
            if (my_strcmp(str[i], str[j]) > 0)
            {
                //Strings are swapped by calling 'my_strcpy' function to stroe names in sorted order
                my_strcpy(temp, str[i]);
                my_strcpy(str[i], str[j]);
                my_strcpy(str[j], temp);
            }
        }
    }
}
