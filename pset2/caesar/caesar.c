#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    //convert string to int
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("Can't proceed!\n");
        return 1;
    }
    
    string p = GetString();
    //iterate through the string
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isalpha(p[i]) && isupper(p[i]))
        {
            int c = (((p[i] - 65) + key)%26) + 65;
            printf("%c", toupper(c));
        }
        else if (isalpha(p[i]) && islower(p[i]))
        {
            int c = (((p[i] - 97) + key)%26) + 97;
            printf("%c", tolower(c));
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    
    printf("\n");
}