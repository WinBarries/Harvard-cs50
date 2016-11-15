/*
This is cs50

Author Bolatito Kabir

Date of submisson 2015-04-29

*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  //Getting the string value
    string name = GetString();
    printf("%c",toupper(name[0]));
    
    for(int i=0, n=strlen(name); i<n; i++)
    {
    //checking through the begining and end of input
        if(name[i]==' ' && name[i+1]!= '\0')
        {
     //Printing out the First letter & movin to the next word begin
            printf("%c",toupper(name[i+1]));
            i++;
        }
    }
    printf("\n");
}
