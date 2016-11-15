#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(int agrc, string argv[])
{
    /*if(argc != 2)
   {
        printf("input:");
        return 1;        
    } *///turn arg into int fr d key  
    int key = atoi(argv[1]);
    printf("Message:");
    //get user's msg
    string s =GetString();
    
    //go through each element
    for(int i=0,n=strlen(s);i<n;i++)
    {
        char j=s[i];
        int number=(int)j;
    
        int result=(number+key);
        char c=result;
    
   /* if(result <65, result >122)
    {
        result=((number+key)%26);
        printf("%c",c)
    }
   */

    printf("%c", c);
    }
    printf("\n");
    
    return 0;
}
