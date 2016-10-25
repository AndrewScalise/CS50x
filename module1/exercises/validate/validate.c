/*Give me an even integer please: 3
Give me an even integer please: 35
Give me an even integer please: 6
Thanks! I got what I wanted.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Give me an even integer please: ");
        n = GetInt();
    } while (n%2 != 0);
    
    printf("Thanks! I got what I wanted.\n");
}