#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    int nameLength = strlen(name);
    
    //printf first initial
    char first = toupper(name[0]);
    
    printf("%c", first);
    
    //itierate through loop and if space print next character
    for(int i = 0; i < nameLength; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    
    printf("\n");
}