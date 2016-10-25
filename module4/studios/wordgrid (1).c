#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool validate(int argc, string argv[], int dimension);
void printGrid(int argc, string argv[], int dimension);

int main(int argc, string argv[])
{
    //We require the number of words to match the number of letters
    int dimension = argc - 1;
    
    if(!validate(argc, argv, dimension))
    {
        return 1;
    }
    printGrid(argc, argv, dimension);
}

bool validate(int argc, string argv[], int dimension)
{
    for(int i = 1; i < argc; i++)
    {
        if(strlen(argv[i]) != dimension)
        {
            printf("The number of letters in each word must equal the number of words\n");
            return false;
        }
    }
    return true;
}

void printGrid(int argc, string argv[], int dimension)
{
    for(int i = 0; i < dimension; i++)
    {
        for(int j = 1; j < argc; j++)
        {
            printf("%c", argv[j][i]);
        }
        printf("\n");
    }
}