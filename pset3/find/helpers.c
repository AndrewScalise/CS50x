/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    //binary search
    
    //define upper and lower bounds
    int upper = n - 1;
    int lower = 0;
    
    //halve array until bounds overlap
    while(lower <= upper)
    {
        //define middle
        int middle = (upper + lower) / 2;
        
        //if value is in the middle
        if(value == values[middle])
        {
            return true;
        }
        
        //if value is left of middle
        else if(value < values[middle])
        {
            //reset upper bound
            upper = middle - 1;
        }
        
        //if value is right of middle
        else if(value > values[middle])
        {
            //reset lower bound
            lower = middle + 1;
        }
    }
    //not found
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    // Bubble sort
    int swaps;
    
    do
    {
        // set swaps to 0
        swaps = 0;
        
        //iterate through the array
        for (int i = 0; i < (n-1); i++)
        {
            //if values[i] > values[i+1]
            if(values[i] > values[i+1])
            {
                //swap values
                int temp = values[i];
                values[i] = values[i+1];
                values[i+1] = temp;
                
                //increment swaps
                swaps++;
            }
        }
    } while(swaps != 0);
}