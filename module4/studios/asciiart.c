#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    int* hashLocations;
    int length;
} csvLine;

csvLine extractNumbers(char* line);

int main(void)
{
    //You need to do the following:

    //Prompt the user for an input file
    printf("What is the name of the file I should read from? ");
    string inputFile = GetString();

    //Prompt the user for an output file
    printf("What is the name of the file I should write to? ");
    string outputFile = GetString();

    //Open the file to read from
    FILE* input = fopen(inputFile, "r");
    if (input == NULL)
    {
        printf("Error opening\n");
        return 1;
    }

    //Open the file you're writing to
    FILE* output = fopen(outputFile, "w");

    //For each line being read in from the input file:

        //Pass the line into the given extractNumbers function

        //For each value in the int array returned by extractNumbers:

            //put spaces in the file until the value is reached

            //put a hash in the file
            
    char * fileSize = malloc(sizeof(double)*sizeof(input));
    csvLine picture;
    int counter = 0;
    
    while(fgets(fileSize, sizeof(double)*sizeof(input), input) != NULL)
    {
       
        //printf("%s\n", fileSize);
        picture = extractNumbers(fileSize);
        
        for (int i = 0; i < 120; i++)
        {
            if (i == picture.hashLocations[counter])
            {
                fprintf(output, "#");
                counter++;
            }
            else
            {
                fprintf(output, " ");
            }
        }
        fprintf(output, "\n");
        counter = 0;
    }

    //Close both files
    fclose(input);
    fclose(output);

    //Insert the name of the output file in the print statement below
    printf("Done! If you open up <%s> you should now see a cool image!\n", outputFile);
}

csvLine extractNumbers(char* line)
{
    int count = 0;
    for(int i = 0; i < strlen(line); i++)
    {
        if(line[i] == ',')
        {
            count++;
        }
    }

    char* token;
    int* hV = malloc(sizeof(int) * (count+1));
    int i = 0;
    token = strtok(line, ",");
    hV[i] = atoi(token);
    i++;
    while ((token = strtok(NULL, ",")) != NULL)
    {
        hV[i] = atoi(token);
        i++;
    }
    csvLine result;
    result.hashLocations = hV;
    result.length = count + 1;
    return result;
}