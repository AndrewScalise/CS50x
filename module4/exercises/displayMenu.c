#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Output the restaurant's welcome message:
    printf("Welcome to Better Burger, way better than Good Burger!\n");
    printf("MENU: \n");
    
    //Open the file
    FILE* menu = fopen("exampleMenu.txt", "r");
    
    
    //allocate memory to hold characters in a string
    char line[256];
    
    int counter = 0;
    
    //loop through each line in the input file
    while (fgets(line, 256, menu) != NULL)
    {
        counter++;
        for (int i = 0, n = strlen(line); i < n; i++)
        {
            if (i == 0)
            {
                printf("%i) ", counter);
            }
            printf("%c", line[i]);
        }
    }
    
    //print new line
    printf("\n");
   
    
    //close the file
    fclose(menu);
    return 0;
}