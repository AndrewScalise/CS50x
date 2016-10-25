 /**
  * Filename: functions-1.c
  * Save in Folder: ~/workspace/module2/followalongs/functions
  * 
  * Include the stdio library
  * Include the cs50 library
  * 
  * Declare a function called GetPositiveInt() with a return type of int
  * 
  * Add main method
  *   
  *   Declare a variable n of type int and assign the function GetPositiveInt() to it.
  *   Print "Thanks for the %i!\n" and use the variable n for the placeholder %i
  *
  * Define GetPositiveInt() with an argument of void
  * Hint: return-type Name(argument){ }
  *   Declare a variable n of type int
  *
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
  
  #include <stdio.h>
  #include <cs50.h>
  
  int GetPositiveInt();
  
  int main(void)
  {
      int n = GetPositiveInt();
      printf("Thanks for the %i!\n", n);
  }
  
  int GetPositiveInt(void)
  {
      int n;
      do
      {
        printf("Please give me a positive int: ");
        n = GetInt();
      }
      while (n < 1);
      return n;
  }