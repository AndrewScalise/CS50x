#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool customstrcmp(char* s, char* t);

int main(void)
{
    printf("\nString 1?: ");
    char* string1 = GetString();
    
    printf("\nString 2?: ");
    char* string2 = GetString();
    
    bool areEqual = customstrcmp(string1, string2);
    
    if(areEqual)
    {
        printf("\nBingo! The strings are equal!\n");
    }
    else
    {
        printf("\nThe strings are not equal!\n");
    }
}

bool customstrcmp(char* s, char* t)
{
    
    if(s != NULL && t != NULL)
    {
        if(strcmp(s,t) == 0)
        {
            return true;
        }

    }
    
    return false;
    
}