/*Count down from: 3
3...
2...
1...
BLAST OFF!*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Count down from: ");
    int countdown = GetInt();
    
    if (countdown > 0)
    {
        for (int x = 0; countdown > x; countdown--)
        {
            printf("%i...\n", countdown);
        }
        printf("Blast OFF!\n");
    }
    else
    {
        for (int y = 0; countdown < y; countdown++)
        {
            printf("%i...\n", countdown);
        }
        printf ("Blast OFF!\n");
    }
}