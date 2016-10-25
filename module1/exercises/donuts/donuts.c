/*Welcome to the Loop Hole!
Today's Manager's Special is:
Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries Oops All Berries
How many would you like? 3.33333
How much would you like to pay per donut (suggested price is $4.35 each)? 2.5
Ok, let me prepare that for you....
After tax, your total is: $8.74999125
Thank you for snacking! Loop back around here soon!*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Welcome to the Loop Hole!\n");
    printf("Today's Manager's Special is: \n");
    printf("Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries Oops All Berries\n");
    printf("How many would you like? ");
    
    double what_you_want = GetDouble();
    
    printf("How much would you like to pay per donut (suggested price is $4.35 each)? ");
    double pay_per_donut = GetDouble();
    
    printf("Ok, let me prepare that for you....\n");
    
    double total = what_you_want * pay_per_donut + (what_you_want * pay_per_donut *.05);
    
    printf("After tax, your total is $%.8f\n", total);
    printf("Thank you for snacking! Loop back around here soon!\n");
    
}