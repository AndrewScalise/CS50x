/*under 16: You can't do much.
16 and over: You can drive!
18 and over: You can vote!
21 and over: You can drink! */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How old are you? ");
    int age = GetInt();
    
    if (age < 16)
    {
        printf ("\nYou can't do much...\n");
    }
    else if (age >= 16 && age <18)
    {
        printf("\nYou can drive!\n");
    }
    else if (age >= 18 && age < 21 )
    {
        printf("\nYou can drive!\nYou can vote!\n");
    }
    else
    {
        printf("\nYou can drive!\nYou can vote!\nYou can drink!\n");
    }
}