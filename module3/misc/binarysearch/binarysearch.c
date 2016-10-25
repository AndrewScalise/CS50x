#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    int upper = size - 1;
    int lower = 0;
    
    while(lower <= upper)
    {
        int middle = (lower + upper)/2;
        
        if(needle == haystack[middle])
        {
            return true;
        }
        else if (needle < haystack[middle])
        {
            upper = middle - 1;
        }
        else if (needle > haystack[middle])
        {
            lower = middle + 1;
        }
    }
    
    return false;
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}
