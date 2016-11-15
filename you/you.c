#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
//int main(int argc, const char * argv[])
{
    float total = 0.0;
    float lecoins, change=0.0;
    int quarters=0, dimes=0, nickels = 0;
    printf("change: ");
    
    scanf("%f", &change);
    
    lecoins = round(change * 100);
    
    do{
        while(lecoins >= 25) {
        
            lecoins = lecoins - 25;
            quarters++;
            total++;
        }
        while(lecoins >= 10) {
        
            lecoins = lecoins -10;
            dimes++;
            total++;
        }
        while(lecoins >= 5) {
        
            lecoins = lecoins - 5;
            nickels++;
            total++;
        }
     
     }
     while(lecoins >0); {
     
        //main();
     }
     printf("quarter:%i\n Dimes:%i\n nickels:%i\n Total:%f\n",quarters, dimes, nickels, total);
    
    
}
