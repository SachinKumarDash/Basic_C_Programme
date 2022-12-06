/*
Name: Sachin Kumar Dash
Date: 27 November 2022
Description: A Program to find the product of given matrix
Sample Input: Enter a number: Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
Sample Output: Product of two matrix :
14      14      14
14      14      14
14      14      14
*/


#include <stdio.h>                                                            //header for print and scan etc
#include <stdlib.h>                                                           //header for dynamic memory allocation

void matrix_mul(int **, int, int, int **, int, int, int **, int, int);        //function declaration for matrix multiplication
void read_matrix(int **,int ,int );                                           //function declaration for reading matrix elements
void read_row_col(int *,int *);                                               //function declaration for reading rows and columns
void free1(int **,int);                                                       //function declaration for free all dma

int main()                                                                     //main function start
    {
	int **mat_a, **mat_b, **result;                                            //declaring double pointer for 3 DMA array
        int row1=0,col1=0,row2=0,col2=0;                                       //declaring row and columns for 2 matrix
        read_row_col(&row1,&col1);                                             //function call to read row and col for matrix a
        mat_a=malloc(row1*sizeof(int *));                                      //dynamic memory allocation for matrix a row
        for(int i=0;i<row1;i++)
	    mat_a[i]=malloc(col1*sizeof(int));                                     //DMA for matrix a col
            read_matrix(mat_a,row1,col1);                                      //function call to read matrix a elements
            read_row_col(&row2,&col2);                                         //function call to read row and col for matrix b
            if(col1!=row2)                                                     //checking matrix multiplication is possible or not
		{
		    printf("Matrix multiplication is not possible");                   //error message
		    return 0;
		}
	    mat_b=malloc(row2*sizeof(int *));                                      //dynamic memory allocation for matrix b row
            for(int i=0;i<row2;i++)
		mat_b[i]=malloc(col2*sizeof(int));                                     //DMA for matrix b col
                read_matrix(mat_b,row2,col2);                                  //function call to read matrix b elements
                result=malloc(row1*sizeof(int *));                             //dynamic memory allocation for resultant matrix row
                for(int i=0;i<row1;i++)
		    result[i]=malloc(col2*sizeof(int));                                //DMA for resultant matix col
                    matrix_mul(mat_a,row1,col1,mat_b,row2,col2,result,row1,col2); //function call for matrix multiplication
                    free1(mat_a,row1);                                            //function call to free mat_a
                    free1(mat_b,row2);                                            //function call to free mat_b
                    free1(result,row1);                                           //function call to free result
    }
void read_matrix(int **ptr,int row,int col)                                       //function read matrix elements and its logic
    {
	printf("Enter values for %d x %d matrix :\n",row,col);
        for(int i=0;i<row;i++)
	    {
		for(int j=0;j<col;j++)
		    {
			scanf("%d",&ptr[i][j]);                                                //reading matrix element
		    }
	    }
    }
void read_row_col(int *row,int *col)                                               //function read matrix row and col and its logic
    {
	printf("Enter number of rows : ");                                             //instruction and reading row and col
        scanf("%d",row);
        printf("Enter number of columns : ");
        scanf("%d",col);
    }
void matrix_mul(int **mat_a, int row1, int col1, int **mat_b, int row2, int col2, int **result, int row, int col) //function for matrix multiplication
    {
	printf("Product of two matrix :\n");                                           //instruction
        for(int i=0;i<row;i++)                                                     //logic
	    {
		for(int j=0;j<col;j++)
		    {
			result[i][j]=0;
			for(int k=0;k<row2;k++)
			    {
				result[i][j]+=mat_a[i][k]*mat_b[k][j];                           //calculating & storing resulatant element
                            }
			printf("%d\t",result[i][j]);                                         //display resultant matrix elements
		    }
		printf("\n");
	    }
    }
void free1(int **ptr,int row)                                                    //function free body to free Dynamic memory allocation matrix and its logic
    {
	for(int i=0;i<row;i++)
	{
	    free(ptr[i]);
            ptr[i]=NULL;
	}
	
        free(ptr);
        ptr=NULL;
    }
