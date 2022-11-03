/*
Name: Sachin Kumar Dash
Date: 21 October 2022
Description: A Program to  Squeeze the character in s1 
             that matches any character in the string s2
Sample Input:  Enter s1 : Dennis Ritchie
               Enter s2 : Linux
Sample Output: After squeeze s1 : Des Rtche
*/

#include <stdio.h>                               //header file

void squeeze(char [], char []);                  //function prototype

int main()
{
    char str1[50], str2[50];                      //declare the two strings

    scanf("%[^\n] %[^\n]", str1,str2);            //read the two strings

    squeeze(str1, str2);                          //call the function

    printf("After squeeze s1 : %s\n", str1);      //print the  squeeezed string

}
void squeeze(char s[],char q[])
{
    int i, j, k;
    int found = 0;

    for (i = 0; s[i] != '\0'; i++)                 //run for loop for string1
    {
        for (j = 0; q[j] != '\0'; j++)             //run for for the string2
        {
            if(s[i] == q[j])                       //if match is found mean
            {
                    for(k = i;s[k] != '\0';k++)    //run for loop to matching charecter
                            s[k] = s[k+1];
            i--;                                   //decrement
            }
        }
    }
}
