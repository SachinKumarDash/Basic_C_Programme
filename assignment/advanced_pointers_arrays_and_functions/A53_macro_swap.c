/*
Name: Sachin Kumar Dash
Date: 05 November 2022
Description:   A Program to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample Input:  1. Int
               2. char
               3. short
               4. float
               5. double
               6. string
               Enter you choice : 1

               Enter the num1 : 10
               Enter the num2 : 20
Sample Output: After Swapping :
                num1 : 20
                num2 : 10

*/

#include <stdio.h>
#include <stdlib.h>

//defining the macro 'swap(t, x, y)' to swap two arguments 'x' and 'y' of particular data-type 't' using variable 'temp' of same datatype 't'
#define SWAP(t, x, y)  \
{                      \
    t temp = x;        \
    x = y;             \
    y = temp;          \
}                      \


int main()                                                                                       //main function
{
        int choice;                                                                              //declaring variable 'choice' of datatype int
        
        
        printf("\n1-int\n2-char\n3-short\n4-float\n5-double\n6-string\n\nEnter you choice : ");  //reading the choice of datatype from user
        scanf("%d", &choice);

        //using switch statement to choose particular datatype depending on the user's choice
        switch (choice)
        {
            //case 1 is executed if user chooses (1-int)
            case 1 :
                {
                    int num1, num2;                      //declaring variables 'num1', 'num2' of datatype int 
                                                         //reading 'num1' and 'num2' from user
                    printf("\nEnter the num1 : ");
                    scanf("%d", &num1);
                    printf("Enter the num2 : ");
                    scanf("%d", &num2);
                                              
                    SWAP(int, num1, num2);              //calling the MACRO 'SWAP' by passing arguments 'int', 'num1' and 'num2'
                    printf("\nAfter swapping  :\nnum1 =  %d\nnum2 = %d\n", num1, num2);
                    break;
                }
            //case 2 is executed if user chooses (2-char)
            case 2 :
                {
                    char ch1, ch2;                      //declaring variables 'ch1', 'ch2' of datatype char
                    getchar();
                                                        //reading characters 'ch1' and 'ch2' from user
                    printf("\nEnter character ch1 : ");
                    scanf("%c", &ch1);
                    getchar();
                    printf("Enter character ch2 : ");
                    scanf("%c", &ch2);
                                                        //calling the MACRO 'SWAP' by passing arguments 'char', 'ch1' and 'ch2'
                    SWAP(char, ch1, ch2);
                    printf("\nAfter swapping  :\nch1 =  %c\nch2 = %c\n", ch1, ch2);
                    break;
                }
            //case 3 is executed if user chooses (3-short)
            case 3 :
                {
                    short int num1, num2;               //declaring variables 'num1', 'num2'  of datatype short int 
                                                        //reading 'num1' and 'num2' from user
                    printf("\nEnter the num1 : ");
                    scanf("%hd", &num1);
                    printf("Enter the num2 : ");
                    scanf("%hd", &num2);
                                                        //calling the MACRO 'SWAP' by passing arguments 'short int', 'num1' and 'num2'
                    SWAP(short int, num1, num2);
                    printf("\nAfter swapping  :\nnum1 =  %d\nnum2 = %d\n", num1, num2);
                    break;
                }
            //case 4 is executed if user chooses (4-float)
            case 4 :
                {
                    float num1, num2;                    //declaring variables 'num1', 'num2'  of datatype float
                                                         //reading 'num1' and 'num2' from user
                    printf("\nEnter the num1 : ");
                    scanf("%f", &num1);
                    printf("Enter the num2 : ");
                    scanf("%f", &num2);
                                                         //calling the MACRO 'SWAP' by passing arguments 'float', 'num1' and 'num2'
                    SWAP(float, num1, num2);
                    printf("\nAfter swapping  :\nnum1 =  %g\nnum2 = %g\n", num1, num2);
                    break;
                }
            //case 5 is executed if user chooses (5-double)
            case 5 :
                {
                    double num1, num2;                    //declaring variables 'num1', 'num2'  of datatype double
                                                          //reading 'num1' and 'num2' from user
                    printf("\nEnter the num1 : ");
                    scanf("%lf", &num1);
                    printf("Enter the num2 : ");
                    scanf("%lf", &num2);
                                                           //calling the MACRO 'SWAP' by passing arguments 'double', 'num1' and 'num2'
                    SWAP(double, num1, num2);
                    printf("\nAfter swapping  :\nnum1 =  %g\nnum2 = %g\n", num1, num2);
                    break;
                }
            //case 6 is executed if user chooses (6-string)
            case 6 :
                {
                    getchar();
                    char *str1, *str2;                      //declaring variables 'str1', 'str2' of datatype char *
                    str1 = malloc(20);                      //dynamically allocating string 'str1' with size 20 using malloc()
                                                            //reading string 'str1' from user using fgets
                    printf("\nEnter the string 'str1' : ");
                    fgets(str1, 20, stdin);
                    str2 = malloc(20);                      //dynamically allocating string 'str2' with size 20 using malloc()
                                                            //reading string 'str2' from user using fgets
                    printf("Enter the string 'str2' : ");
                    fgets(str2, 20, stdin);
                                                             //calling the MACRO 'SWAP' by passing arguments 'char *', 'str1' and 'str2'
                    SWAP(char *, str1, str2);
                    printf("\nAfter swapping  :\nstr1 =  %s\nstr2 = %s", str1, str2);
                                                             //after swapping de-allocating 'str1' and 'str2' using free()
                    free(str1);
                    free(str2);
                    break;
                }
        }
        
    return 0;                                 //after successfull compilation and run, returning the program
}
