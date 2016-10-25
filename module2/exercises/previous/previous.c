#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    for (int i = 1; i < argc; i++)
    {
        int n = atoi(argv[i]);
        printf("The previous number is %i\n", n-1);
    }
}