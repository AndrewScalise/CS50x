 /**
  * PART 2: Mixed-up Echo
  * Filename: mixedupecho.c
  * Save in Folder: ~/workspace/module2/studios/mixedupecho
  *
  * Now for another variation on the "echo" theme. In a file called mixedupecho.c
  * write another program that accepts some command-line arguments and then echoes them back to the console.
  *
  * The twist this time: the echoes should "intermix" with each other, like so:
  * $ ./mixedupecho HELLO!
  * .H/EmLiLxOe!dHuEpLeLcOh!oH
  *
  * For this program, you can ignore any command-line arguments beyond the first two (including the program name itself):
  * $ ./mixedupecho HELLO! morestuff lalala
  * .H/EmLiLxOe!dHuEpLeLcOh!oH
  *
  * Notice how "HELLO!" is shorter than "./mixedupecho", and so the program "wraps around" 
  * and starts over again at 'H'whenever it reaches the end of the string.
  *
  * How can you implement that? The modulo % operator is your friend here.
  * Spcecifically, note that "HELLO!"[5] yields '!', and "HELLO!"[6] is beyond the bounds of the array.
  * But "HELLO!"[6 % 6] evaluates to "HELLO!"[0], which yields 'H'.
  * And "HELLO!"[7 % 6] evaluates to "HELLO!"[1] ...
  *
  * To keep things simple, you can assume that the second argument will always be shorter than the first. 
  * In other words, the user will never provide a string longer than "./mixedupecho", which is 13 characters long. 
  *
  * **Bonus (Optional)**
  *
  * Just kidding about that last part.
  *
  * Now you may NOT assume the second argument will be the shorter one. 
  *
  * Example: The user might type this:
  * $ ./mixedupecho GREENEGGSANDSPAM
  *
  * in which case the output should be:
  * .G/RmEiExNeEdGuGpSeAcNhDoS.P/AmM
  * 
  */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    int i = 0;
    int k = 1;
    int n = strlen(argv[i]);
    int m = strlen(argv[k]);
    if (m < n)
    {
        for (int j = 0; j < n; j++)
        {
            int l = j % m;
            printf("%c", argv[i][j]);
            printf("%c", argv[k][l]);
        }
    }
    else 
    {
        for (int h = 0; h < m; h++)
        {
            int l = h % n;
            printf("%c", argv[i][l]);
            printf("%c", argv[k][h]);
        }
    }
    
    
    printf("\n");
}