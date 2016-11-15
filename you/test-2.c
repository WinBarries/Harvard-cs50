#include <cs50.h>
#include <stdio.h>
//#include <ctype.h>


int main(void)
{
    int height;
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height > 23 || height < 1);
    {
        int i;
        for (i = 0; i < height ; i++)
        {
        
            int space;
            for (space = height-2; space >=i; space--)
            {
                printf(" ");
            }
            int hash;
            for (hash = 0; hash<=i+1; hash ++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    
    return 0;
}
