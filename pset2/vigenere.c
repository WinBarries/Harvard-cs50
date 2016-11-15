/*
This is a cs50 Vigenere cyphertext

Author Bolatito Kabir

Date of Submission 2015-04-29

*/
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
      
    if (argc != 2)
    {
        printf("Yell");
        return 1;
    }
     
   //Declaring the key function
    string key=argv[1];
    int keylen =strlen(argv[1]);
    for(int i=0; i<keylen; i++)
    {
    //encrypt only letters
      if(isalpha(key[i])) {
        if(isupper(key[i]))
        {
            key[i]=(key[i]-65);
        }
        else if(islower(key[i]))
        {
            key[i]=(key[i]-97);
        }
        }
       // yell if not letter
       else
        {
            printf("Only letters keyword\n");
            return 1;
        }
    }
    //Declaring the plaintext functions
    string message = GetString();
    int len = strlen(message);
    //loop implementation
    for(int i=0,k=0;i<len;i++)
    {
    //Encrypt letters plaintext using lettere keywords
        if isalpha(message[i])
        {
           if(isupper(message[i]))
           {
                message[i] = (((message[i]-65)+key[k++%keylen])% 26)+65;
           }
           else if (islower(message[i]))
           {
                message[i] = (((message[i]-97)+key[k++%keylen])% 26)+97;
           }
          }
       //Returning non-letter plaintext input
        else
            {
                message[i]=message[i];
            }   
       } 
       //printing all the encrypted plaintext
        printf("%s\n",message);
    return 0;
}
