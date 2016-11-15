#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //Getting The user's input to determine mario's height
    do
    {   
        printf("height: ");
        height = GetInt();
    }   
    //Loop construct
    while (height > 23 || height < 0);
    {   
    //loop height construct
        int i;
        for (i = 0; i < height ; i++)
        {
           //Space to leave before hash is printed
            int space;
            for (space = height-2; space >=i; space--)
            {
                printf(" ");
            }
            //number of hashes to print as per input
            int hash;
            for (hash = 0; hash<=i+1; hash ++)
            {
                printf("#");
            }
            //printing on New line
            printf("\n");
        }
    }
    
    return 0;
}
