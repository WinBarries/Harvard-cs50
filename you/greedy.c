#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    int coins=0;
    
    printf("change:$\n");
    float change = GetFloat();
    change = round(change * 100);    

   while (change > 0)
       
       if (change >= 25)
        {
            change = change - 25;
            coins++;   
        }

        else if (change >= 10)
        {
            change = change - 10;
            coins++;
        }

        else if (change >= 5)
        {
            change = change - 5;
            coins++;
        }

        else if (change >= 1)  
        {
            change = change - 1;
            coins++;
        }
      if(change < 0)
       {
            //printf("You cannot use negative numbers.");
            main();
       }
    
          
        
    printf("%d\n",coins);
    
    // return 0;
}
