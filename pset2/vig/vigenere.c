#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//Adding the key function pointer
 int key_c(int *ik, int lk, string key)
    {
        int k = (int) key [(*ik)++ % lk];
        if(k >= 97 && k <= 122 ) 
        {
        k = k - 97;
        }
        else if( k >= 65 && k <= 90 )
        {
         k = k - 65;
        }
    return k;
    }
int main(int argc, string argv[])
{
   
    if (argc != 2)
    {
        printf("scream!");
        return 1;
    }
    //Adding the input declaration
     string message = GetString();
    int len = strlen(message);  
    
    //Adding the key decclaration
    string K = argv[1];
    int ik = 0, lk = strlen(K);
    for(int i=0;i<len;i++)
    {
        if isalpha(message[i])
        {
            if isupper(message[i])
            { //wrapping the key and input 
                printf("%c",(((message[i]-65)+ key_c(&ik,lk,K))%26)+65);
                
            }
            if islower(message[i])
            {  //wrapping the key and input
                printf("%c",(((message[i]-97)+ key_c(&ik,lk,K))%26)+97);
                
            }
            
        }  
        else
        printf("%c",message[i]);
    }
    //New line after Output
    printf("\n");
    return 0;

}    
