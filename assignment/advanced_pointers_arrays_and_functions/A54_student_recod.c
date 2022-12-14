/*
Name: Sachin Kumar Dash
Date: 07 November 2022
Description:   A Program to Implement the student record using array of structures

Sample Test Case :
user@emertxe] ./student_record
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           Maths         Science       Average       Grade
1              Nandhu        99               91                95                  A
Do you want to continue to display(Y/y) : n
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Structure */
struct Student
{
    char name[30];
    struct Subject *sub;
    int total;
    int average;
    int totalSub;
};

struct Subject
{
    char subName[30];
    int marks;
};

struct Subject createStudentSubjectdata(struct Subject su)
{
    
    struct Subject *eachSubjectPtr = &su;
        
    printf("Enter the Sub name :");
    scanf("%s", eachSubjectPtr->subName);
            
    printf("Enter the Sub marks :");
    scanf("%d", &(*eachSubjectPtr).marks);
 
    return su;
}

struct Student createStudentdata(struct Student s)
{
    int i;
    int sum;
    int totalSub;
    
    struct Student *studentptr = &s; /* Pointer to the structure  pointing to struct Student s */
    int c;
    
    printf("Enter the student name: ");
    scanf("%s", studentptr->name);
    
    printf("Enter the number of subjects: ");
    scanf("\n%d", &totalSub);
    
    s.sub = (struct Subject *)malloc(totalSub * sizeof(struct Subject));
    
    if(NULL == s.sub)
    {
        printf("ERROR: malloc fail\n");
        exit (1);
    }
    
    sum = 0;
    for (i =0; i < totalSub; i++)
    {
        (*((s.sub)+i)) = createStudentSubjectdata((*((s.sub)+i)));
        /* Calculate Average of those three sub */
        sum+=((*((s.sub)+i))).marks;
    }
    
    /* update the totalSub value */
    studentptr->totalSub = totalSub;
    
    /* update the sum value */
    studentptr->total = sum;
    
    /* update the average value */
    studentptr->average = (sum/totalSub);
    
    //printf("average: %d \n ", studentptr->total);
    //printf("average: %d \n ", studentptr->average);
    return s;
}

void displayStudentdata(struct Student s)
{
    struct Student *studentptr = &s;
    int i;
    
    printf("Student name : %s \n", studentptr->name);
    printf("Total Subjects : %d \n", studentptr->totalSub);
    
    for (i = 0; i < studentptr->totalSub; i++)
    {
        printf("Subject name %s: --> marks [%d] \n", ((s.sub)+i)->subName, ((*((s.sub)+i))).marks);
        //printf("Subject name %d:  --> marks [%d]\n", (i+1), ((*((s.sub)+i))).marks );
    }
    
    printf("Total of marks : %d \n", s.total);
    printf("Average of marks : %d \n", s.average);
    
}

int main()
{
    int choice, i;
    static int TotalStudents = 0;
    static struct Student totalStu[10];
    char name[10];
    char option;
    
    do
    {
        printf("Enter what to do: \n");
        printf("1. Create Student\n2.Display Student Info \n");
        printf("Choice : ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1 :
                printf("No of students Database to be created: \n");
                scanf("\n%d", &TotalStudents);
                
                for(i = 0; i < TotalStudents; i++)
                {
                    totalStu[i] = createStudentdata(totalStu[i]);
                }
                break;
            case 2 :
                printf("\nPrint Student name whose info has to be displayed: ");
                scanf("%s", name);
                
                for(i = 0; i < TotalStudents; i++)
                {
                    if ((strcmp(totalStu[i].name, name) ) == 0 )
                    {
                        displayStudentdata(totalStu[i]);
                        break;
                    }
                }	
                break;		
            default:
                printf("Invalid option\n");
                break;
        }	
        
        /* ask the user whether to continue or not */
        printf("Continue(y/n): ");
        scanf("\n%s",&option);
        
        if (option == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
        
    } while (1);
    
    return 0;
    
}
