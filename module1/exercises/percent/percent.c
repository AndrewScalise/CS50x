#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf ("float please: ");
    float a = GetFloat();
    printf ("float please: ");
    float b = GetFloat();
    
    printf("%.6f percent\n", ((a / b) * 100));
}