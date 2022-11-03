#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];                                        //declare the string
    
    printf("Enter the string  : ");                                 //enter the first string
    scanf("%s", str);                                               //reading the sting from the user
    
    __fpurge(stdout);                                                //clearing the buffer
 
    printf("Enter the delimeter : ");                                //enter the delimiter
    scanf("\n%s", delim);                                           //reading the delimeter fom the user
    __fpurge(stdout);                                                //clear the buffer
    
    char *token = my_strtok(str, delim);                            //call the function
    printf("Tokens :\n");                                           //print the tokens
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}
char *my_strtok(char str[], const char delim[])
{
        static int pos;                                         //delare the variable
        static char *ptr;
        int i=0,j=0,start=pos;
            if(str != NULL)                                     //check the string is not equal to null
                ptr = str;              
        while(ptr[pos] != '\0')                                 //logic to implement the strtok funtion
        {
                j=0;
                while(delim[j] != '\0')
                {
                        if(ptr[pos] == delim[j])                    //compare ptr[pos] is equal to delimter 
                        {
                                ptr[pos]='\0';                   //assign null charecter to the ptr[pos]
                                pos++;                          //increment the pos
                                if(ptr[start] != '\0')          //checking for the case where there is no relevent
                                        return (&ptr[start]);   //start specifies the location from where we have the null charecter
                                else
                                {
                                        start = pos;            //assign the start is equal to pos
                                        pos--;                  //derement pos
                                        break;
                                }
                        }
                        j++;                                    //increment the j value
                }
                pos++;                                          //increment the pos
        }
        if(ptr[start] != '\0')
                return &ptr[start];                             //return the address of ptr[start]
        else
                return NULL;                                    //return null
}
