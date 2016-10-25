#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("How many orange slices do you want to eat? ");
    int orangeSlices = GetInt();
    
    float oranges = orangeSlices/8.0;
    float buyOranges = ceil(oranges);
    
    printf("You should buy %.f oranges!\n", buyOranges);
}