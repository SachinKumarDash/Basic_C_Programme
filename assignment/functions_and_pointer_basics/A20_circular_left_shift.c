/*
Name: Sachin Kumar Dash
Date: 01 October 2022
Description: A Program to implement Circular left shift
Sample Input:  Enter num: 12
               Enter n : 3
Sample Output: Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

                      
#include <stdio.h>   //header file


unsigned int circular_left(unsigned int val,unsigned int n);  //declaring functions circular_left, print_bits
int print_bits(int bits);


int main()                                            //main function that returns some integer at the end of execution
{
    int num, n, ret;                                 //declaring variables'num','n','ret'of data-type int
    
    //printf("Enter the num:");
    scanf("%d", &num);
    
    //printf("Enter n:");
    scanf("%d", &n);
    
    printf("Result in Binary:");
    
    ret = circular_left(num, n);
    
    print_bits(ret);
}
//funtion 'circular_left_shift' returning value of unsigned int type with arguments 'val','n' of data-type unsigned int is defined
unsigned int circular_left(unsigned int val,unsigned int n)
{
    return ((((((1 << n) - 1) << ((sizeof(int) * 8) - n)) & val) >> ((sizeof(int) * 8) - n)) | (val << n));    //returning the value of number 'val' after circular left shifting by 'n' bits
}

                                                      //funtion 'print_bits' returning value of int type with argument 'bits' of int data-type
int print_bits(int bits)
{
    int i;                                            //declaring variable 'i' of data-type int
    for (i = 31 ; i >= 0 ; i--)
    {
        printf(" %d", ((bits >> i) & 1));             //printing the number in binary form of 32 bit size (integer size) before and after circular shifting
    }
    printf("\n");
}
