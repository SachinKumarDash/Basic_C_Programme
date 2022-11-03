*
Name: Sachin Kumar Dash
Date: 09 October 2022
Description: A Program to remove duplicate elements in a given array
Sample Input:  Enter the size: 5
               Enter elements into the array: 5 1 3 1 5
Sample Output: After removing duplicates: 5 1 3
*/

#include<stdio.h>  //header file

void fun(int arr1[], int size, int arr2[], int *new_size) //declraing a function to do the operation
{
        int i, j;
        for(i = 0 ; i < size ; i++)
        {
                for(j = 0 ; j < *new_size ; j++)
                {
                        if(arr1[i] == arr2[j])
                        {
                                break;
                        }
                }
                if(j == *new_size)
                {
                        arr2[*new_size]=arr1[i];
                        (*new_size)++;
                }
        }


       
}

int main()   //main function
{
        int size, i, new_size = 0;   //declaring variable
        //printf("Enter the size: ");
        scanf("%d", &size); //asking to enter size of the arr
        //printf("Enter elements into the array:");
        int arr1[size],arr2[size];
        for(i = 0 ; i < size ; i++)
        {
                scanf("%d", &arr1[i]); //taking input one by one
        }
        fun(arr1, size, arr2, &new_size); //calling the declared function
        
        printf("After removing duplicates: ");

        for(i = 0 ; i < new_size ; i++)
	{
	    printf("%d ",arr2[i]);
	}
	printf("\n");

}
