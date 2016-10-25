/*$ ./stringindexes
Give me a string please: Bagel
The character at index 0 is B
The character at index 1 is a
The character at index 2 is g
The character at index 3 is e
The character at index 4 is l
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Give me a string please: ");
    string giveMe = GetString();
    
    int stringLength = strlen(giveMe);
    for (int i = 0; i < stringLength; i++)
    {
        printf("The character at index %i is %c\n", i, giveMe[i]);
    }
}