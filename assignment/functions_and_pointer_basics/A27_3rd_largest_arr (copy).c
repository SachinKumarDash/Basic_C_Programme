/*
Name: Sachin Kumar Dash
Date: 14 October 2022
Description: A Program to find 3rd largest element in an array
Sample Input:  Enter the size of the Array : 5
               Enter the elements into the array: 5 1 4 2 8
Sample Output: Second largest element of the array is 4
*/

#include <stdio.h>                                                //header file

int third_largest(int arr[], int size);                           //function declaration

int main()                                                        //declaring function
{
    int n, size, ret;                                             //intializing int datatype varaiable n,size,ret
    
    //Read size from the user
    //printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    //printf("Enter the elements into the array: ");
     for(int i=0; i < size; i++)
     { 
       scanf("%d",&arr[i]);
     }
                                                                       //funtion call
    ret = third_largest(arr, size);
    
    printf("third largest element of the array is %d\n", ret);
    return 0;                                                          //after successfull compilation and run, returning program
}

int third_largest(int arr[], int size)                                 //function definition
{
    int largest, second_largest, third_largest = 0;
    
                                                                       //Iterate through array elements
  
  for( int i=0; i<size; i++)
  {
                                                                       //If element is greater than largest then 
                                                                       //update largest with new value and 
       if(arr[i] > largest)                                            //second_largest with largest and third_largest with old value
       {  
          third_largest = second_largest;
          second_largest = largest;
          largest = arr[i];
       }
       
       //Otherwise if element is less than largest but greater than third_largest, then only update third_largest
        
         else if(arr[i] > second_largest) 
       {
         third_largest = second_largest;
          second_largest = arr[i];
       }
       
       else if(arr[i] > third_largest)
       {
         third_largest = arr[i];
       }
  }
        return third_largest;
}
