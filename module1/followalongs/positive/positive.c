 /**
  * Filename: positive.c
  * Save in Folder: ~/workspace/module1/followalongs/positive
  * 
  * Include the stdio library
  * Include the cs50 library
  * Add main method
  * (Hint: Don't forget to add curly braces { })
  *    Declare a variable called n of type int and assign the user input to it.
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  * 
  */
  
  #include <cs50.h>
  #include <stdio.h>
  
  int main(void)
  {
      int n;
      do
      {
          printf("Please give me a positive integer: ");
          n = GetInt();
      } while (n < 1);
        printf("Thanks for the positive int!\n");
  }