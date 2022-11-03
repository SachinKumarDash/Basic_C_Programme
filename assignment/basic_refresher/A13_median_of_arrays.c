/*
Name: Sachin Kumar Dash
Date: 04 September 2022
Description: A Program to find the median of two unsorted arrays
Sample Input: Enter the 'n' value for Array A: 5
              Enter the 'n' value for Array B: 5

              Enter the elements one by one for Array A: 3 2 8 5 4
              Enter the elements one by one for Array B: 12 3 7 8 5

Sample Output: Median of array1 : 4
               Median of array2 : 7
               Median of both arrays : 5.5 
*/


#include<stdio.h>                                       //main function

void sort(int arr[], int size)                          //creating a function for sorting of elements in an array
{
    int i, j, temp;                                     //taking variable for sorting and swapping
    for(i = 0 ; i < size ; i++)                         //running the loop for first number
    {
        for(j = i + 1 ; j < size ; j++)                 //running the loop for comparing adjacent number
	    
            if(arr[i] >= arr[j])                        //checking if first number is greater then the second number or not
                {
		    
                    temp = arr[i];                      //doing the swapping if condition satifies
                    arr[i] = arr[j];
                    arr[j] = temp;
		}
    }
        
}

int main()                                              //main function
    
    {
	float median1, median2;                             //declaring two variable globally as to use later for combine median
        printf("Enter the 'n' value for Array A: ");    //asking the user to enter size of array1
     
        int size1, i;                                   //declaring variable
        scanf("%d", &size1);                            //storing size of array entered by user
        int arr1[size1];                                //declaring array

        printf("Enter the 'n' value for Array B: ");    //asking the user to enter size of array2
     
        int size2;                                      //declaring variable
        scanf("%d", &size2);                            //storing size of array entered by user
        int arr2[size2];                                //declaring array

        printf("Enter the elements one by one for Array A: \n");  //asking the user to enter elements for array1

        for(i = 0 ; i < size1 ; i++)                              //running the loop till size times
	    
            {
                scanf("%d",&arr1[i]);                             //storing all elements in arr1 enetered by user  
            }

        printf("Enter the elements one by one for Array B: \n");  //asking the user to enter elements for arr2

        for(i = 0 ; i < size2 ; i++)                              //running the loop till size times
	    
            {
                scanf("%d",&arr2[i]);                             //storing all elements in arr2 enetered by user 
            }
	
        sort(arr1, size1);                                        //calling the sorting function to do the sort for arr1
        sort(arr2, size2);                                        //calling the sorting function to do the sort for arr2
 
        /*
        printing arr1 and arr2 to check if the sorting done successfully
        printf("After sorting for Array A: \n");
     
        for(i = 0 ; i < size1 ; i++)
	    
            {
                printf("%d ",arr1[i]);
            }
        printf("\n");

        printf("After sorting for Array B: \n");
     
        for(i = 0 ; i < size2 ; i++)

            {
                printf("%d ",arr2[i]);
            }
        printf("\n");
	*/

        if(size1 % 2 == 1)                                         //checking if size of arr1 is odd
	    
            {
                median1 = arr1[ size1 / 2 ];                       //printing median by checking respective index
                printf("Median of array1 : %g",median1);
            }
        else                                                       //printing median in case the length of arr1 is even 
	                                                               //by doing (size/2) and (size/2) -1 to get both index
            {
                median1 = ( arr1[ size1 / 2 ] + (arr1[( size1 / 2) - 1 ])) / 2.0;   
	        printf("Median of array1 : %g\n",median1);
             }
        printf("\n");

       
        if(size2 % 2 == 1)                                         //checking if size of arr2 is odd
	    
            {
		
                median2 = arr2[ size2 / 2] ;                       //printing median by checking respective index
                printf("Median of array2 : %g",median2);
            }
        else                                                       //printing median in case the length of arr2 is even 
	                                                               //by doing (size/2) and (size/2) -1 to get both index
            {
                median2 = (arr2[ size2 / 2 ] + (arr2[( size2 / 2 ) - 1 ])) / 2.0;
	        printf("Median of array2 : %g\n",median2);
            }
	
        printf("\n");
        
        printf("Median of both arrays : %g", (median1 + median2) / 2);   //printing median of both arr1 and arr2
	printf("\n");
        
	
    
        return 0;
 }
