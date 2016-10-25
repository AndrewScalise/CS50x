#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Usage: only three words\n");
        return 1;
    }
    
    printf("Strech by how much?: ");
    int n = GetInt();
    
    while (n < 0)
    {
        printf("Stretch by how much?: ");
        n = GetInt();
    }
    
    string s[3] = {argv[1], argv[2], argv[3]};
    int m = strlen(s[0]);
    int o = strlen(s[1]);
    int p = strlen(s[2]);
    
    if(m != o || o != p)
    {
        printf("Usage: words not same length\n");
        return 1;
    }

    
    for (int i = 0; i < 3; i++)
    {
        int x = 0;
        while (x < n)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    printf("%c", s[i][j]);
                }
            }
            x++;
            printf("\n");
        }
    }
}