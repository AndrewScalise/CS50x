#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get user to enter height of pyramid
    printf("Height: ");
    int height = GetInt();
    
    //verify input must be non negative and no greater than 23
    while(height < 0 || height > 23)
    {
        printf("Height: ");
        height = GetInt();
    }
    
    int n = height;
    
    //for loop to make the pyramid
    for (int row = 0; row < height; row++)
    {
        for (int col = n - 1; col > 0; col--)
        {
            printf(" ");
        }

        for (int i = (height + 1) - n; i > 0; i--)
        {
            printf("#");
        }
        
        n--;
        printf("#\n");
    }
    
}