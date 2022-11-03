/*
Name: Sachin Kumar Dash
Date: 14 October 2022
Description: A Program to find 2nd largest element in an array
Sample Input:  Enter the size of the Array : 5
               Enter the elements into the array: 5 1 4 2 8
Sample Output: Second largest element of the array is 5
*/

#include <stdio.h>                                                        //header file

int sec_largest(int arr[], int size);                                     //function prototype
 
int main()                                                                //main function
{
    int n, size, ret;                                                     //variable declaration
    
    //Read size from the user
    //printf("Enter the size of the array :");
    scanf("%d", &size);                                                   //storing the user enter value
    
    int arr[size];                                                        //taking one array
    
    //Read elements into the array
    //printf("Enter the elements into the array: ");
     for(int i=0; i < size; i++)                                          //starting a loop to store user entered value in the array
     { 
       scanf("%d",&arr[i]);
     }
     
    ret = sec_largest(arr, size);                                         //funtion call
    
    printf("Second largest element of the array is %d\n", ret);
    return 0;                                                             //after successfull compilation and run, returning program
}

int sec_largest(int arr[], int size)
{
    int largest, second_largest= 0;

                                                                          //Iterate through array elements
  for(int i=0; i<size; i++)
  {
                                                                          //If element is greater than largest then update largest with new value and second_largest with old
       if(arr[i] > largest)
       {
          second_largest = largest;
          largest = arr[i];
       }
       
                                                                          //Otherwise if element is less than largest, 

       else if(arr[i] > second_largest && arr[i] != largest)              //but greater than second_largest, then only update second_largest
       {
         second_largest = arr[i];
       }
  }
        return second_largest;
}
