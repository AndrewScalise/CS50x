#include <cs50.h>
#include <stdio.h>
#include <string.h>

int letterCount(string input, char c);

int main(void)
{
    printf("Say something: ");
    string something = GetString();
    
    printf("Which character would you like to test for? ");
    char character = GetChar();
    
    int howManyGs = letterCount(something, character);
    printf("%i\n", howManyGs);
}

int letterCount(string input, char c)
{
    int length = strlen(input);
    int counter = 0;
    
    for(int i = 0; i<length; i++)
    {
        if (input[i] == c)
        {
            counter += 1;
        }
    }
    
    return counter;
}