/*
Name: Sachin Kumar Dash
Date: 25 August 2022
Description: A Program to generate AP, GP, HP series
Sample Input: Enter the First Number 'A': 2
              Enter the Common Difference / Ratio 'R': 3
              Enter the number of terms 'N': 5
Sample Output: AP = 2, 5, 8, 11, 14
               GP = 2, 6, 18, 54, 162
               HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/



#include <stdio.h>                                            //header file


int main()                                                    //main function
{
    int AP, GP, HP, a, r, n, i;                               //taking variable

    printf("Enter the First Number 'A': ");                   //scanning and storing value of a
    scanf("%d", &a);

    printf("Enter the Common Difference / Ratio 'R': ");      //scanning and storing value of r
    scanf("%d", &r);

    printf("Enter the number of terms 'N': ");                //scanning and storing value of n
    scanf("%d", &n);

        if(n<0)                                               //checking if n is negative
        {
            printf("Invalid input\n");                        //error for negative input
        }   
        else
        {   
                
                /* Arithmetic Progression */
                printf("AP = ");
                for ( i = 0; i < n; i++ )                     //loop till nth times
                {   
                        printf("%d, ", a + i * r);            //printing output of every iteration
                }   
                printf("\n");                                 //printing newline
                
                //Geometric Progression 
                printf("GP = ");
                printf("%d, ", a);                            // printing first term
                 
                int s = a * r;                                //making the next term
                
                for ( i = 1; i < n; i++ )                     //loop running till nth times
                {   
                       printf("%d, ", s);                     //printing the result 
                       s = s * r;                             //updating the result
                }
                printf("\n");


                /* Harmonic Progression */
                printf("HP = ");
                for ( i = 0; i < n; i++ )                       //running loop till nth times
                {
                        printf("%f, ", (double)1/(a + i * r));  //printing result after every iteration
                }
                printf("\n");

        }

    return 0;
}
                                             

