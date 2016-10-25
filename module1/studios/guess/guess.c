/*I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 5
Wrong!
Guess #2: 9
Wrong!
Guess #3: 4
Correct!*/

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
        do
        {
            counter++;
            printf("Guess #%i: ", counter);
            guess = GetInt();
            if (guess == answer)
            {
                printf("Correct!\n");
            }
            else
            {
                printf("Wrong!\n");
            }
            
        }while (guess!=answer);
    }
}