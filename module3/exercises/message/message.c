/*$ ./message
Name of sender: Count Chocula
Name of recipient: Count Vanilla
Message: I like you.

Dear Count Vanilla,

I like you.

Sincerely, 
Count Chocula*/

#include <stdio.h>
#include <cs50.h>

void printMessage(string, string, string);

int main(void)
{
    printf("Name of sender: ");
    string sender = GetString();
    
    printf("Name of recipient: ");
    string recipient = GetString();
    
    printf("Message: ");
    string message = GetString();
    
    printMessage(sender, recipient, message);
}

void printMessage(string sender, string recipient, string message)
{
    printf("\nDear %s, \n\n%s\n\nSincerely,\n%s\n", recipient, message, sender);
}