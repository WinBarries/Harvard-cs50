#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{   
    float coins = 0.0;
    //float change;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int pennies = 0;
    printf("change:$");
    float change = GetFloat();
    change = round(change * 100);
    

    do{
    
        while (change >= 25)
        {
            change = change - 25;
            quarter++;
            coins++;   
        }

        while (change >= 10)
        {
            change = change - 10;
            dime++;
            coins++;
        }

        while (change >= 5)
        {
            change = change - 5;
            nickel++;
            coins++;
        }

        while (change >= 1)  
        {
            change = change - 1;
            pennies++;
            coins++;
        }
      }  
        while (change != 0);
        {
            printf("change:$\n");
        }
      

    printf("Below are your changes:\n Quarter:%i\n Dime:%i\n Nickel:%i\n Pennies:%i\n Total coin:%f\n", quarter, dime, nickel, pennies, coins);
    return 0;
}
