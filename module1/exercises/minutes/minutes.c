#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter a number of minutes: ");
    int num_minutes = GetInt();
    
    int minutes = num_minutes % 60;
    int hours = (num_minutes/60) % 24;
    int days = (num_minutes/60)/24;
    
    printf("The value you gave is %i days, %i hours, %i minutes\n", days, hours, minutes);
}