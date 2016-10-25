#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Whaddaya say, kid?\n");
    string s = GetString();
    
    if (s == NULL)
    {
        return 1;
    }
    
    string t = malloc((strlen(s) + 1) * (sizeof(char) * 2));
    
    if(t == NULL)
    {
        free(s);
        return 1;
    }
    
    int n = strlen(s);
    
    for (int i = 0; i < n; i++)
    {
        t[i] = s[i];
        t[i+n] = s[i];
    }
    
    
    printf("%s\n", t);
    
    free(s);
    free(t);
    
    return 0;
}