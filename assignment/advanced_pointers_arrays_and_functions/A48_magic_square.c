#include <stdio.h>
#include <stdlib.h>

#define ARR_ROW 50
#define ARR_COL 50

int main()
{
    int num, row, column, i, j, dimension;
    char option;
    int magicMatrix[ARR_ROW][ARR_COL] = {0};
    
    do
    {
        do
        {
            /* Read an odd number n from user */
            printf("Enter the number: ");
            scanf("%d", &dimension);
            
            /* Do error checking */
            if ( (dimension % 2) == 0 )
            {
                continue;
            }
            else
            {
                break;
            }
            
        } while (1);
        
        /* Insert 1 to (n * n) numbers into matrix */
        /*
         * Step 1
         *  _	_	1	_	_
         *  _	_	_	_	_
         *  _	_	_	_	_
         *  _	_	_	_	_
         *  _	_	_	_	_
         */
        column = dimension / 2;
        row = 0;
        
        /* Create an n X n matrix */
        num = dimension * dimension;
        
        /* fill in circular array way i.e
         * next hop = ____________________________
         *            | r [up by 1 (r--)]   ^    |
         *            | c [right by 1(c++)] ->   |
         *            |__________________________|
         * boundary = ________________________
         *            | r = dim-1            |
         *            | c = 0                |
         *            |______________________|
         * occupied = ________________________
         *            | r [down by 1]   |    |
         *            |      (r++)     \|/   |
         *            |______________________|
         *
         * Matrix: dim =3
         *             __0___1___2__
         *        ^  0 |___|___|___|
         *        |  1 |___|___|___|   |
         *           2 |___|___|___|  \|/
         *
         */
        for( i = 1; i <= num ; i++ )
        {
            magicMatrix[ row ][ column ] = i;
            /* check for occupied value if so, go row++ and print */
            if( (i % dimension) == 0 )
            {
                row++;
            }
            else
            {
                /* boundary for row */
                if( row == 0 )
                {
                    row = dimension - 1;
                }
                else /* next hop */
                {
                    row--;
                }
                
                /* boundary for column */
                if( column == ( dimension - 1 ) )
                {
                    column = 0;
                }
                else /* next hop */
                {
                    column++;
                }
            }
        }
        
         printf("\n");
        /* Print n X n matrix */
        for (row = 0; row < dimension; row++)
        {
            for (column = 0; column < dimension; column++)
            {
                printf("%3d ", magicMatrix[row][column] );
            }
            printf("\n");
        }
        printf("\n");
        
        /* Prompt for Continue option */
        printf("Continue (y/n): ");
        scanf("\n%c", &option);
        
        if ( option == 'y' )
        {
            continue;
        }
        else
        {
            break;
        }

    } while(1);
    return 0;
}
