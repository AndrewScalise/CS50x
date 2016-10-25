#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float jack = 20;
    jack -= 3.75;
    float jill = 5.23;
    jack -= 5.23;
    jill -= 1.40;
    float franklin = 2.0;
    jill -= 2.0;
    franklin += 4.05;
    jack -= 4.05;
    float sally = franklin/3.0;
    franklin -= franklin/3.0;
    float average = (jack + jill + franklin + sally) / 4;
    
    printf("Average: %.2f\n", average);
}