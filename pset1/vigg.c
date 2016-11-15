#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
       
    if (argc != 2)
    {
        GetString();
        return 1;
    }
     
   // int keylen = 0;
    char *key=argv[1];
    int keylen =strlen(argv[1]);
    //int keycode[keylen];
        
    for(int i=0; i<keylen; i++)
    {
       // printf("key[%i]==%c\n",i,key[%i]);
        if(isupper(key[i]))
        {
            key[i]=(key[i]-65);
        }
        else if(islower(key[i]))
        {
            key[i]=(key[i]-97);
        }
    }
    int keycount=0;
    
    
    string message = GetString();
    int len = strlen(message);
    for(int i=0;i<len;i++)
    {
        if isalpha(message[i])
        {
           if(isupper(message[i]))
           {
                message[i] = (((message[i]-65)+key[keycount])% 26)+65;
           }
           else if (islower(message[i]))
           {
                message[i] = (((message[i]-97)+key[keycount])% 26)+97;
           }
           key++;
          }  
       } 
        printf("%s\n",message);
    return 0;
}
