/*

Name: Sachin Kumar Dash
Date: 08 September 2022
Description: A Program to print all primes using Sieve of Eratosthenes method
Sample Input: Enter the value of 'n' : 20
Sample Output: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19

*/


#include<stdio.h>                                                    //header file

int main()                                                           //main function
{
    int num, i, j ;                                                  //declaring variable
    int PrimeNumber[num];                                            //declaring array


        printf("Enter the value of 'n' : ");                         //asking user to enter till which prime no. needed 
        scanf("%d", &num);                                           //storing the user entered value in respective variable
    
        
        if (num < 2)                                                 //setting condition to enter only positive number
        {
            printf("Please enter a positive number which is > 1\n"); //printing error if entering less then 2
            return 1;
        }
    
        
        for ( i = 2; i <= num ; i++ )                                //arranging all numbers from 2 to number in sequential order
        {
            PrimeNumber[i] = i;
        }
    
        for ( i = 2; i <= num; i++)
        {
            for ( j = i; j <= num; j++ )
            {
                PrimeNumber[(i * j)] = 0;                            //replacing all multiples with zero 
            }
        }
        printf("The primes less than or equal to %d are : \n", num);
  
        for ( i = 2; i <= num ; i++ )
        {
            
            if (PrimeNumber[i] != 0)                                 //setting condition to print only values except 0
            {
                printf("%d ", PrimeNumber[i]);
            }
        }
        printf("\n");
        
        return 0;
}
