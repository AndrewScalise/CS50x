/*$ ./stretchvertical goat crab bear
Your word grid currently looks like this:
goat
crab
bear
Now I will stretch it out vertically. How much should I stretch by?
3
After stretching by 3, you now have this!
goat
goat
goat
crab
crab
crab
bear
bear
bear*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    
    printf("Strech by how much?: ");
    int n = GetInt();
    
    string s[3] = {"crab", "bear", "goat"};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%s\n", s[i]);
        }
    }
}