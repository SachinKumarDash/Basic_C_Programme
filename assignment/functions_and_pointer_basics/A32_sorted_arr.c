/*
Name: Sachin Kumar Dash
Date: 17 October 2022
Description: A Program to Print the values in sorted order without modifying or copying array
Sample Input:  Enter the size : 5
               Enter 5 elements 
               10 1 3  8 -1
Sample Output: After sorting: -1 1 3 8 10
               Original array values 10 1 3 8 -1
*/

#include <stdio.h>

void print_sort(int [], int);                                       //function prototype

int main()
{
    int size, iter;                                                 //variable declaration
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);                                             //read the input from user
    
    int arr[size];                                                  //array declaration
    
    printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);                                    //read array elements from user
    }
    
    print_sort(arr, size);                                         //function call
    return 0;
}
void print_sort(int arr[], int size)                               //function definition
{
    int i, j, temp, largest = arr[0], smallest = arr[0];
    for( i = 1 ; i < size ; i++ )
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("After sorting ");
    for(i = 0; i < size; i++)
    {
        temp = largest;
        printf("%d ", smallest);
            for(j = 0; j < size; j++)
            {
                if(arr[j] > smallest && arr[j] < temp)
                {
                    temp = arr[j];
                }
            }
       smallest = temp;
    }
    printf("\n");
    printf("Original array values ");
    for( i = 0 ; i < size ; i++ )
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
