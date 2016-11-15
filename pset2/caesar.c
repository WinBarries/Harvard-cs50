/*
This is a cs50 Caesar
 
Author Bolatito Kabir

Date of submission 2015-04-29
*/
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    //return if argc is not 2 
    if (argc != 2)
    {
        printf("scream!");
        return 1;
    }
    
    //Declaring the plaintext functions
    int len = 0;
    int k =atoi(argv[1]);
    string message = GetString();
    len = strlen(message);
    
    //LOOP FUNCTION
    for (int i = 0, n = strlen(message); i < n; i++)
    { 
        //If input is letters Encrypt
        if(isalpha(message[i]))
        {
        
            if(isupper(message[i]))
            { //wraping around the output for uppercase letters
                printf("%c",((((message[i]-65) + k) % 26) +65));
            }
            
            if(islower(message[i]))
            { //wrapping around the output for lowercase letters
                printf("%c",((((message[i]-97) + k) % 26) + 97));
            }
            
         }
         
        //If not letters leave input unchange
         else
            printf("%c",message[i]);
                          
    }
    
    //New line after Output
    printf("\n");
    return 0;
}
