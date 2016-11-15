#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
// add this function
int key_c(int *ik, int lk, string key){
    int k = (int) key[(*ik)++ % lk];
    if(k >= 97 && k <= 122 ) k = k - 97;
    else if( k >= 65 && k <= 90 ) k = k - 65;
    return k;
}
int main(int argc, string argv[])
{
   int len = 0;
   // int k =atoi(argv[1]); uncomment this one
   string message = GetString();
   len = strlen(message);
   
   if(argc != 2)
       {
           printf("Yell!"); // this is the Yelling! part
           return 1;
       }
  // add 2 lines
  string K=argv[1];
  int ik=0,lk= strlen(K);
      
   for (int i = 0, n = strlen(message); i < n; i++)
   { 
       if(isalpha(message[i]))
       {
           if(isupper(message[i]))
           {
               printf("%c",((((message[i]-65) + key_c(&ik,lk,K)) % 26) +65)); // k will become key_c(&ik,lk,K)

           }
           if(islower(message[i]))
           {
               printf("%c",((((message[i]-97) + key_c(&ik,lk,K)) % 26) + 97)); // k will become key_c(&ik,lk,K)
           }
        }
           else
               printf("%c",message[i]);
   
   }
   printf("\n");
   return 0;
}
