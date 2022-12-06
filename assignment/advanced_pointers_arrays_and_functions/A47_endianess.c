/*
Name: Sachin Kumar Dash
Date: 25 November 2022
Description: A Program  to convert Little Endian data to Big Endian
Sample Input:  Enter the size: 2
               Enter any number in Hexadecimal: ABCD
Sample Output: After conversion CDAB
*/




#include<stdio.h>                                                                  //header

void lit_big_endian(void *value, int size);                                        //function declaration

int main()
    {
        int size,user_ip=0;                                                         //declaring required variable of int and short
        short int user_ip2=0;
        printf("Enter the size:");                                                  //instruction for entering size value
        scanf("%d",&size);                                                          //reading size value
        if(size==2||size==4)                                                        //checking size is 2 or 4
            {
                printf("Enter any number in Henumadecimal: ");                      //instruction
                if(size==2)                                                         //if(size-2)
                    {   
                        scanf("%hX",&user_ip2);                                     //read value in 2 bytes
                        lit_big_endian(&user_ip2,2);                                //function call
                    }   
                else                                                                //if size is 4
                    {   
                        scanf("%X",&user_ip);                                       //reading value in 4 bytes
                        lit_big_endian(&user_ip,4);                                 //function call
                    }
                printf("After conversion ");
                size==2?printf("%hX",user_ip2):printf("%X",user_ip);                //printing result
            }
    }

void lit_big_endian(void *value, int size)                                          //function defination for little to big endian
    {
        char temp;                                                                  //declaring temp
        for(int i=0,j=size-1;i<size/2;i++,j--)                                      //loop and logic to convert to big_indian
        {
            temp=*((char *)value+j);
            *((char *)value+j)=*((char *)value+i);
            *((char *)value+i)=temp;
  }
    }
