/*
Name: Sachin Kumar Dash
Date: 15 October 2022
Description: A Program to Generate consecutive NRPS of length n using k distinct character
Sample Input:  Enter the number characters C : 3
               Enter the Length of the string N : 6
               Enter 3 distinct characters : a b c
Sample Output: Possible NRPS is abcbca

*/

#include <stdio.h>

#define MAXLEN 255

void NPRSString(char str[] , int len, int k);                        //function prototype

int main()                                                           //header file
{
    int n, k, i, j;                                                  //declaring variable
    char kdistinct[MAXLEN];  
    
    printf("Enter the number characters C : ");                      //asking and storing number of charcaters from user
    scanf("%d", &k);
    printf("Enter the Length of the string N : ");
    scanf("%d", &n);
    printf("Enter %d distinct characters : ",k);
    for (i = 0; i < k; i++)                                          //starting loop for user to enter character one by one
    {
          scanf("\n%c", &kdistinct[i]);
    }

                                                                      //check for distinct characters
    for (i = 0; i < k; i++)
    {
        for (j = (i+1); j < k; j++)
        {
            if(kdistinct[j] == kdistinct[i] )
            {
                printf("Error: values are not distinct.\n");
                return 1;
            }
        }
    }

    NPRSString(kdistinct, n, k);                                      //calling the declared function
      return 0;
}

void NPRSString(char str[] , int len, int k)
{
    int i, val = 0, count = 0;
    printf("Possible NRPS is ");                                      //printing NRPS
    for (i = 0; i < len; i++)
    {
        if(i % k == 0 && i != 0)
                {
                        val++;
                }
        printf("%c", *(str + ((i + val) % k)));                       
    }
        printf("\n");
}
