#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
 printf("Enter a string:");
 char* s = GetString();
 
 printf("Enter thesame value:");
 char* t = GetString();
 
    if( s != NULL && t != NULL)
    {
        if (strcmp(s, t) ==0)
        {
            printf("You typed thesame input\n");
        }
        else
        {
            printf("You typed in different input\n");
        }
    
    }
 
 
}
