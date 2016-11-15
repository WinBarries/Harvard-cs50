#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
printf("Please enter a value: ");
char* s = GetString();

if (s==NULL)
{
    return 1;
} 
char* t =malloc((strlen(s) +1) * sizeof(char));
if (t == NULL)
{
    free(s);
    return 1;
}
for(int i=0,n=strlen(s);n>=i;i++)
{
    t[i]=s[i];
}
printf("Making copies...\n");
printf("Calculating...\n");
if(strlen(t)>0)
{
    t[0] = toupper(t[0]);
}
printf("Oringinal Input: %s\n", s);
printf("Copyed Input: %s\n", t);
free(s);
free(t);

return 0;
}
