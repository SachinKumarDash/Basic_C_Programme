/*
Name: Sachin Kumar Dash
Date: 19 September 2022
Description: A Program to put the (b-a+1) lsb’s of num into val[b:a]
Sample Input:  Enter the value of 'num' : 11
               Enter the value of 'a' : 3
               Enter the value of 'b' : 5
               Enter the value of 'val': 174
Sample Output: Result : 158
*/

#include<stdio.h>                                                    //header file

int replace_nbits_from_pos(int, int, int, int);                      //function prototype

int main()                                                           //main function
{
    int num, a, b, val, res = 0;                                     //declaring variable
    
    printf("Enter the value of 'num' :");                            //asking user to enter values
    scanf("%d",&num);                                                //storing user input
    printf("Enter the value of 'a' :");                              //asking user to enter values
    scanf("%d",&a);                                                  //storing user input
    printf("Enter the value of 'b' :");                              //asking user to enter values
    scanf("%d",&b);                                                  //storing user input
    printf("Enter the value of 'val':");                             //asking user to enter values
    scanf("%d",&val);                                                //storing user input
    
    res = replace_nbits_from_pos(num, a, b, val);                    //storing the called function result in a variable
    
    printf("Result = %d\n", res);                                    //printing the stored value of called function
        return 0;
}
int replace_nbits_from_pos(int num, int a, int b, int val)           //function definition
{
        int clear,get,mask1,mask2,result,n,mask3;
        n = b - a + 1;                                               //Find ‘n’ number of bits to be replaced in val//
        mask1 = (~(((1 << n)-1) << (b - n + 1)));
        clear = val & mask1;                                         //Clear n bits from position b of ‘val'//
        mask2 = (1 << n)-1;
        get = num & mask2;                                           //Fetch n bits from LSB end of ‘num’ //
        mask3 = get << (b - n + 1);
        result = clear | mask3;                                      //updated value of ‘val’ after replacing number of bits from position ‘b’//
        return result;
}
                                                               

