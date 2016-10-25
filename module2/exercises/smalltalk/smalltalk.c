/*$ ./smalltalk
How's your day going? fine
Not much of a talker, I see. Maybe elaborate a little more next time.

$ ./smalltalk
How's your day going? Pretty good, I just wrote the code that comprises your existence.
zzzzzz... Huh? Oh yeah, totally. I know what you mean...

$ ./smalltalk
How's your day going? Good. I like your shoes.
Nice! Mine's going well, thanks for asking.
*/


#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("How's your day going? ");
    string smallTalk = GetString();
    
    if (strlen(smallTalk) < 20)
    {
        printf("Not much of a talker, I see. Maybe elaborate a little more next time.\n");
    }
    else if (strlen(smallTalk) > 50)
    {
        printf("zzzzz... Huh? Oh yeah, totally. I know what you mean...\n");
    }
    else
    {
        printf("Nice! Mine's going well, thanks for asking.\n");
    }
}