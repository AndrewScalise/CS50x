 /**
  * $ ./stretchhorizontal goat crab bear
  * Your word grid currently looks like this:
  * goat
  * crab
  * bear
  * Now I will stretch it out horizontally. How much should I stretch by?
  * 3
  * After stretching by 3, you now have this!
  * gggoooaaattt
  * cccrrraaabbb
  * bbbeeeaaarrr
  * Only after writing these little badboys should you start to think about how to combine both steps into one big badderboy.
  * 
  */
  
  #include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    
    printf("Strech by how much?: ");
    int n = GetInt();
    
    string s[3] = {"crab", "bear", "goat"};
    int m = strlen(s[1]);

    
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