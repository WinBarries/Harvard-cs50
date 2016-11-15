#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    int len = 0;
    int k =atoi(argv[1]);
    int keylenght=strlen(k);
    
    string message = GetString();
    len = strlen(message);
    
    
    if(argc != 2)
        {
            //printf("message:\n");
            //string message = GetString();
            GetString();
            return 1;
        }
     
       
    for (int i = 0, n = strlen(message); i < n; i++)
    { 
        if(isalpha(message[i]))
        {
            if(isupper(message[i]))
            {
                printf("%c",((((message[i]-65) + k) % 26) +65));
            }
            if(islower(message[i]))
            {
                printf("%c",((((message[i]-97) + k) % 26) + 97));
            }
         }
            else
                printf("%c",message[i]);
              
        
    //int result=(message[i] + k);
   // printf("%c",result);
    
    }
    printf("\n");
    return 0;
}
