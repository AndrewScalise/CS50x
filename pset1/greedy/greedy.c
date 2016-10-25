#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float change = GetFloat();
    
    while(change < 0)
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    
    //round the change
    change = round(change*100);
    
    //counter for how many coins
    int counter = 0;
    
    //while quarters can be used
    float quarters = 25;
    while(change - quarters >= 0)
    {
        change -= quarters;
        counter += 1;
    }
    
    //while dimes can be used
    float dimes = 10;
    while(change - dimes >= 0)
    {
        change -= dimes;
        counter += 1;
    }
    
    //while nickels can be used
    float nickels = 5;
    while(change - nickels >= 0)
    {
        change -= nickels;
        counter += 1;
    }
    
    //while pennies can be used
    float pennies = 1;
    while (change - pennies >= 0)
    {
        change -= pennies;
        counter += 1;
    }
    
    
    //print how many coins
    printf("%d\n", counter);
    
}