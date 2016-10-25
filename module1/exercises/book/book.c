#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("What's your favorite book? ");
    string bookName = GetString();
    printf("I love %s!", bookName);
    printf("\n...actually, %s is kind of meh.\n", bookName);
}