/*$ ./canyouvote
How many people want to vote? 3
Age of person 1: 22
Age of person 2: 30
Age of person 3: 14
Person 1 can vote!
Person 2 can vote!
Person 3 cannot vote :(
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many people want to vote? ");
    int n = GetInt();
    
    int people[n];
    
    for(int i = 0; i < n; i++)
    {
        printf("Age of person %i: ", i + 1);
        people[i] = GetInt();
    }
    
    for(int i = 0; i < n; i++)
    {
        if(people[i] < 18)
        {
            printf("Person %i cannot vote :(\n", i + 1);
        }
        else
        {
            printf("Person %i can vote!\n", i + 1);
        }
    }
}
    