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
     
   
    char *key=argv[1];
    int keylen =strlen(argv[1]);
    
        
    for(int i=0; i<keylen; i++)
    {
      
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
    if(keycount < keylen-1)
    {
        keycount++;
    }
    else
    {
        keycount=0;
    }
    
    string message = GetString();
    int len = strlen(message);
    for(int i=0,k=0;i<len;i++)
    {
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
           //key++;
          }
       
        else
            {
                message[i]=message[i];
            }   
       } 
        printf("%s\n",message);
    return 0;
}
