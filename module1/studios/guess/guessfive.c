 /**
  * PART 3 
  * Filename: guessfive.c
  * Save in Folder: ~/workspace/module1/studios/guessfive
  *
  * Most likely, you've been using a while loop so far. Let's now refactor, and use a for loop instead, just for kicks.  
  * Write another program in a file called guessfive.c, which behaves exactly like guess5, but is implemented with a for loop. 
  * (But if you did use a for loop in guess5, then use a while loop here.)
  * 
  */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("I'm thinking of a number between 1 and 10. Can you guess what it is? ");
    
    int answer = 3;
    
    int guess = GetInt();
    
    int counter = 1;

    
    if (answer == guess)
    {
        printf("Correct!\n");
    }
    else
    {
        printf("Guess #%i: %i\nWrong!\n", counter, guess);
        for(counter = 2; counter <= 5; counter++)
        {
            printf("Guess #%i: ", counter);
            guess = GetInt();
            if (guess == answer)
            {
                printf("Correct!\n");
            }
            else if (counter <= 4)
            {
                printf("Wrong!\n");
            }
            else
            {
                printf("Wrong!\nSorry, you ran out of guesses!\n");
            }
            
        }
    }
}