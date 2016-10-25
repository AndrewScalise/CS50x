#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc != 4)
    {
        printf("You need to enter three words.\n");
        return -1;
    }
    
    int s1 = strlen(argv[1]);
    int s2 = strlen(argv[2]);
    int s3 = strlen(argv[3]);
    
    if (s1 && s2 && s3 != 3)
    {
        printf("Each word should be exactly 3 characters-long.\n");
        return -1;
    }
    string st1 = argv[1];
    string st2 = argv[2];
    string st3 = argv[3];
    
    string words[] = {st1, st2,st3};
    
    for (int i = 0, n = 2; i <= n; i++)
    {
        for(int j = 0, m = 2; j <= m; j++)
        {
            printf("%c", words[j][i]);
        }
        printf("\n");
    }
}