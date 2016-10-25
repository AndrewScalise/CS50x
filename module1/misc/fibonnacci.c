#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long a = 0;
    long b = 1;
    long c = 1;
    
    for (int count = 0; count < 48; count++)
    {
        
        printf("%li ", c);
        c = a + b;
        a = b;
        b = c;
    }
}