//This is a code that ask for change you owe someone
//Your change will be given back in coins using the largest coin value
#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{   
    int coins = 0.0;
    float change = 0;
     //Ask for change  
    printf("change:$");
    change = GetFloat();
    change = round(change * 100);
     
     do{ 
     //If the change is greater than 25(Quarter)       
            while (change >= 25)
            {
                change = change - 25;
                coins++;   
            }
     //If the change remaining is greater than 10(Dime)
            while (change >= 10)
            {
                change = change - 10;
                coins++;
            }
     //If the change remaining is greater than 5(nickel)
            while (change >= 5)
            {
                change = change - 5;
                coins++;
            }
     //If the change remaining is greater than 1(pennies)
            while (change >= 1)  
            {
                change = change - 1;
                coins++;
            }
     //If the change is less zero,Reprompt user for input    
            while(change < 0)
            {
                main();
            }
        }
     //If the conditions are met,return the change th reciever's get
        while (change > 0);
  
            printf("%d\n",coins);
        
}
