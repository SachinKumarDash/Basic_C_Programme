/*
Name: Sachin Kumar Dash
Date: 05 November 2022
Description:   A Program to define a macro SIZEOF(x), without using sizeof operator
Sample Input:  Run the program
Sample Output: Size of int : 4 bytes
               Size of char : 1 byte
               Size of float : 4 bytes
               Size of double : 8 bytes
               Size of unsigned int : 4 bytes
               Size of long int : 8 bytes

*/

#include <stdio.h>        //header file

//defining the macro 'SIZEOF(x)' to find the size of particular data-type by considering the address of 'x' as char(type-casting) and finding the difference (&x+1 - &x) to get sizeof(datatype)
#define SIZEOF(x) (char*) (&x + 1) - (char*) (&x)


int main()                //main function 
{
    int x;                //declaring variable 'x' of datatype int 
    char ch;              //declaring variable 'ch' of datatype char
    float ft;             //declaring variable 'ft' of datatype float
    double de;            //declaring variable 'de' of datatype double
    unsigned int ui;      //declaring variable 'ui' of datatype unsigned int
    long int li;          //declaring variable 'li' of datatype long int

    printf("Size of int\t\t : %zu bytes\n", SIZEOF(x));
    printf("Size of char\t\t : %zu byte\n", SIZEOF(ch));
    printf("Size of float\t\t : %zu bytes\n", SIZEOF(ft));
    printf("Size of double\t\t : %zu bytes\n", SIZEOF(de));
    printf("Size of unsigned int\t : %zu bytes\n", SIZEOF(ui));
    printf("Size of long int\t : %zu bytes\n", SIZEOF(li));

    return 0;             //after successfull compilation and run, returning the program
}
