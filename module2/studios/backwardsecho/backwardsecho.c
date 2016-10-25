#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[])
{
    for(int i = 0; i < argc; i++)
    {
        int n = strlen(argv[i]);
        for(int j = 0; n >= j; n--)
        {
            printf("%c", argv[i][n]);
        }
        printf(" ");
    }
    printf("\n");
}