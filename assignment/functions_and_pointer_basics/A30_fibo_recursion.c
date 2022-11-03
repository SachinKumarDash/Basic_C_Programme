/*
Name: Sachin Kumar Dash
Date: 02 October 2022
Description: A Program to generate positive fibbonacci numbers using recursion
Sample Input:  Enter a number: 8
Sample Output: 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

//declaring function 'fibonacci_pos_neg' returning value of data-type int with arguments 'first', 'second', 'N' of data-type int
int fibonacci_pos(int first,int second,int N);

    

int main()                                               //main function that returns some integer at the end of execution
{
    int N;                                               //declaring variable 'N' of datatype int 
    int first,second,fibo;                               //declaring variables 'first', 'second', 'fibo' of datatype int
    
                                                         //reading the value of 'N' from the user
        printf("Enter a number : ");
        scanf("%d", &N);
        if (N < 0)                                       //checking for negative N
        {
            printf("Invalid input\n"); 
	
        }
		else if (N == 0)
		{
		    printf("0\n");
		}
        else
        {
            first = 0;                                     //initialing 'first'= 0 and 'second'= 1
            second = 1;
            printf("%d ",first);                           //printing the first term of the fibonacci series
            printf("%d ",second);                          //printing the second term of the fibonacci series


                                                          //printing the fibonacci series

                                                          //calling the function 'fibonacci_pos_neg' to print 
        fibonacci_pos(first, second, N);                  //all +ve fibonacci terms other than first and second term of the series

        }
    return 0;                                             //after successfull compilation and run, returning the program
}
int fibonacci_pos(int first,int second,int N)
{
	int fibo;                                             //declaring the variable 'fibo' of data-type int

                                                          //checking for positive N to print +ve fibonacci series
	if (N >= 1)
	{
		
		fibo = first + second;                             //assigning 'fibo' as 'first'+'second'
        
                                                           //checking if 'fibo' <= N to print +ve fibonacci series
		if (fibo <= N)
		{
			printf("%d ", fibo);                           //printing one fibboncci term upto <= 'N' at a time
			fibonacci_pos (second, fibo, N);               //calling function 'fibonacci_pos' 
		}                                                  //recursively to print next fibbonacci term each time
	}
                                                            

}
