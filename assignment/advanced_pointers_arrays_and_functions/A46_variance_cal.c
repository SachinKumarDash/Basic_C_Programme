/*
Name: Sachin Kumar Dash
Date: 07 November 2022
Description:   A Program for Variance calculation with dynamic arrays
Sample Input:  Enter the no.of elements : 10

               Enter the 10 elements:
               [0] -> 9
               [1] -> 12
               [2] -> 15
               [3] -> 18
               [4] -> 20
               [5] -> 22
               [6] -> 23
               [7] -> 24
               [8] -> 26
               [9] -> 31
Sample Output: Variance is 40.000000
*/

#include <stdio.h>                                     //header files
#include <stdlib.h>

//declaring function 'variance_array' to calculate variance of statically & dynamically allocated array 
float variance_array(float *arr, int size);


                                                         //main function
int main()
{
    
        int n, choice;                                  //declaring variables 'n', 'choice' of data-type int
        float variance;                                 //declaring variable 'variance' of data-type float

        //reading the size of an array from the user
        printf("\nEnter the no.of elements : ");
        scanf("%d", &n);

        float *arr1;                                    //declaring dynamic array 'arr1' of datatype float *
                
                arr1 = malloc(n * sizeof(float));       //dynamically allocating memory for array 'arr1' using malloc
                //calling the function 'variance_array' by passing size 'n' as argument and the returned variance of dynamically allocated array stored in 'variance'
                variance = variance_array(arr1, n);
                printf("Variance is %f\n", variance);     //printing the variance
                free(arr1);    //deallocating array
                            
    return 0;                                 
}



                                                           //defining function 'variance_array'
float variance_array(float *arr, int size)
{
    
    int i;                 //declaring variable 
    float mean, variance;  

    //reading array elements from the user uisng for loop
    printf("\nEnter the %d elements\n", size);
    for (i = 0 ; i < size ; i++)
    {
        printf("[%d] -> ", i);
        scanf("%f", &arr[i]);
    }

    float sum = 0;  //declaring variable 'sum' of data-type float and initializing it to 0
    
    //calculating the 'sum' of all array elements using for loop
    for (i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }
    mean = sum / size;    //calculeting the mean of an array

    float D, sum1 = 0;    //declaring variables 'D', 'sum1 of data-type float and initializing 'sum1' to 0

    //calculating the 'D'(x - mean), 'sum1'(D^2) of all array elements using for loop
    for (i = 0 ; i < size ; i++)
    {
        D = arr[i] - mean;
        D = D * D;
        sum1 += D;
    }
    return variance = sum1 / size;     //returning the variance of array 
}
