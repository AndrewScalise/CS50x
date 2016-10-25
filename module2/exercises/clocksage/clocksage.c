/*$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 5
My prediction: 5 hours hence, the clock shall strike 8!

$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 12
My prediction: 12 hours hence, the clock shall strike 3!

$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 25
My prediction: 25 hours hence, the clock shall strike 4!*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What is the hour? ");
    int n = GetInt();
    
    printf("How far into the future shall I case mine eye? (number of hours plz): ");
    int hours = GetInt();
    int prediction = hours + n;
    if (prediction <= 12)
    {
        printf("My prediction: %i hours hence, the clock shall strike %i!\n", hours, prediction);
    }
    else
    {
        int newPrediction = prediction % 12;
        printf("My prediction: %i hourse hence, the clock shall strike %i!\n", hours, newPrediction);
    }
    
}