/*
Name: Sachin Kumar Dash
Date: 25 November 2022
Description: A Program to implement fragments using Array of Pointers
Sample Input: Enter no.of rows : 3
              Enter no of columns in row[0] : 4
              Enter no of columns in row[1] : 3
              Enter no of columns in row[2] : 5
              Enter 4 values for row[0] : 1 2 3 4
              Enter 3 values for row[1] : 2 5 9
              Enter 5 values for row[2] : 1 3 2 4 1
Sample Output: Before sorting output is:
               1.000000 2.000000 3.000000 4.000000 2.500000
               2.000000 5.000000 9.000000 5.333333
               1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

After sorting output is:
               1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
               1.000000 2.000000 3.000000 4.000000 2.500000
               2.000000 5.000000 9.000000 5.333333
*/

#include <stdio.h>                                               //header for printf scanf
#include <stdlib.h>                                              //header dyanmic memory allocation
#include <stdio_ext.h>                                           //header for fpurge

void fragments(int ,int *, float **);                            //function declaration for fragment
void print(int ,int *, float **);                                //function declaration for printting

int main()                                                       //main start
    {
	int row_size, i , j;                                         //declaring required variable
        printf("Enter no.of rows : ");                           //instruction for row
        scanf("%d",&row_size);                                   //reading row size
        float *arr[ row_size ];                                  //declaring array of pointer of row size
        int col[ row_size ];                                     //declaring array of int for every columns
        for( i = 0 ; i < row_size ; i++ )                        //alloation dynamic memory for every row
	    {
		printf("Enter no of columns in row[%d] : ", i );         //instruction
                scanf("%d",&col[i]);                             //reading every columns size
                __fpurge(stdout);                                //clearing stdout
                arr[ i ] = malloc( ( col[ i ] + 1 ) * sizeof(float) ); //declaring dynamic columns one extra ele for average
	    }
	for( i = 0 ; i < row_size ; i++ )                                   //loop for reading every elements value
	    {
		float sum = 0;                                                  //sum variable for avg
                printf("Enter 4 values for row[%d] : ",i);              //instruction of row number
                for( j = 0 ; j < col[ i ] ; j++ )
		    {
			scanf("%f",&arr[ i ][ j ]);                                 //reading element
                        sum += arr[ i ][ j ];                           //adding all input
		    }
		arr[ i ][ j ] = sum / col[ i ];                                 //storing average in last index
	    }
	printf("Before sorting output is:\n");                              //Before storing instruction
        print( row_size , col , arr );                                  //function call printting before sorting
        fragments( row_size , col , arr );                              //funtion call to fragment
        printf("After sorting output is:\n");                           //instruction for after sorting
        print( row_size , col , arr );                                  //printing result after sorting

        for( i = 0 ; i < row_size ; i++ )                               //loop to free Dynamic memory
	    {
		free(arr[ i ]); //free
                arr[ i ] = NULL;                                         //assign to null
	    }
 return 0;
}

void fragments( int row , int *col , float **arr )                      //fragment function defination
    {
	float *temp;                                                        //declaring required variable and pointer
        int var;
        for( int i = 0 ; i < row - 1 ; i++ )                            //loop for sorting logic
	    {
		for( int j = 0 ; j < row-1 ; j++ )
		    {
			if( ( arr[ j ][ col [ j ] ] ) > ( arr [ j + 1 ] [ col [ j + 1 ] ] ) ) //required logic condition check
			    {
				temp = arr[ j + 1 ];                                              //swapping address of j and j+1
                                arr[ j + 1 ] = arr[ j ];
                                arr[ j ] = temp;
                                var = col[ j + 1 ];                               //swaping col size of j and j+1
                                col[ j + 1 ] = col[ j ];
                                col[ j ] = var;
			    }
		    }
	    }
    }
void print( int row_size , int *col , float **arr )                               //function printing element
    {
	for( int i = 0 ; i < row_size ; i++ )                                         //loop for rows
	    {
		for( int j = 0 ; j < ( col[ i ] + 1 ) ; j++ )                             //loop for columns
		    {
			printf("%f ",arr[i][j]);                                              //printing element
		    }
		printf("\n");
	    }
    }
