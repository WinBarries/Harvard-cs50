#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
    string s = GetString();
    
    
    for(int i=0; i<argc; i++)
    {
        for (int j=0, n=strlen(argv[i]); j<n;j++)
        {
            if (islower(s[i]))
            {
                printf("%c\n",toupper(s([i][j])));

            }
            else
            {
                printf("%c\n",s[i]);
            }
        }
    }
    
}
