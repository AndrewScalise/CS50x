/*I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 8
Wrong!
Guess #2: 5
Wrong!
Guess #3: 1
Wrong!
Guess #4: 7
Wrong!
Guess #5: 6
Wrong!
Sorry, you ran out of guesses.*/

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
            else if (counter <= 4)
            {
                printf("Wrong!\n");
            }
            else
            {
                printf("Wrong!\nSorry, you ran out of guesses!\n");
            }
            
        }while (guess!=answer && counter < 5);
    }
}