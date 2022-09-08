/*
Name: Sachin Kumar Dash
Date: 20 August 2022
Description: A Program to find which day of the year
Sample Input: Enter a number: Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
Sample Output: The day is Tuesday
*/

#include<stdio.h>                                            //header file
int main()                                                   //main function
{
    int n, start, n1, n2;                                   //taking variable
    printf("Enter the value of 'n'\n");                     //asking for the nth day
    scanf("%d", &n);                                        //scanning to store the nth value
    if (n > 0 && n<=365)                                                      //setting range of n
    {
	printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day : ");
       	scanf("%d", &start); //giving option to user to choose anyone from the given option
	if ( start > 0 && start <= 7) //giving range for the above option
	{
	    n1 = ((n - 1) + start);                             //logic 1
	    n2 = n1 % 7;                                        //logic 2 to find the day from remainder
	    switch (n2)                                         //case execution for each day
	    {
		case 1:
		    printf("The day is Sunday\n");
		    break;
		case 2:
		    printf("The day is Monday\n");
		    break;
		case 3:
		    printf("The day is Tuesday\n");
		    break;
		case 4:
		    printf("The day is Wednesday\n");
		    break;
		case 5:
		    printf("The day is Thursday\n");
		    break;
		case 6:
		    printf("The day is Friday\n");
		    break;
		case 0:
		    printf("The day is Saturday\n");                                    
		    break;
	    }
	}
	else
	{
	    printf("Error: Invalid input, first day should be > 0 and <= 7\n");      //if user enters other then 1 to 7
	}
    }
    else
    {
	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");          //if user enters other then 1 to 365
    }
}
