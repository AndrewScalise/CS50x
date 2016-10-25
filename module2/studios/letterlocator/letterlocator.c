/**
  * 
  * In a file called letterlocator.c write a program that prompts the user for an alphabetic character, 
  * and then prints the position of that letter in the alphabet, starting with A at position 0. 
  * Your program should work for both capital and lowercase letters, but should reject any input that is not alphabetical, like '3' or '$'.
  *
  * Example:
  * $ ./letterlocator
  * Give me a letter: A
  * A is at position 0
  * $ ./letterlocator
  * Give me a letter: e
  * e is at position 4
  * $ ./letterlocator
  * Give me a letter: @
  * Give me a letter: Y
  * Y is at position 24
  *
  * (Hint: cs50 Library functions GetChar() and isAlpha() will be helpful)
  *
  */
  
  #include <stdio.h>
  #include <cs50.h>
  #include <ctype.h>
  
  int alphaPos(char letter);
  
  int main(void)
  {
      printf("Give me a letter: ");
      char letter = GetChar();
      
      while (isalpha(letter) == false)
      {
          printf("Give me a letter: ");
          letter = GetChar();
      }
      
      int answer = alphaPos(letter);
      
      printf("%c is at position %i\n", letter, answer);
  }
  
  int alphaPos(char c)
  {
      if (isupper(c))
      {
          c = (int)c - 65;
      }
      else
      {
          c = (int)c - 97;
      }
      
      return c;
  }