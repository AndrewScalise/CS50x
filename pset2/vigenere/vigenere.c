#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int alphaPos(char letter);

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
    string k = argv[1];
    //check keyword is all characters
    for (int i = 0, n = strlen(k); i < n; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Only alphabetical characters accepted\n");
            return 1;
        }
    }
    
    
    string plainText = GetString();
    
    for (int i = 0, n = strlen(plainText), o = strlen(k), x = 0; i < n; i++, x++)
    {
        if(isalpha(plainText[i]) && isupper(plainText[i]))
        {
            int pos = alphaPos(k[x%o]);
            int c = (((plainText[i] - 65) + pos) %26) + 65;
            printf("%c", toupper(c));
        }
        
        else if(isalpha(plainText[i]) && islower(plainText[i]))
        {
            int pos = alphaPos(k[x%o]);
            int c = (((plainText[i] - 97) + pos) %26) + 97;
            printf("%c", tolower(c));
        }
        else
        {
            printf("%c", plainText[i]);
            x--;
        }
    }
    
    printf("\n");
    
}


  int alphaPos(char c)
  {
        if (isupper(c))
        {
            c = (int)c - 65;
        }
        else
        {
            c = (int)c - 97;
        }
        
    return c;
  }
    