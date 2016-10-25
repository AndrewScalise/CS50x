/**
   * Filename: rectangle.c
   * Save in Folder: ~/workspace/module1/studios/rectangle
   * 
   * Write a program that "draws" a rectangle made of hearts "<3" on the console.
   * Your program should prompt the user for a width and a height, and then
   * print the corresponding rectangle.
   * 
   * Example:
   *    $ ./rectangle
   *    Width: 8
   *    Height: 3
   *    <3<3<3<3<3<3<3<3
   *    <3<3<3<3<3<3<3<3
   *    <3<3<3<3<3<3<3<3
   * 
   */
#include <cs50.h>   
#include <stdio.h>
   
   int main(void)
   {
       printf("Width: ");
       int width = GetInt();
       printf("Height: ");
       int height = GetInt();
       
       for (int row = 0; row < height; row++)
       {
           for (int col = 1; col < width; col++)
           {
               printf("<3");
           }
        
            printf("<3\n");
        
       }
   }