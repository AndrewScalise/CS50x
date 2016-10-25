#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int showerLength = GetInt();
    
    //calculate gallons
    double gallonsPerMinute = showerLength * 1.5;
    
    //calculate ounces of water per minute
    double ouncesPerMinute = gallonsPerMinute * 128;
    
    //calculate bottles of water 16 ounces per bottle
    int bottles = ouncesPerMinute / 16.0;
    
    //print number of bottles
    printf("bottles: %i\n", bottles);
}